#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_15B3DD195FDC216E;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace RPG::GameCore { class DiceCombatWeatherSkillConfig; }

#define CLASS_1_0272D5A0C4F089B0__CTOR_OFFSET UNITYSDK_OFFSET(0x197019F0)

inline static constexpr unsigned int Class_1_0272D5A0C4F089B0_TypeDefinitionIndex = 35713;

class Class_1_0272D5A0C4F089B0 : public ::System::Object
{
public:
	::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* DFCJJBJGCAL; // 0x10
	::RPG::GameCore::DiceCombatSkillConfig* PMKGFOMHPOD; // 0x18
	::RPG::GameCore::ActivityDiceCombatAIGroupRow* DBNHCIFEHGD; // 0x20
	::RPG::GameCore::DiceCombatWeatherSkillConfig* DOJDGDAJHBF; // 0x28
	::Class_1_15B3DD195FDC216E* APOJICIKJPF; // 0x30
	::System::Int32 NBNGFFPLGAF; // 0x38
	::System::Int32 JFICKDBIECD; // 0x3C
	::System::Boolean IDFGNIJBMPB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0272D5A0C4F089B0__CTOR_OFFSET))(this);
	}
};
