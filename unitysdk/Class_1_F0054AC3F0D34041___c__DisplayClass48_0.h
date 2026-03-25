#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BDA8DEEF59BE3031;

#define CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8990DC0)
#define CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS48_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET UNITYSDK_OFFSET(0x89931D0)

inline static constexpr unsigned int Class_1_F0054AC3F0D34041___c__DisplayClass48_0_TypeDefinitionIndex = 48857;

class Class_1_F0054AC3F0D34041___c__DisplayClass48_0 : public ::System::Object
{
public:
	::Class_1_BDA8DEEF59BE3031* dice; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _RefreshStageDicesRender_b__0(::Class_1_BDA8DEEF59BE3031* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_F0054AC3F0D34041___C__DISPLAYCLASS48_0__REFRESHSTAGEDICESRENDER_B__0_OFFSET))(this, x);
	}
};
