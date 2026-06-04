#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_64E52A323C80D766_6;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBattleResultData; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0xB1FD5B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0xB1FFA60)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0xB1FFA80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xB1FFAE0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB1FFAA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0xB1FFAC0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB1FC320)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xB1FD660)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET UNITYSDK_OFFSET(0xB1FDD30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET UNITYSDK_OFFSET(0xB1FD2C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xB1FD3C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0xB1FD880)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET UNITYSDK_OFFSET(0xB1FD810)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET UNITYSDK_OFFSET(0xB1FD310)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA50)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0xB1FFA70)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0xB1FFA90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA30)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB1FFAB0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0xB1FFAD0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0xB1FF9B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0xB1FFA10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xB1FDC60)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FD160)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FCFD0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB1FFD00)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB1FDE50)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB1FEA10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET UNITYSDK_OFFSET(0xB1FCB20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0xB1FCD90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0xB1FC460)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0xB1FF070)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xB1FF530)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET UNITYSDK_OFFSET(0xB1FFD80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0xB1FE120)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB1FFD90)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FFE70)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB1FFE10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule_TypeDefinitionIndex = 57893;

	class ActivityStrongChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _NormalStages_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _HardStageIDs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* _Buffs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _AllStages_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _LastBattleBuffIDs; // 0x38
		::Il2CppArray<::System::UInt32>* _NormalStageIDs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x48
		::RPG::Client::ActivityStrongChallengeStageData* _LastEnteredStage_k__BackingField; // 0x50
		::RPG::Client::ActivityStrongChallengeBattleResultData* _LastBattleResult; // 0x58
		::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* _LastBattleAvatars; // 0x60
		::Il2CppArray<::System::UInt32>* _AllStageIDs_k__BackingField; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _HardStages_k__BackingField; // 0x70
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

		::RPG::Client::ActivityStrongChallengeStageData* GetStage(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET))(this, a1);
		}

		static ::System::Boolean IsInStrongChallengeBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET))();
		}

		::System::Void SaveTeamConfig(::RPG::Client::ActivityStrongChallengeStageData* a1, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*, ::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET))(this, a1, a2, a3);
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

		::System::Boolean IsStageShowRedDot(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET))(this, a1);
		}

		::System::Void _HandleActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _UpdateStage(::System::UInt32 a1, ::Class_1_64E52A323C80D766_6* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_64E52A323C80D766_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenResultPage(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET))(this, a1);
		}

		::System::Void _RefreshFinishedQuestIDs(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NormalStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_NormalStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_HardStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_HardStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AllStageIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET))(this);
		}

		::System::Void set_AllStageIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_NormalStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET))(this);
		}

		::System::Void set_NormalStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_HardStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET))(this);
		}

		::System::Void set_HardStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* get_AllStages()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET))(this);
		}

		::System::Void set_AllStages(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* get_BossDetails()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET))(this);
		}

		::System::Void set_BossDetails(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* get_Buffs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET))(this);
		}

		::System::Void set_Buffs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHardModeUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsHardModeUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityStrongChallengeStageData* get_LastEnteredStage()
		{
			return ((::RPG::Client::ActivityStrongChallengeStageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET))(this);
		}

		::System::Void set_LastEnteredStage(::RPG::Client::ActivityStrongChallengeStageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityStrongChallengeStageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET))(this, a1);
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

		::System::Void _RefreshHardModeUnlockMissionProgress_b__4_0(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET))(this, a1);
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
