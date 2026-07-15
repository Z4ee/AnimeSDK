#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3734AABE8A85B17F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_3734AABE8A85B17F___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17637DD0)
#define CLASS_2_3734AABE8A85B17F___C__DISPLAYCLASS7_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x17638470)

inline static constexpr unsigned int Class_2_3734AABE8A85B17F___c__DisplayClass7_0_TypeDefinitionIndex = 68665;

class Class_2_3734AABE8A85B17F___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_2_3734AABE8A85B17F* __4__this; // 0x10
	::RPG::GameCore::GameEntity* entity; // 0x18
	::RPG::GameCore::SkillData* skillData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3734AABE8A85B17F___C__DISPLAYCLASS7_0__SETUPSKILL_B__0_OFFSET))(this);
	}
};
