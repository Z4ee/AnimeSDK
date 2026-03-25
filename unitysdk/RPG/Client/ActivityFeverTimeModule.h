#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_14.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"

class Class_1_352A8B3482C80E7D;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityFeverTimeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x8F08720)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0x8F05530)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET UNITYSDK_OFFSET(0x8F08B00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET UNITYSDK_OFFSET(0x8F06570)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET UNITYSDK_OFFSET(0x8F05820)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET UNITYSDK_OFFSET(0x8F070A0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8F07330)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET UNITYSDK_OFFSET(0x8F08C00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET UNITYSDK_OFFSET(0x8F07630)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET UNITYSDK_OFFSET(0x8F07770)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET UNITYSDK_OFFSET(0x8F078B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8F08310)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x8F07BB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET UNITYSDK_OFFSET(0x8F08560)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET UNITYSDK_OFFSET(0x8F08EB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8F08EA0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET UNITYSDK_OFFSET(0x8F08EC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET UNITYSDK_OFFSET(0x8F08ED0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8F08E80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x8F08F00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x8F08EF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET UNITYSDK_OFFSET(0x8F08EE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x8F08F20)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0x8F08970)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8F05A50)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8F06690)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0x8F04FB0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8F08260)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x8F074D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET UNITYSDK_OFFSET(0x8F07950)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET UNITYSDK_OFFSET(0x8F07A80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x8F06F30)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0x8F072B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0x8F08830)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0x8F085E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0x8F08E90)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0x8F08F10)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0x8F08F30)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0x8F07DF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x8F07120)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F05EE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F05D90)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET UNITYSDK_OFFSET(0x8F07260)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0x8F06950)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x8F05F90)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8F06090)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F08F40)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0x8F07FC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x8F05C50)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x8F07000)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x8F06850)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x8F065F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x8F06430)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0x8F069B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8F091C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F092B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8F09250)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeModule_TypeDefinitionIndex = 49909;

	class ActivityFeverTimeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FeverTimeHistoryTurnDict; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_4608E37A1B3D374A_14, ::RPG::GameCore::ActivityRank>* _FeverTimeBattleRankToActivityRank; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityRank>* _FeverTimeActivityRankDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _FeverTimeBattleRankDict; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleAvatarIDList; // 0x38
		::System::UInt32 _FinalQuestID; // 0x40
		::System::UInt32 _GuideMainMissionID; // 0x44
		::System::UInt32 _BattleFeverTimeID; // 0x48
		::RPG::GameCore::ActivityRank _BattleRank; // 0x4C
		::System::UInt32 _P1BuffID; // 0x50
		::System::Boolean _IsNewRank; // 0x54
		::System::Boolean _ShowMainPage; // 0x55
		::System::UInt32 _AutoShowFeverTimeID; // 0x58
		::System::UInt32 _CurrentFeverTimeID_k__BackingField; // 0x5C
		::RPG::GameCore::FeverTimePeriodType _BattlePeriodType; // 0x60
		::System::UInt32 _P2BuffID; // 0x64
		::System::UInt32 _BattleHistoryLeftRound; // 0x68
		::System::UInt32 _BattleCurrentLeftRound; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdEnterFeverTimeActivityStageScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _CmdGetFeverTimeActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnFeverTimeActivityBattleEndScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, obj);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, o);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::UInt32 GetHistoryTurn(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET))(this, feverTimeID);
		}

		::RPG::GameCore::ActivityRank GetHistoryBattleRank(::System::UInt32 feverTimeID)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET))(this, feverTimeID);
		}

		::System::Int32 GetBattleRank(::System::UInt32 feverTimeID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET))(this, feverTimeID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Boolean showMainPage, ::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, showMainPage, feverTimeID);
		}

		::System::Boolean IsInActivityFeverTimeBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET))(this, feverTimeID);
		}

		::System::Void SaveLineupData(::System::UInt32 feverTimeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET))(this, feverTimeID, avatarIDList);
		}

		::System::UInt32 GetP1BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetP2BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetP3BuffID(::System::UInt32 feverTimeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET))(this, feverTimeID);
		}

		::System::Void SaveP1BuffID(::System::UInt32 feverTimeID, ::System::UInt32 p1BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET))(this, feverTimeID, p1BuffID);
		}

		::System::Void SaveP2BuffID(::System::UInt32 feverTimeID, ::System::UInt32 p2BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET))(this, feverTimeID, p2BuffID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET))(this, feverTimeID);
		}

		::System::Void StartFeverTimeBattle(::System::UInt32 feverTimeID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList, ::System::UInt32 p1BuffID, ::System::UInt32 p2BuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET))(this, feverTimeID, avatarIDList, p1BuffID, p2BuffID);
		}

		::System::Void RestartFeverTimeBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatarsByFeverTimeID(::System::UInt32 feverTimeID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET))(this, feverTimeID);
		}

		::System::UInt32 GetTutorialGroupIDByBuffID(::System::UInt32 buffID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET))(this, buffID);
		}

		::System::Boolean CheckHasSeenLevel(::System::UInt32 feverTimeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET))(this, feverTimeID);
		}

		::System::Void SetHasSeenLevel(::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET))(this, feverTimeID);
		}

		::System::Boolean CheckHasPlayLevelUnLockAnimation(::System::UInt32 feverTimeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, feverTimeID);
		}

		::System::Void SetHasPlayLevelUnLockAnimation(::System::UInt32 feverTimeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, feverTimeID);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Boolean HasLevelNotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET))(this);
		}

		::System::Boolean CheckIsUnLock(::RPG::GameCore::ActivityFeverTimeConfigRow* configRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFeverTimeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET))(this, configRow);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataListByWaveID(::System::UInt32 feverTimeID, ::System::UInt32 waveID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET))(this, feverTimeID, waveID);
		}

		::System::UInt32 get_CurrentFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET))(this);
		}

		::System::Void set_CurrentFeverTimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleCurrentLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET))(this);
		}

		::System::UInt32 get_BattleHistoryLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET))(this);
		}

		::RPG::GameCore::ActivityRank get_BattleRank()
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET))(this);
		}

		::System::Boolean get_IsNewRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET))(this);
		}

		::System::UInt32 get_GuideMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::FeverTimePeriodType get_FeverTimeBattlePeriodType()
		{
			return ((::RPG::GameCore::FeverTimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this);
		}

		::System::Void set_FeverTimeBattlePeriodType(::RPG::GameCore::FeverTimePeriodType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimePeriodType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this, value);
		}

		::System::Void _ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>* _GetFeverTimeAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET))(this, avatarIDList);
		}

		::System::Void _ClearAutoShowParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET))(this);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
