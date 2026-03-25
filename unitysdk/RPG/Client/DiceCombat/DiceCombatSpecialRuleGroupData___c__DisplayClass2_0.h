#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9486910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA___C__DISPLAYCLASS2_0__PINSPECIALRULEBYID_B__0_OFFSET UNITYSDK_OFFSET(0x9486960)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleGroupData___c__DisplayClass2_0_TypeDefinitionIndex = 61928;

	class DiceCombatSpecialRuleGroupData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::UInt32 specialRuleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PinSpecialRuleByID_b__0(::RPG::Client::DiceCombat::DiceCombatSpecialRuleData* ruleData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA___C__DISPLAYCLASS2_0__PINSPECIALRULEBYID_B__0_OFFSET))(this, ruleData);
		}
	};
}
