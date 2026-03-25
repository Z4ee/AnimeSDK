#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_35.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_15.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_234D295497DE49DD_1;
class Class_1_35B19D34B208E77E_26;
class Class_1_3E12E5DBE03D5186;
class Class_1_4CF8088A158DCE25_95;
class Class_1_5EFEE08E3E11BEF1;
class Class_1_5FEFAED860528596_98;
class Class_1_6D16597294F5284D_8;
class Class_1_735612C94F558EAE_91;
class Class_1_735612C94F558EAE_93;
class Class_1_7A75A0D0CD4D6128;
class Class_1_8D4EF92D27854DC6;
class Class_1_99BD961747420BEB_55;
class Class_1_A4E2764947F50E01_8;
class Class_1_B5A2BCBD9004B1DC_1;
class Class_1_C9DFE5EE7107C629_14;
class Class_1_D019640AABA5E1A8;
class Class_1_E7C4009BCC22497A_78;
class Class_1_F5401F584B7E3E4B;
class Class_1_FA4F4A67B1C04320_890;
class Class_1_FA4F4A67B1C04320_892;
class Class_1_FA4F4A67B1C04320_893;
class Class_1_FB0633E85BD6CF8E_11;
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

#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0xA515AB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xA514520)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xA511B70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA514620)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA515670)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0xA515F00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xA515FB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xA515740)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0xA515E30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0xA5158A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xA516C50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET UNITYSDK_OFFSET(0xA516820)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET UNITYSDK_OFFSET(0xA516650)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0xA515D00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xA515B50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET UNITYSDK_OFFSET(0xA5163D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET UNITYSDK_OFFSET(0xA515840)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET UNITYSDK_OFFSET(0xA5156D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xA517630)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xA517590)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA5175B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0xA5174C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA515950)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xA5175D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xA5174E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET UNITYSDK_OFFSET(0xA50D620)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA517420)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xA5174A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xA517570)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xA517650)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xA517520)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xA517400)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xA5173E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xA517460)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xA517500)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xA5175F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xA517550)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA517610)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xA517440)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA517530)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xA517480)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xA511CA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET UNITYSDK_OFFSET(0xA5167D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0xA516510)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xA514CA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA514CF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET UNITYSDK_OFFSET(0xA514DD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA514C50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET UNITYSDK_OFFSET(0xA513480)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET UNITYSDK_OFFSET(0xA5155C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET UNITYSDK_OFFSET(0xA515B00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xA515A50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xA513610)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET UNITYSDK_OFFSET(0xA516B40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0xA516A90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xA517640)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xA5175A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA5175C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0xA5174D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xA5175E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xA5174F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xA517430)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xA5174B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xA517580)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xA517660)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xA517410)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xA5173F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xA517470)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xA517510)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xA517600)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xA517560)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA517620)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xA517450)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA517540)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xA517490)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET UNITYSDK_OFFSET(0xA5133F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET UNITYSDK_OFFSET(0xA513350)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xA5120F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5168A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET UNITYSDK_OFFSET(0xA5159B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA513660)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA511B10)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET UNITYSDK_OFFSET(0xA5172E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA512AF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET UNITYSDK_OFFSET(0xA514080)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xA5141F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET UNITYSDK_OFFSET(0xA5126B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET UNITYSDK_OFFSET(0xA516CA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET UNITYSDK_OFFSET(0xA516D40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET UNITYSDK_OFFSET(0xA5129C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0xA512960)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET UNITYSDK_OFFSET(0xA5124E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xA512A40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET UNITYSDK_OFFSET(0xA512710)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA516910)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameInstance_TypeDefinitionIndex = 50315;

	class SwordTrainingGameInstance : public ::System::Object
	{
	public:
		::Class_1_F5401F584B7E3E4B* _GameStateMgr_k__BackingField; // 0x10
		::RPG::Client::ActivitySwordTrainingExamInfo* ExamInfo; // 0x18
		::RPG::Client::SwordTraining::SwordTrainingActionManager* _TrainingActionMgr_k__BackingField; // 0x20
		::RPG::Client::SwordTrainingPowerRankInfo* PowerRankInfo; // 0x28
		::RPG::Client::SwordTrainingGameSettleData* _SettleData_k__BackingField; // 0x30
		::RPG::Client::SwordTraining::SwordTrainingActionData* _CurActionData_k__BackingField; // 0x38
		::RPG::Client::ActivitySwordTrainingEndingHIntInfo* EndingHintInfo; // 0x40
		::RPG::Client::SwordTrainingMoodData* _MoodData_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* PartnerSDKReportList; // 0x50
		::Class_1_7A75A0D0CD4D6128* _EffectMgr_k__BackingField; // 0x58
		::RPG::Client::SwordTrainingStatusChangeInfo* _ChangeInfo; // 0x60
		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* _RecordWrapper; // 0x68
		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* _PartnerMgr_k__BackingField; // 0x70
		::RPG::Client::SwordTrainingStatusData* _StatusData_k__BackingField; // 0x78
		::RPG::Client::SwordTraining::SwordTrainingActionSelection* _CurSelection_k__BackingField; // 0x80
		::Class_1_5EFEE08E3E11BEF1* GameContext; // 0x88
		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* _PendingEvent_k__BackingField; // 0x90
		::Class_1_3E12E5DBE03D5186* _RecordMgr_k__BackingField; // 0x98
		::RPG::Client::SwordTrainingSkillInfo* SkillInfo; // 0xA0
		::RPG::Client::SwordTrainProcessActionListData* CurProcessActions; // 0xA8
		::System::UInt32 _CurDay_k__BackingField; // 0xB0
		::System::Boolean _Inited; // 0xB4
		::System::Boolean _HasExtraAction_k__BackingField; // 0xB5
		::Enum_3_4608E37A1B3D374A_35 _CurDailyPhaseType_k__BackingField; // 0xB8
		::System::UInt32 _StoryLineID_k__BackingField; // 0xBC
		::System::UInt32 _CurTurnID_k__BackingField; // 0xC0
		::Enum_3_4608E37A1B3D374A_35 _DailyPhaseType_k__BackingField; // 0xC4
		::System::Boolean _IsRestore; // 0xC8
		::System::Boolean _IsExamTurn_k__BackingField; // 0xC9
		::System::Boolean _IsTrainingTurn_k__BackingField; // 0xCA
		::System::Boolean _IsAutoShowTrainingPageProcess; // 0xCB
		::System::UInt32 _LastExamTurnID; // 0xCC
		::System::UInt32 _ActionHintID_k__BackingField; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameInstance* CreateGame(::Class_1_FB0633E85BD6CF8E_11* serverInfo, ::System::Boolean isResume)
		{
			return ((::RPG::Client::SwordTrainingGameInstance*(*)(::Class_1_FB0633E85BD6CF8E_11*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET))(serverInfo, isResume);
		}

		::System::Void Sync(::Class_1_FB0633E85BD6CF8E_11* serverInfo, ::System::Boolean fromCreate, ::System::Boolean isResume)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_11*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET))(this, serverInfo, fromCreate, isResume);
		}

		::System::Void SyncTurnActions(::Class_1_735612C94F558EAE_93* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_93*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET))(this, rsp);
		}

		::System::Void SyncEnding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET))(this);
		}

		::System::Void OnRestoreGame(::Class_1_FB0633E85BD6CF8E_11* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET))(this, serverInfo);
		}

		::System::Void Update(::Class_1_A4E2764947F50E01_8* changeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A4E2764947F50E01_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET))(this, changeInfo);
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

		::System::Void OnGameSettle(::Class_1_C9DFE5EE7107C629_14* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET))(this, rsp);
		}

		::System::Void OnTurnSettle(::Class_1_5FEFAED860528596_98* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_98*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET))(this, notify);
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

		::System::Void _RefreshActionTurnInfo(::Class_1_234D295497DE49DD_1* info, ::Class_1_E7C4009BCC22497A_78* actionInfo, ::Class_1_FA4F4A67B1C04320_892* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_234D295497DE49DD_1*, ::Class_1_E7C4009BCC22497A_78*, ::Class_1_FA4F4A67B1C04320_892*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET))(this, info, actionInfo, dialog);
		}

		::System::Void _RefreshExamTurnInfo(::Class_1_FA4F4A67B1C04320_890* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_890*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshTurn(::Class_1_B5A2BCBD9004B1DC_1* info, ::Class_1_E7C4009BCC22497A_78* actionInfo, ::Class_1_FA4F4A67B1C04320_892* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B5A2BCBD9004B1DC_1*, ::Class_1_E7C4009BCC22497A_78*, ::Class_1_FA4F4A67B1C04320_892*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET))(this, info, actionInfo, dialog);
		}

		::System::Void _RefreshStatusInfo(::Class_1_6D16597294F5284D_8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6D16597294F5284D_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshActionInfo(::Class_1_E7C4009BCC22497A_78* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_78*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshSkillInfo(::Class_1_99BD961747420BEB_55* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET))(this, info);
		}

		::System::Void _RefreshPowerRankInfo(::System::UInt32 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET))(this, rank);
		}

		::System::Void _RefreshStoryInfo(::Class_1_735612C94F558EAE_91* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET))(this, info);
		}

		::System::Void _InitStateByPendingAction(::Class_1_8D4EF92D27854DC6* pendingAction, ::System::Boolean isResume)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8D4EF92D27854DC6*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET))(this, pendingAction, isResume);
		}

		::Class_1_D019640AABA5E1A8* _FetchStoryGameState(::Class_1_4CF8088A158DCE25_95* action)
		{
			return ((::Class_1_D019640AABA5E1A8*(*)(::PVOID, ::Class_1_4CF8088A158DCE25_95*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET))(this, action);
		}

		::System::Void _OnMoodChange(::Class_1_FA4F4A67B1C04320_893* changeInfo, ::Enum_3_F80BFD5B986D5503_15 source, ::System::Boolean isAdded)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_893*, ::Enum_3_F80BFD5B986D5503_15, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET))(this, changeInfo, source, isAdded);
		}

		::System::Void _OnStatusChanged(::Enum_3_F80BFD5B986D5503_15 source, ::Class_1_35B19D34B208E77E_26* changeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_15, ::Class_1_35B19D34B208E77E_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET))(this, source, changeInfo);
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

		::Enum_3_4608E37A1B3D374A_35 get_DailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_35(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_DailyPhaseType(::Enum_3_4608E37A1B3D374A_35 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_35))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET))(this, value);
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

		::Enum_3_4608E37A1B3D374A_35 get_CurDailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_35(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurDailyPhaseType(::Enum_3_4608E37A1B3D374A_35 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_35))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET))(this, value);
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
