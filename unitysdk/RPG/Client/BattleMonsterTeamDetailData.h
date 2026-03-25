#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleMonsterTeamDetailSkillData; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class MonsterDataComponent; }
namespace RPG::GameCore { class MonsterRowData; }
namespace RPG::GameCore { class MonsterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATEFROMID_OFFSET UNITYSDK_OFFSET(0x91C0220)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x91BFD20)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0x91C04D0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETDEFAULTPHASEID_OFFSET UNITYSDK_OFFSET(0x91C03C0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET_CONTAINSMULTIFORMTAG_OFFSET UNITYSDK_OFFSET(0x91C0F20)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET__SKILLHIDEINFONAMES_OFFSET UNITYSDK_OFFSET(0x91C0AC0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__ADDSKILLTOPHASE_OFFSET UNITYSDK_OFFSET(0x91C0BB0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x91BFE80)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__DISPATCHSKILLTOPHASE_OFFSET UNITYSDK_OFFSET(0x91C0690)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__REFRESHSKILLS_OFFSET UNITYSDK_OFFSET(0x91BFF10)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailData_TypeDefinitionIndex = 58992;

	class BattleMonsterTeamDetailData : public ::System::Object
	{
	public:
		// static const ::System::String* _MultiFormTag; // 0x0
		// static const ::System::UInt32 _DefaultPhaseID = 0x1; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleMonsterTeamDetailSkillData*>* _PhaseSkills; // 0x10
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x18
		::RPG::GameCore::MonsterDataComponent* _MonsterDataComponent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterTeamDetailData* Create(::RPG::GameCore::MonsterDataComponent* monsterDataComponent)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailData*(*)(::RPG::GameCore::MonsterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATE_OFFSET))(monsterDataComponent);
		}

		static ::RPG::Client::BattleMonsterTeamDetailData* CreateFromID(::System::UInt32 monsterID)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATEFROMID_OFFSET))(monsterID);
		}

		::System::UInt32 GetDefaultPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETDEFAULTPHASEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>* GetAllPhaseSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleMonsterTeamDetailSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETALLPHASESKILLS_OFFSET))(this);
		}

		::System::Void _RefreshSkills()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__REFRESHSKILLS_OFFSET))(this);
		}

		::System::Void _DispatchSkillToPhase(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* skillRowDatas, ::System::Nullable_1<::System::UInt32> phaseNo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__DISPATCHSKILLTOPHASE_OFFSET))(this, skillRowDatas, phaseNo);
		}

		::System::Void _AddSkillToPhase(::RPG::GameCore::MonsterSkillRowData* monsterSkillRowData, ::System::UInt32 phaseID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__ADDSKILLTOPHASE_OFFSET))(this, monsterSkillRowData, phaseID);
		}

		::System::Boolean get_ContainsMultiFormTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET_CONTAINSMULTIFORMTAG_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* get__SkillHideInfoNames()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET__SKILLHIDEINFONAMES_OFFSET))(this);
		}
	};
}
