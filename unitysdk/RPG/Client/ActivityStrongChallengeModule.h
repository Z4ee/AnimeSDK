#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_963E317C37FB5E9A_100;
namespace Proto { class StrongChallengeAvatar; }
namespace RPG::Client { class ActivityStrongChallengeBattleResultData; }
namespace RPG::Client { class ActivityStrongChallengeBossDetailData; }
namespace RPG::Client { class ActivityStrongChallengeBuffData; }
namespace RPG::Client { class ActivityStrongChallengeStageData; }
namespace RPG::Client { class MainMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GETSTAGE_OFFSET UNITYSDK_OFFSET(0x1B87D740)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880250)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0x1B8802B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0x1B8802D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1B8802F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_FINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B880380)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880230)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0x1B880290)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B87DF40)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0x1B880360)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880210)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_GET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0x1B880270)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B87C2B0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISINSTRONGCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B87D7F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_ISSTAGESHOWREDDOT_OFFSET UNITYSDK_OFFSET(0x1B87DF80)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHALLDATA_OFFSET UNITYSDK_OFFSET(0x1B87D450)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_REFRESHHARDMODEUNLOCKMISSIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B87D550)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_RETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x1B87DA10)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SAVETEAMCONFIG_OFFSET UNITYSDK_OFFSET(0x1B87D9A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SENDGETSTRONGCHALLENGEACTIVITYDATACSREQ_OFFSET UNITYSDK_OFFSET(0x1B87D4A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880260)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ALLSTAGES_OFFSET UNITYSDK_OFFSET(0x1B8802C0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BOSSDETAILS_OFFSET UNITYSDK_OFFSET(0x1B8802E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_BUFFS_OFFSET UNITYSDK_OFFSET(0x1B880300)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880240)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_HARDSTAGES_OFFSET UNITYSDK_OFFSET(0x1B8802A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_ISHARDMODEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1B880310)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_LASTENTEREDSTAGE_OFFSET UNITYSDK_OFFSET(0x1B880370)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGEIDS_OFFSET UNITYSDK_OFFSET(0x1B880220)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_SET_NORMALSTAGES_OFFSET UNITYSDK_OFFSET(0x1B880280)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1B87DDF0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B87D2F0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B87D160)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8805D0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B87E0A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__HANDLEBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B87F010)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBOSSDETAILDATA_OFFSET UNITYSDK_OFFSET(0x1B87CCB0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1B87CF20)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__INITSTAGEDATA_OFFSET UNITYSDK_OFFSET(0x1B87C3A0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__OPENRESULTPAGE_OFFSET UNITYSDK_OFFSET(0x1B87F8E0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHFINISHEDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1B87FDA0)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__REFRESHHARDMODEUNLOCKMISSIONPROGRESS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1B880650)
#define RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1B87E4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStrongChallengeModule_TypeDefinitionIndex = 61994;

	class ActivityStrongChallengeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _LastBattleBuffIDs; // 0x10
		::RPG::Client::ActivityStrongChallengeStageData* _LastEnteredStage_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBossDetailData*>* _BossDetails_k__BackingField; // 0x20
		::RPG::Client::ActivityStrongChallengeBattleResultData* _LastBattleResult; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedQuestIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Proto::StrongChallengeAvatar*>* _LastBattleAvatars; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _AllStages_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _NormalStages_k__BackingField; // 0x48
		::Il2CppArray<::System::UInt32>* _HardStageIDs_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeBuffData*>* _Buffs_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityStrongChallengeStageData*>* _HardStages_k__BackingField; // 0x60
		::Il2CppArray<::System::UInt32>* _AllStageIDs_k__BackingField; // 0x68
		::Il2CppArray<::System::UInt32>* _NormalStageIDs_k__BackingField; // 0x70
		::System::Boolean _ShouldAutoShow; // 0x78
		::System::Boolean _IsHardModeUnlocked; // 0x79

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

		::System::Boolean _UpdateStage(::System::UInt32 a1, ::Class_1_963E317C37FB5E9A_100* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_1_963E317C37FB5E9A_100*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTRONGCHALLENGEMODULE__UPDATESTAGE_OFFSET))(this, a1, a2);
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
	};
}
