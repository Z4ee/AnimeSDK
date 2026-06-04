#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_061D7BF204782B70;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_061D7BF204782B70___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE51F0)
#define CLASS_2_061D7BF204782B70___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xAAE6680)

inline static constexpr unsigned int Class_2_061D7BF204782B70___c__DisplayClass16_0_TypeDefinitionIndex = 67047;

class Class_2_061D7BF204782B70___c__DisplayClass16_0 : public ::System::Object
{
public:
	::Class_2_061D7BF204782B70* __4__this; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_061D7BF204782B70___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupBossEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_061D7BF204782B70___C__DISPLAYCLASS16_0__SETUPBOSSENTITY_B__0_OFFSET))(this);
	}
};
