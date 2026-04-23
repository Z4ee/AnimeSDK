#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_34.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_14.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_12;
class Class_1_21C7581DFE99F091_101;
class Class_1_28D410CCE235575F_6;
class Class_1_3E12E5DBE03D5186;
class Class_1_455008579EB95638_104;
class Class_1_45BB92167AED63A0_90;
class Class_1_45BB92167AED63A0_92;
class Class_1_4B36FD1EE6E3FE27_2;
class Class_1_4BC858D7C27E10ED_58;
class Class_1_5EFEE08E3E11BEF1;
class Class_1_668FE281FA72D3E8_28;
class Class_1_7A75A0D0CD4D6128;
class Class_1_99D87B66FA19BA63_9;
class Class_1_B6270A14FD472E58;
class Class_1_D019640AABA5E1A8;
class Class_1_D17272E82AE804C2_930;
class Class_1_D17272E82AE804C2_932;
class Class_1_D17272E82AE804C2_933;
class Class_1_D40936EF3BF54118_84;
class Class_1_DB57B006CFFCF00A_9;
class Class_1_F3622139E5E134C0_1;
class Class_1_F5401F584B7E3E4B;
namespace RPG::Client { class ActivitySwordTrainingEndingHIntInfo; }
namespace RPG::Client { class ActivitySwordTrainingExamInfo; }
namespace RPG::Client { class SwordTrainProcessActionListData; }
namespace RPG::Client { class SwordTrainingGameSettleData; }
namespace RPG::Client { class SwordTrainingMoodData; }
namespace RPG::Client { class SwordTrainingPowerRankData; }
namespace RPG::Client { class SwordTrainingPowerRankInfo; }
namespace RPG::Client { class SwordTrainingSkillInfo; }
namespace RPG::Client { class SwordTrainingStatusChangeInfo; }
namespace RPG::Client { class SwordTrainingStatusData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionData; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionManager; }
namespace RPG::Client::SwordTraining { class SwordTrainingActionSelection; }
namespace RPG::Client::SwordTraining { class SwordTrainingPartnerManager; }
namespace RPG::Client::SwordTraining { class SwordTrainingRandomEventData; }
namespace RPG::Client::SwordTraining { class SwordTrainingRecordWrapper; }
namespace RPG::GameCore { class SwordTrainingProgressRow; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0xB252AD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xB2515D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xB24ECD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2516C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB247D60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0xB252F20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xB252FD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xB248C60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0xB252E50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0xB248560)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xB253C40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET UNITYSDK_OFFSET(0xB253840)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET UNITYSDK_OFFSET(0xB253670)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0xB252D20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xB252B70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET UNITYSDK_OFFSET(0xB2533F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET UNITYSDK_OFFSET(0xB252970)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET UNITYSDK_OFFSET(0xB252860)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xB254620)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xB254580)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB2545A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0xB2544B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xB247590)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xB2545C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xB2544D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET UNITYSDK_OFFSET(0xB24A6C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB254410)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xB254490)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xB254560)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xB254640)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xB254510)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xB2543F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xB2543D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xB254450)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xB2544F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xB2545E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xB254540)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB254600)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xB254430)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xB254520)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xB254470)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xB24EDB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET UNITYSDK_OFFSET(0xB2537F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0xB253530)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xB251E90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xB251EE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET UNITYSDK_OFFSET(0xB251FC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB251E40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET UNITYSDK_OFFSET(0xB250570)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET UNITYSDK_OFFSET(0xB2527B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET UNITYSDK_OFFSET(0xB252B20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xB252A70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xB2506F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET UNITYSDK_OFFSET(0xB253B30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0xB253A90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xB254630)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xB254590)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB2545B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0xB2544C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xB2545D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xB2544E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xB254420)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xB2544A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xB254570)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xB254650)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xB254400)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xB2543E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xB254460)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xB254500)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xB2545F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xB254550)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB254610)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xB254440)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xB254530)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xB254480)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET UNITYSDK_OFFSET(0xB2504E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET UNITYSDK_OFFSET(0xB250440)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xB24F1F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB2538C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET UNITYSDK_OFFSET(0xB2529D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB250740)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB24EBB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB2542D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xB24FBE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET UNITYSDK_OFFSET(0xB251150)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xB2512B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET UNITYSDK_OFFSET(0xB24F7A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET UNITYSDK_OFFSET(0xB253C90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET UNITYSDK_OFFSET(0xB253D30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET UNITYSDK_OFFSET(0xB24FAB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0xB24FA50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET UNITYSDK_OFFSET(0xB24F5D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xB24FB30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET UNITYSDK_OFFSET(0xB24F800)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB253920)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameInstance_TypeDefinitionIndex = 57174;

	class SwordTrainingGameInstance : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingMoodData* _MoodData_k__BackingField; // 0x10
		::RPG::Client::ActivitySwordTrainingExamInfo* ExamInfo; // 0x18
		::RPG::Client::SwordTrainingPowerRankInfo* PowerRankInfo; // 0x20
		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* _RecordWrapper; // 0x28
		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* _PendingEvent_k__BackingField; // 0x30
		::Class_1_5EFEE08E3E11BEF1* GameContext; // 0x38
		::RPG::Client::SwordTraining::SwordTrainingActionManager* _TrainingActionMgr_k__BackingField; // 0x40
		::Class_1_F5401F584B7E3E4B* _GameStateMgr_k__BackingField; // 0x48
		::Class_1_7A75A0D0CD4D6128* _EffectMgr_k__BackingField; // 0x50
		::Class_1_3E12E5DBE03D5186* _RecordMgr_k__BackingField; // 0x58
		::RPG::Client::SwordTrainingSkillInfo* SkillInfo; // 0x60
		::RPG::Client::SwordTraining::SwordTrainingActionSelection* _CurSelection_k__BackingField; // 0x68
		::RPG::Client::SwordTrainingStatusChangeInfo* _ChangeInfo; // 0x70
		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* _PartnerMgr_k__BackingField; // 0x78
		::RPG::Client::SwordTrainingGameSettleData* _SettleData_k__BackingField; // 0x80
		::RPG::Client::SwordTrainProcessActionListData* CurProcessActions; // 0x88
		::RPG::Client::SwordTrainingStatusData* _StatusData_k__BackingField; // 0x90
		::RPG::Client::SwordTraining::SwordTrainingActionData* _CurActionData_k__BackingField; // 0x98
		::System::Collections::Generic::List_1<::System::UInt32>* PartnerSDKReportList; // 0xA0
		::RPG::Client::ActivitySwordTrainingEndingHIntInfo* EndingHintInfo; // 0xA8
		::System::Boolean _Inited; // 0xB0
		::System::Boolean _IsRestore; // 0xB1
		::System::Boolean _IsTrainingTurn_k__BackingField; // 0xB2
		::System::Boolean _HasExtraAction_k__BackingField; // 0xB3
		::System::Boolean _IsAutoShowTrainingPageProcess; // 0xB4
		::System::Boolean _IsExamTurn_k__BackingField; // 0xB5
		::System::UInt32 _StoryLineID_k__BackingField; // 0xB8
		::Enum_3_4608E37A1B3D374A_34 _CurDailyPhaseType_k__BackingField; // 0xBC
		::Enum_3_4608E37A1B3D374A_34 _DailyPhaseType_k__BackingField; // 0xC0
		::System::UInt32 _CurTurnID_k__BackingField; // 0xC4
		::System::UInt32 _CurDay_k__BackingField; // 0xC8
		::System::UInt32 _ActionHintID_k__BackingField; // 0xCC
		::System::UInt32 _LastExamTurnID; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameInstance* CreateGame(::Class_1_14E02E1F6D70E487_12* serverInfo, ::System::Boolean isResume)
		{
			return ((::RPG::Client::SwordTrainingGameInstance*(*)(::Class_1_14E02E1F6D70E487_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET))(serverInfo, isResume);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_12* serverInfo, ::System::Boolean fromCreate, ::System::Boolean isResume)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_12*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET))(this, serverInfo, fromCreate, isResume);
		}

		::System::Void SyncTurnActions(::Class_1_45BB92167AED63A0_92* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET))(this, rsp);
		}

		::System::Void SyncEnding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET))(this);
		}

		::System::Void OnRestoreGame(::Class_1_14E02E1F6D70E487_12* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET))(this, serverInfo);
		}

		::System::Void Update(::Class_1_99D87B66FA19BA63_9* changeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET))(this, changeInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void OnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET))(this);
		}

		::System::Void OnGameSettle(::Class_1_DB57B006CFFCF00A_9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET))(this, rsp);
		}

		::System::Void OnTurnSettle(::Class_1_455008579EB95638_104* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_104*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET))(this, notify);
		}

		::System::Void FinishGameState(::RPG::Client::SwordTraining::SwordTrainingGameStateType state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET))(this, state);
		}

		::RPG::GameCore::SwordTrainingProgressRow* GetTurnRow(::System::UInt32 turnID)
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET))(this, turnID);
		}

		::RPG::Client::SwordTrainingStatusChangeInfo* GetChangeInfo()
		{
			return ((::RPG::Client::SwordTrainingStatusChangeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* GetTrainingRecorder()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRecordWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET))(this);
		}

		::System::UInt32 GetDisplayMoodValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET))(this);
		}

		::System::Void UpdateEndingInfo(::System::UInt32 endingStory)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET))(this, endingStory);
		}

		::System::Void AddRandomEvent(::System::UInt32 randomEventID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET))(this, randomEventID);
		}

		::System::Void RemoveRandomEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET))(this);
		}

		::System::Void AddActionHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET))(this);
		}

		::System::Void RemoveActionHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET))(this);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankRowByPowerValue(::System::UInt32 value)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankByRankID(::System::UInt32 rankID)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET))(this, rankID);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetCurrentPowerRankRow()
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>* GetAllPowerRankRowList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingPowerRankData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET))(this);
		}

		::System::UInt32 GetBattlePowerValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET))(this);
		}

		::System::UInt32 GetRemainDaysToNextExam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET))(this);
		}

		::System::Boolean NeedShowPhaseSwitchDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET))(this);
		}

		::System::Int32 GetPhaseValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET))(this);
		}

		::System::Boolean IsGameRestarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingProgressRow* GetLatestExamTurnRow()
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET))(this);
		}

		::System::Void TryStartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET))(this);
		}

		::System::Void SetPerformanceContext(::RPG::Client::SwordTrainingPerformanceType performanceType, ::System::Collections::Generic::List_1<::System::UInt32>* performanceIDList, ::System::Action* performanceEndCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET))(this, performanceType, performanceIDList, performanceEndCallback);
		}

		::System::Void SetPerformanceContext_1(::RPG::Client::SwordTrainingPerformanceType performanceType, ::System::UInt32 performanceID, ::System::Action* performanceEndCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET))(this, performanceType, performanceID, performanceEndCallback);
		}

		::System::Void SetIsAutoShowTrainingPageProcess(::System::Boolean isAutoShowTrainingPageProcess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this, isAutoShowTrainingPageProcess);
		}

		::System::Boolean GetIsAutoShowTrainingPageProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this);
		}

		::System::Void _RefreshActionTurnInfo(::Class_1_4B36FD1EE6E3FE27_2* info, ::Class_1_D40936EF3BF54118_84* actionInfo, ::Class_1_D17272E82AE804C2_932* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4B36FD1EE6E3FE27_2*, ::Class_1_D40936EF3BF54118_84*, ::Class_1_D17272E82AE804C2_932*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET))(this, info, actionInfo, dialog);
		}

		::System::Void _RefreshExamTurnInfo(::Class_1_D17272E82AE804C2_930* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_930*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshTurn(::Class_1_F3622139E5E134C0_1* info, ::Class_1_D40936EF3BF54118_84* actionInfo, ::Class_1_D17272E82AE804C2_932* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0_1*, ::Class_1_D40936EF3BF54118_84*, ::Class_1_D17272E82AE804C2_932*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET))(this, info, actionInfo, dialog);
		}

		::System::Void _RefreshStatusInfo(::Class_1_28D410CCE235575F_6* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshActionInfo(::Class_1_D40936EF3BF54118_84* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_84*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshSkillInfo(::Class_1_4BC858D7C27E10ED_58* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_58*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshPowerRankInfo(::System::UInt32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET))(this, rank);
		}

		::System::Void _RefreshStoryInfo(::Class_1_45BB92167AED63A0_90* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET))(this, info);
		}

		::System::Void _InitStateByPendingAction(::Class_1_B6270A14FD472E58* pendingAction, ::System::Boolean isResume)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6270A14FD472E58*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET))(this, pendingAction, isResume);
		}

		::Class_1_D019640AABA5E1A8* _FetchStoryGameState(::Class_1_21C7581DFE99F091_101* action)
		{
			return ((::Class_1_D019640AABA5E1A8*(*)(::PVOID, ::Class_1_21C7581DFE99F091_101*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET))(this, action);
		}

		::System::Void _OnMoodChange(::Class_1_D17272E82AE804C2_933* changeInfo, ::Enum_3_F80BFD5B986D5503_14 source, ::System::Boolean isAdded)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_933*, ::Enum_3_F80BFD5B986D5503_14, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET))(this, changeInfo, source, isAdded);
		}

		::System::Void _OnStatusChanged(::Enum_3_F80BFD5B986D5503_14 source, ::Class_1_668FE281FA72D3E8_28* changeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_14, ::Class_1_668FE281FA72D3E8_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET))(this, source, changeInfo);
		}

		::System::Void _StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsTrainingTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET))(this);
		}

		::System::Void set_IsTrainingTurn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET))(this, value);
		}

		::System::Boolean get_IsExamTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET))(this);
		}

		::System::Void set_IsExamTurn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_34 get_DailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_34(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_DailyPhaseType(::Enum_3_4608E37A1B3D374A_34 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingStatusData* get_StatusData()
		{
			return ((::RPG::Client::SwordTrainingStatusData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET))(this);
		}

		::System::Void set_StatusData(::RPG::Client::SwordTrainingStatusData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingMoodData* get_MoodData()
		{
			return ((::RPG::Client::SwordTrainingMoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET))(this);
		}

		::System::Void set_MoodData(::RPG::Client::SwordTrainingMoodData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingMoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET))(this, value);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionManager* get_TrainingActionMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET))(this);
		}

		::System::Void set_TrainingActionMgr(::RPG::Client::SwordTraining::SwordTrainingActionManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET))(this, value);
		}

		::Class_1_7A75A0D0CD4D6128* get_EffectMgr()
		{
			return ((::Class_1_7A75A0D0CD4D6128*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET))(this);
		}

		::System::Void set_EffectMgr(::Class_1_7A75A0D0CD4D6128* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A75A0D0CD4D6128*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingProgressRow* get_CurTurnRow()
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET))(this);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_CurTurnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET))(this);
		}

		::System::Void set_CurTurnID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET))(this, value);
		}

		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* get_PartnerMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingPartnerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET))(this);
		}

		::System::Void set_PartnerMgr(::RPG::Client::SwordTraining::SwordTrainingPartnerManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingPartnerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET))(this, value);
		}

		::Class_1_3E12E5DBE03D5186* get_RecordMgr()
		{
			return ((::Class_1_3E12E5DBE03D5186*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET))(this);
		}

		::System::Void set_RecordMgr(::Class_1_3E12E5DBE03D5186* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3E12E5DBE03D5186*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET))(this, value);
		}

		::Class_1_F5401F584B7E3E4B* get_GameStateMgr()
		{
			return ((::Class_1_F5401F584B7E3E4B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET))(this);
		}

		::System::Void set_GameStateMgr(::Class_1_F5401F584B7E3E4B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F5401F584B7E3E4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET))(this, value);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType get_CurrentState()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* get_CurActionData()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET))(this);
		}

		::System::Void set_CurActionData(::RPG::Client::SwordTraining::SwordTrainingActionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_34 get_CurDailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_34(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurDailyPhaseType(::Enum_3_4608E37A1B3D374A_34 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_34))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET))(this, value);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionSelection* get_CurSelection()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET))(this);
		}

		::System::Void set_CurSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET))(this, value);
		}

		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* get_PendingEvent()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET))(this);
		}

		::System::Void set_PendingEvent(::RPG::Client::SwordTraining::SwordTrainingRandomEventData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingGameSettleData* get_SettleData()
		{
			return ((::RPG::Client::SwordTrainingGameSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET))(this);
		}

		::System::Void set_SettleData(::RPG::Client::SwordTrainingGameSettleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_ActionHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET))(this);
		}

		::System::Void set_ActionHintID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET))(this, value);
		}

		::System::Boolean get_HasExtraAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET))(this);
		}

		::System::Void set_HasExtraAction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET))(this, value);
		}
	};
}
