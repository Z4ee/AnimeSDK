#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C_1;
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9486540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x94805C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_EFFECTIVEROUNDID_OFFSET UNITYSDK_OFFSET(0x9486920)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9486930)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_RULELIST_OFFSET UNITYSDK_OFFSET(0x9486950)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_PINSPECIALRULEBYID_OFFSET UNITYSDK_OFFSET(0x9486720)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94863C0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleGroupData_TypeDefinitionIndex = 61927;

	class DiceCombatSpecialRuleGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* _RuleList; // 0x10
		::RPG::GameCore::ActivityDiceRuleGroupRow* _Row; // 0x18
		::System::UInt32 _EffectiveRoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* Create(::Class_1_A88C3AAF0DD46F4C_1* ruleGroupItem)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*(*)(::Class_1_A88C3AAF0DD46F4C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_OFFSET))(ruleGroupItem);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* Create_1(::System::UInt32 effectiveRoundID, ::System::UInt32 ruleGroupID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_1_OFFSET))(effectiveRoundID, ruleGroupID);
		}

		::System::Void PinSpecialRuleByID(::System::UInt32 specialRuleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_PINSPECIALRULEBYID_OFFSET))(this, specialRuleID);
		}

		::System::UInt32 get_EffectiveRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_EFFECTIVEROUNDID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_ID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* get_RuleList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_RULELIST_OFFSET))(this);
		}
	};
}
