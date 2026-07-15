#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A88C3AAF0DD46F4C;
namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleData; }
namespace RPG::GameCore { class ActivityDiceRuleGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1A4239F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A41D850)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_EFFECTIVEROUNDID_OFFSET UNITYSDK_OFFSET(0x1A423E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A423E40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_GET_RULELIST_OFFSET UNITYSDK_OFFSET(0x1A423E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_PINSPECIALRULEBYID_OFFSET UNITYSDK_OFFSET(0x1A423C30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4239E0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatSpecialRuleGroupData_TypeDefinitionIndex = 72174;

	class DiceCombatSpecialRuleGroupData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceRuleGroupRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleData*>* _RuleList; // 0x18
		::System::UInt32 _EffectiveRoundID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* Create(::Class_1_A88C3AAF0DD46F4C* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*(*)(::Class_1_A88C3AAF0DD46F4C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData* Create_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void PinSpecialRuleByID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATSPECIALRULEGROUPDATA_PINSPECIALRULEBYID_OFFSET))(this, a1);
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
