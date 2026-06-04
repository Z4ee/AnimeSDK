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

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATEFROMID_OFFSET UNITYSDK_OFFSET(0xB400BB0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB400690)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETALLPHASESKILLS_OFFSET UNITYSDK_OFFSET(0xB400E20)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GETDEFAULTPHASEID_OFFSET UNITYSDK_OFFSET(0xB400D50)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET_CONTAINSMULTIFORMTAG_OFFSET UNITYSDK_OFFSET(0xB4018A0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_GET__SKILLHIDEINFONAMES_OFFSET UNITYSDK_OFFSET(0xB401470)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__ADDSKILLTOPHASE_OFFSET UNITYSDK_OFFSET(0xB401550)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB4007F0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__DISPATCHSKILLTOPHASE_OFFSET UNITYSDK_OFFSET(0xB401090)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__REFRESHSKILLS_OFFSET UNITYSDK_OFFSET(0xB400880)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailData_TypeDefinitionIndex = 67302;

	class BattleMonsterTeamDetailData : public ::System::Object
	{
	public:
		// static const ::System::String* _MultiFormTag; // 0x0
		// static const ::System::UInt32 _DefaultPhaseID = 0x1; // 0x0
		::RPG::GameCore::MonsterDataComponent* _MonsterDataComponent; // 0x10
		::RPG::GameCore::MonsterRowData* _MonsterRowData; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleMonsterTeamDetailSkillData*>* _PhaseSkills; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::BattleMonsterTeamDetailData* Create(::RPG::GameCore::MonsterDataComponent* a1)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailData*(*)(::RPG::GameCore::MonsterDataComponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::BattleMonsterTeamDetailData* CreateFromID(::System::UInt32 a1)
		{
			return ((::RPG::Client::BattleMonsterTeamDetailData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA_CREATEFROMID_OFFSET))(a1);
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

		::System::Void _DispatchSkillToPhase(::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a1, ::System::Nullable_1<::System::UInt32> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__DISPATCHSKILLTOPHASE_OFFSET))(this, a1, a2);
		}

		::System::Void _AddSkillToPhase(::RPG::GameCore::MonsterSkillRowData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILDATA__ADDSKILLTOPHASE_OFFSET))(this, a1, a2);
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
