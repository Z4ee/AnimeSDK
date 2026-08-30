#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_2E0A1A668714B3CC;
namespace RPG::GameCore { class TeamTowersSkillConfig; }

#define CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS73_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C05DDA0)
#define CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS73_0___USEBOSSSKILL_B__0_OFFSET UNITYSDK_OFFSET(0x1C066110)

inline static constexpr unsigned int Class_4_2E0A1A668714B3CC___c__DisplayClass73_0_TypeDefinitionIndex = 36475;

class Class_4_2E0A1A668714B3CC___c__DisplayClass73_0 : public ::System::Object
{
public:
	::RPG::GameCore::TeamTowersSkillConfig* skillConfig; // 0x10
	::Class_4_2E0A1A668714B3CC* __4__this; // 0x18
	::System::UInt32 skillID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS73_0__CTOR_OFFSET))(this);
	}

	::System::Void __UseBossSkill_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS73_0___USEBOSSSKILL_B__0_OFFSET))(this);
	}
};
