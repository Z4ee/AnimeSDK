#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_BDA8DEEF59BE3031;
class Class_1_F0054AC3F0D34041;

#define CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89908D0)
#define CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS47_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET UNITYSDK_OFFSET(0x8993170)

inline static constexpr unsigned int Class_1_F0054AC3F0D34041___c__DisplayClass47_0_TypeDefinitionIndex = 48856;

class Class_1_F0054AC3F0D34041___c__DisplayClass47_0 : public ::System::Object
{
public:
	::Class_1_BDA8DEEF59BE3031* dice; // 0x10
	::Class_1_F0054AC3F0D34041* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshHoldedDicesData_b__0(::Class_1_0E117AC86D8E5BCA* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS47_0__REFRESHHOLDEDDICESDATA_B__0_OFFSET))(this, x);
	}
};
