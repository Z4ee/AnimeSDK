#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAD0C0)
#define CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_0___REFRESHSUMMONLINK_B__0_OFFSET UNITYSDK_OFFSET(0x16CAD260)

inline static constexpr unsigned int Class_1_B9D6E7E76075C6E2_2___c__DisplayClass6_0_TypeDefinitionIndex = 79680;

class Class_1_B9D6E7E76075C6E2_2___c__DisplayClass6_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* summoner; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __RefreshSummonLink_b__0(::Class_1_0471857D35382E2E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + CLASS_1_B9D6E7E76075C6E2_2___C__DISPLAYCLASS6_0___REFRESHSUMMONLINK_B__0_OFFSET))(this, a1);
	}
};
