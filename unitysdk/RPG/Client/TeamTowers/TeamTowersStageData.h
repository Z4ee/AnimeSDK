#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TeamTowers/TeamTowersStageDifficultyType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TeamTowersStageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TeamTowers { class TeamTowersBossData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GETBRICKICONPATH_OFFSET UNITYSDK_OFFSET(0x194711E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x19471060)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BOSSID_OFFSET UNITYSDK_OFFSET(0x19471040)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BRICKIDLIST_OFFSET UNITYSDK_OFFSET(0x194710E0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x19471180)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1946E520)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_HASPASSED_OFFSET UNITYSDK_OFFSET(0x19471160)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x19471020)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISHARDSTAGE_OFFSET UNITYSDK_OFFSET(0x1946CDD0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISPVPSTAGE_OFFSET UNITYSDK_OFFSET(0x19471140)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x194711A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ROBOTIDLIST_OFFSET UNITYSDK_OFFSET(0x19471100)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_SPECIALDESC_OFFSET UNITYSDK_OFFSET(0x19471120)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_STAGEDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x194710A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x19471080)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x194711C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_UNLOCKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x194710C0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BOSSDATA_OFFSET UNITYSDK_OFFSET(0x19471070)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BOSSID_OFFSET UNITYSDK_OFFSET(0x19471050)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BRICKIDLIST_OFFSET UNITYSDK_OFFSET(0x194710F0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_DEADCOUNT_OFFSET UNITYSDK_OFFSET(0x19471190)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_HASPASSED_OFFSET UNITYSDK_OFFSET(0x19471170)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x19471030)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ISPVPSTAGE_OFFSET UNITYSDK_OFFSET(0x19471150)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x194711B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ROBOTIDLIST_OFFSET UNITYSDK_OFFSET(0x19471110)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_SPECIALDESC_OFFSET UNITYSDK_OFFSET(0x19471130)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_STAGEDIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x194710B0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_STARIDLIST_OFFSET UNITYSDK_OFFSET(0x19471090)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x194711D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_UNLOCKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x194710D0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19471270)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersStageData_TypeDefinitionIndex = 75058;

	class TeamTowersStageData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RobotIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockSkillIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _StarIDList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _BrickIDList_k__BackingField; // 0x28
		::RPG::Client::TeamTowers::TeamTowersBossData* _BossData_k__BackingField; // 0x30
		::RPG::Client::TextID _SpecialDesc_k__BackingField; // 0x38
		::RPG::Client::TeamTowers::TeamTowersStageDifficultyType _StageDifficultyType_k__BackingField; // 0x48
		::RPG::GameCore::TeamTowersStageType _Type_k__BackingField; // 0x4C
		::System::UInt32 _BossID_k__BackingField; // 0x50
		::System::UInt32 _ID_k__BackingField; // 0x54
		::System::UInt32 _DeadCount_k__BackingField; // 0x58
		::System::Boolean _IsUnlocked_k__BackingField; // 0x5C
		::System::Boolean _IsPvpStage_k__BackingField; // 0x5D
		::System::Boolean _HasPassed_k__BackingField; // 0x5E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BossID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BOSSID_OFFSET))(this);
		}

		::System::Void set_BossID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BOSSID_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersBossData* get_BossData()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersBossData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BOSSDATA_OFFSET))(this);
		}

		::System::Void set_BossData(::RPG::Client::TeamTowers::TeamTowersBossData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersBossData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BOSSDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_StarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_STARIDLIST_OFFSET))(this);
		}

		::System::Void set_StarIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_STARIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TeamTowers::TeamTowersStageDifficultyType get_StageDifficultyType()
		{
			return ((::RPG::Client::TeamTowers::TeamTowersStageDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_STAGEDIFFICULTYTYPE_OFFSET))(this);
		}

		::System::Void set_StageDifficultyType(::RPG::Client::TeamTowers::TeamTowersStageDifficultyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamTowers::TeamTowersStageDifficultyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_STAGEDIFFICULTYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockSkillIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_UNLOCKSKILLIDLIST_OFFSET))(this);
		}

		::System::Void set_UnlockSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_UNLOCKSKILLIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BrickIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_BRICKIDLIST_OFFSET))(this);
		}

		::System::Void set_BrickIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_BRICKIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RobotIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ROBOTIDLIST_OFFSET))(this);
		}

		::System::Void set_RobotIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ROBOTIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SpecialDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_SPECIALDESC_OFFSET))(this);
		}

		::System::Void set_SpecialDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_SPECIALDESC_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHardStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISHARDSTAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Boolean get_IsPvpStage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISPVPSTAGE_OFFSET))(this);
		}

		::System::Void set_IsPvpStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ISPVPSTAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_HASPASSED_OFFSET))(this);
		}

		::System::Void set_HasPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_HASPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_DeadCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_DEADCOUNT_OFFSET))(this);
		}

		::System::Void set_DeadCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_DEADCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::GameCore::TeamTowersStageType get_Type()
		{
			return ((::RPG::GameCore::TeamTowersStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::TeamTowersStageType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamTowersStageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_SET_TYPE_OFFSET))(this, a1);
		}

		::System::String* GetBrickIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSSTAGEDATA_GETBRICKICONPATH_OFFSET))(this, a1);
		}
	};
}
