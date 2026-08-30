#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_5A90AF44F94B079E;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_5A90AF44F94B079E___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C7790)
#define CLASS_2_5A90AF44F94B079E___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1A7C80C0)

inline static constexpr unsigned int Class_2_5A90AF44F94B079E___c__DisplayClass8_0_TypeDefinitionIndex = 71863;

class Class_2_5A90AF44F94B079E___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::RPG::GameCore::SkillData* skillData; // 0x18
	::Class_2_5A90AF44F94B079E* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5A90AF44F94B079E___C__DISPLAYCLASS8_0__SETUPSKILL_B__0_OFFSET))(this);
	}
};
