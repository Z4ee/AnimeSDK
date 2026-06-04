#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatSpecialRuleGroupData; }
namespace RPG::GameCore { class ActivityDiceCombatRankConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB7AE8E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_DICERANKID_OFFSET UNITYSDK_OFFSET(0xB7AEAC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_HASSPECIALRULE_OFFSET UNITYSDK_OFFSET(0xB7AEDB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xB7AED50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_ICONSMALLPATH_OFFSET UNITYSDK_OFFSET(0xB7A3610)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB7AED70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_RANKMAXSCORE_OFFSET UNITYSDK_OFFSET(0xB7AED20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_RANKMINSCORE_OFFSET UNITYSDK_OFFSET(0xB7AED40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_SPECIALRULEGROUPDATAS_OFFSET UNITYSDK_OFFSET(0xB7AEDA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB7AE8D0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatRankLevelData_TypeDefinitionIndex = 70655;

	class DiceCombatRankLevelData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityDiceCombatRankConfigRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>* _SpecialRuleGroupDatas; // 0x18
		::System::UInt32 _RankMinScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatRankLevelData* Create(::RPG::GameCore::ActivityDiceCombatRankConfigRow* a1)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatRankLevelData*(*)(::RPG::GameCore::ActivityDiceCombatRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_CREATE_OFFSET))(a1);
		}

		::System::UInt32 get_DiceRankID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_DICERANKID_OFFSET))(this);
		}

		::System::UInt32 get_RankMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_RANKMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RankMinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_RANKMINSCORE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_IconSmallPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_ICONSMALLPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>* get_SpecialRuleGroupDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatSpecialRuleGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_SPECIALRULEGROUPDATAS_OFFSET))(this);
		}

		::System::Boolean get_HasSpecialRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATRANKLEVELDATA_GET_HASSPECIALRULE_OFFSET))(this);
		}
	};
}
