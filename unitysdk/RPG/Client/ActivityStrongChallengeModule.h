#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_64E52A323C80D766_5;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBattleResultData; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x9C5CB40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EEA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EF00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0x9C5EF20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x9C5EF40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x9C5EFA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EE80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EEE0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9C5EF60)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0x9C5EF80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EE60)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EEC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9C5BBC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x9C5CC20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x9C5D2B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET UNITYSDK_OFFSET(0x9C5C880)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9C5C980)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x9C5CE30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET UNITYSDK_OFFSET(0x9C5CDC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET UNITYSDK_OFFSET(0x9C5C8D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EEB0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EF10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0x9C5EF30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0x9C5EF50)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EE90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EEF0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9C5EF70)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0x9C5EF90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x9C5EE70)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0x9C5EED0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9C5D1E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C5C760)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C5C6B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5F180)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x9C5D400)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9C5E000)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET UNITYSDK_OFFSET(0x9C5C2E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0x9C5C4E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x9C5BCD0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x9C5E5E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x9C5EAF0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x9C5F200)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x9C5D720)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9C5F210)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C5F300)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9C5F2A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule_TypeDefinitionIndex = 57103;

	class ActivityStrongChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _HardStages_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _AllStages_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _AllStageIDs_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _HardStageIDs_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _NormalStages_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* _LastBattleAvatars; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* _Buffs_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _LastBattleBuffIDs; // 0x50
		::RPG::Client::ActivityStrongChallengeBattleResultData* _LastBattleResult; // 0x58
		::RPG::Client::ActivityStrongChallengeStageData* _LastEnteredStage_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _NormalStageIDs_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x70
		::System::Boolean _IsHardModeUnlocked; // 0x78
		::System::Boolean _ShouldAutoShow; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void RefreshAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET))(this);
		}

		::System::Void RefreshHardModeUnlockMissionProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET))(this);
		}

		::RPG::Client::ActivityStrongChallengeStageData* GetStage(::System::UInt32 stageID)
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET))(this, stageID);
		}

		static ::System::Boolean IsInStrongChallengeBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET))();
		}

		::System::Void SaveTeamConfig(::RPG::Client::ActivityStrongChallengeStageData* stage, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* avatars, ::System::Collections::Generic::List_1<::System::UInt32>* buffIDs)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET))(this, stage, avatars, buffIDs);
		}

		::System::Void ReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SendGetStrongChallengeActivityDataCsReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET))(this);
		}

		::System::Boolean IsStageShowRedDot(::System::UInt32 stageID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET))(this, stageID);
		}

		::System::Void _HandleActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObj);
		}

		::System::Boolean _UpdateStage(::System::UInt32 stageID, ::Class_1_64E52A323C80D766_5* stageProto)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_64E52A323C80D766_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET))(this, stageID, stageProto);
		}

		::System::Void _HandleBattleEndScNotify(::System::UInt16 cmd, ::System::Object* rspObj)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET))(this, cmd, rspObj);
		}

		::System::Void _OpenResultPage(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET))(this, obj);
		}

		::System::Void _RefreshFinishedQuestIDs(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET))(this, obj);
		}

		::Il2CppArray<::System::UInt32>* get_NormalStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_NormalStageIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_HardStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_HardStageIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_AllStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_AllStageIDs(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_NormalStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET))(this);
		}

		::System::Void set_NormalStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_HardStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET))(this);
		}

		::System::Void set_HardStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_AllStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET))(this);
		}

		::System::Void set_AllStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* get_BossDetails()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET))(this);
		}

		::System::Void set_BossDetails(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* get_Buffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET))(this);
		}

		::System::Void set_Buffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET))(this, value);
		}

		::System::Boolean get_IsHardModeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsHardModeUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET))(this, value);
		}

		::RPG::Client::ActivityStrongChallengeStageData* get_LastEnteredStage()
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET))(this);
		}

		::System::Void set_LastEnteredStage(::RPG::Client::ActivityStrongChallengeStageData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET))(this);
		}

		::System::Void _InitStageData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET))(this);
		}

		::System::Void _InitBossDetailData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET))(this);
		}

		::System::Void _InitBuffData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET))(this);
		}

		::System::Void _RefreshHardModeUnlockMissionProgress_b__4_0(::RPG::Client::MainMissionData* mainMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET))(this, mainMissionData);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
