#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1FC5D5AA0673F529;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_1FC5D5AA0673F529___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA819490)
#define CLASS_2_1FC5D5AA0673F529___C__DISPLAYCLASS7_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0xA819B30)

inline static constexpr unsigned int Class_2_1FC5D5AA0673F529___c__DisplayClass7_0_TypeDefinitionIndex = 67212;

class Class_2_1FC5D5AA0673F529___c__DisplayClass7_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::RPG::GameCore::SkillData* skillData; // 0x18
	::Class_2_1FC5D5AA0673F529* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FC5D5AA0673F529___C__DISPLAYCLASS7_0__SETUPSKILL_B__0_OFFSET))(this);
	}
};
