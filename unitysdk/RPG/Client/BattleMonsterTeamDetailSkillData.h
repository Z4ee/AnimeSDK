#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleMonsterTeamDetailExtraEffectData; }
namespace RPG::GameCore { class MonsterSkillRowData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9E67AA0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_EXTRAEFFECTDATAS_OFFSET UNITYSDK_OFFSET(0x9E68A70)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_PHASEID_OFFSET UNITYSDK_OFFSET(0x9E68A30)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_SKILLROWS_OFFSET UNITYSDK_OFFSET(0x9E68A50)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_ONADDALLSKILLSEND_OFFSET UNITYSDK_OFFSET(0x9E676F0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_EXTRAEFFECTDATAS_OFFSET UNITYSDK_OFFSET(0x9E68A80)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_PHASEID_OFFSET UNITYSDK_OFFSET(0x9E68A40)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_SKILLROWS_OFFSET UNITYSDK_OFFSET(0x9E68A60)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E68040)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__GETEXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x9E685B0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__SORTSKILLS_OFFSET UNITYSDK_OFFSET(0x9E680B0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__UPDATEEXTRAEFFECTDATAS_OFFSET UNITYSDK_OFFSET(0x9E68370)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailSkillData_TypeDefinitionIndex = 66365;

	class BattleMonsterTeamDetailSkillData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRowData*>* _SkillRows_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailExtraEffectData*>* _ExtraEffectDatas_k__BackingField; // 0x18
		::System::UInt32 _PhaseID_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterTeamDetailSkillData* Create(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailSkillData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_CREATE_OFFSET))(phaseID);
		}

		::System::Void OnAddAllSkillsEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_ONADDALLSKILLSEND_OFFSET))(this);
		}

		::System::Void _SortSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__SORTSKILLS_OFFSET))(this);
		}

		::System::Void _UpdateExtraEffectDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__UPDATEEXTRAEFFECTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetExtraEffectIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA__GETEXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::UInt32 get_PhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_PHASEID_OFFSET))(this);
		}

		::System::Void set_PhaseID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_PHASEID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRowData*>* get_SkillRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_SKILLROWS_OFFSET))(this);
		}

		::System::Void set_SkillRows(::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRowData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MonsterSkillRowData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_SKILLROWS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailExtraEffectData*>* get_ExtraEffectDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailExtraEffectData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_GET_EXTRAEFFECTDATAS_OFFSET))(this);
		}

		::System::Void set_ExtraEffectDatas(::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailExtraEffectData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailExtraEffectData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA_SET_EXTRAEFFECTDATAS_OFFSET))(this, value);
		}
	};
}
