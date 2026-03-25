#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_15B3DD195FDC216E;
namespace RPG::GameCore { class ActivityDiceCombatAIGroupRow; }
namespace RPG::GameCore { class ActivityDiceCombatSpecialRuleRow; }
namespace RPG::GameCore { class DiceCombatSkillConfig; }
namespace RPG::GameCore { class DiceCombatWeatherSkillConfig; }

#define CLASS_1_0272D5A0C4F089B0__CTOR_OFFSET UNITYSDK_OFFSET(0x1670DDC0)

inline static constexpr unsigned int Class_1_0272D5A0C4F089B0_TypeDefinitionIndex = 28505;

class Class_1_0272D5A0C4F089B0 : public ::System::Object
{
public:
	::Class_1_15B3DD195FDC216E* Field_1_0; // 0x10
	::RPG::GameCore::DiceCombatSkillConfig* Field_1_1; // 0x18
	::RPG::GameCore::DiceCombatWeatherSkillConfig* Field_1_3; // 0x20
	::RPG::GameCore::ActivityDiceCombatAIGroupRow* Field_1_7; // 0x28
	::RPG::GameCore::ActivityDiceCombatSpecialRuleRow* Field_1_2; // 0x30
	::System::Int32 Field_1_6; // 0x38
	::System::Boolean Field_1_5; // 0x3C
	::System::Int32 Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0272D5A0C4F089B0__CTOR_OFFSET))(this);
	}
};
