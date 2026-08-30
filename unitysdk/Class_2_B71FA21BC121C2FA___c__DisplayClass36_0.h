#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B71FA21BC121C2FA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }

#define CLASS_2_B71FA21BC121C2FA___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x163F5D40)
#define CLASS_2_B71FA21BC121C2FA___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x163F8790)

inline static constexpr unsigned int Class_2_B71FA21BC121C2FA___c__DisplayClass36_0_TypeDefinitionIndex = 71833;

class Class_2_B71FA21BC121C2FA___c__DisplayClass36_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* entity; // 0x10
	::RPG::GameCore::SkillData* skillData; // 0x18
	::Class_2_B71FA21BC121C2FA* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetupSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B71FA21BC121C2FA___C__DISPLAYCLASS36_0__SETUPSKILL_B__0_OFFSET))(this);
	}
};
