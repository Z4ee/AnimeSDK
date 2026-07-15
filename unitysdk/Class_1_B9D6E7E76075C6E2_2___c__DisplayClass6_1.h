#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;

#define CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1525BEE0)
#define CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_1___REFRESHSUMMONLINK_B__1_OFFSET UNITYSDK_OFFSET(0x1525C0F0)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_2___c__DisplayClass6_1_TypeDefinitionIndex = 76048;

class Class_1_B9D6E7E76075C6E2_2___c__DisplayClass6_1 : public ::System::Object
{
public:
	::Class_1_0471857D35382E2E* enemy; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshSummonLink_b__1(::Class_1_0471857D35382E2E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_1___REFRESHSUMMONLINK_B__1_OFFSET))(this, a1);
	}
};
