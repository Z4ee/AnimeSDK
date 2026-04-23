#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_13FE4AAA1A281B42;
class Class_1_9C8BB23B0435A836;

#define CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B1CF10)
#define CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS61_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET UNITYSDK_OFFSET(0x11B21320)

inline static constexpr unsigned int Class_1_13FE4AAA1A281B42___c__DisplayClass61_0_TypeDefinitionIndex = 55623;

class Class_1_13FE4AAA1A281B42___c__DisplayClass61_0 : public ::System::Object
{
public:
	::Class_1_13FE4AAA1A281B42* __4__this; // 0x10
	::Class_1_9C8BB23B0435A836* dice; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshHoldedDicesData_b__0(::Class_1_0E117AC86D8E5BCA* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_13FE4AAA1A281B42___C__DISPLAYCLASS61_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET))(this, x);
	}
};
