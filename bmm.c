#include<stdio.h>
int bmm( int x, int y)
{
	int a = 0, b = 0, c = 1;
	if (x < y){
		a = x;
		b = y;	
	}
	else {
		a = y;
		b = x;
	}
	while(c != 0){
		c = b / a;
		--a;
	}
	a = a + 1;
	printf("%d\n", a);
	return a;
}
int kmm( int x, int y)
{
	return x * y / bmm(x , y); 
}
int main()
{
	int x, y, c = 0;
	scanf("%d%d", &x, &y);
	c = bmm(x, y)/kmm(x, y);
	printf("%d", c);
	return 0;
}
