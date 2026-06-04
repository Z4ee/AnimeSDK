#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_33.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_14.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
#include "unitysdk/RPG/Client/SwordTrainingPerformanceType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_6;
class Class_1_21C7581DFE99F091_106;
class Class_1_28D410CCE235575F_7;
class Class_1_455008579EB95638_104;
class Class_1_45BB92167AED63A0_92;
class Class_1_45BB92167AED63A0_94;
class Class_1_4626569E10FA46C8;
class Class_1_4BC858D7C27E10ED_61;
class Class_1_5EFEE08E3E11BEF1;
class Class_1_668FE281FA72D3E8_28;
class Class_1_7A75A0D0CD4D6128;
class Class_1_99D87B66FA19BA63_8;
class Class_1_B6270A14FD472E58;
class Class_1_D019640AABA5E1A8;
class Class_1_D17272E82AE804C2_966;
class Class_1_D17272E82AE804C2_968;
class Class_1_D17272E82AE804C2_969;
class Class_1_D40936EF3BF54118_91;
class Class_1_DB57B006CFFCF00A_3;
class Class_1_EB91F58AEEF3F578_6;
class Class_1_F3622139E5E134C0_2;
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

#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDACTIONHINT_OFFSET UNITYSDK_OFFSET(0xC99F450)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xC99E170)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xC99B8C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC99E260)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET UNITYSDK_OFFSET(0xC994320)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETALLPOWERRANKROWLIST_OFFSET UNITYSDK_OFFSET(0xC99F8B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETBATTLEPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xC99F960)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCHANGEINFO_OFFSET UNITYSDK_OFFSET(0xC9951B0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETCURRENTPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0xC99F7E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETDISPLAYMOODVALUE_OFFSET UNITYSDK_OFFSET(0xC994B30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xC9A0540)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETLATESTEXAMTURNROW_OFFSET UNITYSDK_OFFSET(0xC9A00F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPHASEVALUE_OFFSET UNITYSDK_OFFSET(0xC99FF80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET UNITYSDK_OFFSET(0xC99F6A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0xC99F4F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETREMAINDAYSTONEXTEXAM_OFFSET UNITYSDK_OFFSET(0xC99FD60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTRAININGRECORDER_OFFSET UNITYSDK_OFFSET(0xC99F2E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET UNITYSDK_OFFSET(0xC99F1D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xC9A0F80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xC9A0EE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC9A0F00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET UNITYSDK_OFFSET(0xC9A0E10)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xC993B20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xC9A0F20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xC9A0E30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET UNITYSDK_OFFSET(0xC996E40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC9A0D70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xC9A0DF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xC9A0EC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xC9A0FA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xC9A0E70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xC9A0D50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xC9A0D30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xC9A0DB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xC9A0E50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xC9A0F40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xC9A0EA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xC9A0F60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xC9A0D90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC9A0E80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xC9A0DD0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xC99B9A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ISGAMERESTARTED_OFFSET UNITYSDK_OFFSET(0xC9A00A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_NEEDSHOWPHASESWITCHDIALOG_OFFSET UNITYSDK_OFFSET(0xC99FE70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xC99E840)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xC99E890)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET UNITYSDK_OFFSET(0xC99E920)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC99E7F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET UNITYSDK_OFFSET(0xC99D160)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET UNITYSDK_OFFSET(0xC99F120)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVEACTIONHINT_OFFSET UNITYSDK_OFFSET(0xC99F4A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_REMOVERANDOMEVENT_OFFSET UNITYSDK_OFFSET(0xC99F3F0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET UNITYSDK_OFFSET(0xC99D290)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET UNITYSDK_OFFSET(0xC9A0410)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET UNITYSDK_OFFSET(0xC9A0360)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET UNITYSDK_OFFSET(0xC9A0F90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET UNITYSDK_OFFSET(0xC9A0EF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC9A0F10)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET UNITYSDK_OFFSET(0xC9A0E20)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET UNITYSDK_OFFSET(0xC9A0F30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xC9A0E40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC9A0D80)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET UNITYSDK_OFFSET(0xC9A0E00)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET UNITYSDK_OFFSET(0xC9A0ED0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET UNITYSDK_OFFSET(0xC9A0FB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET UNITYSDK_OFFSET(0xC9A0D60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET UNITYSDK_OFFSET(0xC9A0D40)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET UNITYSDK_OFFSET(0xC9A0DC0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET UNITYSDK_OFFSET(0xC9A0E60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xC9A0F50)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xC9A0EB0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET UNITYSDK_OFFSET(0xC9A0F70)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET UNITYSDK_OFFSET(0xC9A0DA0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xC9A0E90)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET UNITYSDK_OFFSET(0xC9A0DE0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET UNITYSDK_OFFSET(0xC99D0D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET UNITYSDK_OFFSET(0xC99D030)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xC99BDF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_TRYSTARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9A0170)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET UNITYSDK_OFFSET(0xC99F350)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC99D2E0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xC99B7A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET UNITYSDK_OFFSET(0xC9A0C30)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xC99C7D0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET UNITYSDK_OFFSET(0xC99DCF0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xC99DE60)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET UNITYSDK_OFFSET(0xC99C360)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET UNITYSDK_OFFSET(0xC9A0590)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET UNITYSDK_OFFSET(0xC9A0630)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET UNITYSDK_OFFSET(0xC99C6A0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET UNITYSDK_OFFSET(0xC99C640)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET UNITYSDK_OFFSET(0xC99C180)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET UNITYSDK_OFFSET(0xC99C720)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET UNITYSDK_OFFSET(0xC99C3C0)
#define RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC9A01E0)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameInstance_TypeDefinitionIndex = 57964;

	class SwordTrainingGameInstance : public ::System::Object
	{
	public:
		::RPG::Client::SwordTraining::SwordTrainingActionData* _CurActionData_k__BackingField; // 0x10
		::RPG::Client::SwordTrainingPowerRankInfo* PowerRankInfo; // 0x18
		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* _PendingEvent_k__BackingField; // 0x20
		::Class_1_F5401F584B7E3E4B* _GameStateMgr_k__BackingField; // 0x28
		::RPG::Client::ActivitySwordTrainingExamInfo* ExamInfo; // 0x30
		::RPG::Client::SwordTrainingMoodData* _MoodData_k__BackingField; // 0x38
		::RPG::Client::SwordTrainingSkillInfo* SkillInfo; // 0x40
		::RPG::Client::SwordTrainingStatusChangeInfo* _ChangeInfo; // 0x48
		::RPG::Client::SwordTrainProcessActionListData* CurProcessActions; // 0x50
		::RPG::Client::SwordTrainingStatusData* _StatusData_k__BackingField; // 0x58
		::Class_1_7A75A0D0CD4D6128* _EffectMgr_k__BackingField; // 0x60
		::RPG::Client::SwordTraining::SwordTrainingActionManager* _TrainingActionMgr_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::System::UInt32>* PartnerSDKReportList; // 0x70
		::RPG::Client::SwordTrainingGameSettleData* _SettleData_k__BackingField; // 0x78
		::RPG::Client::SwordTraining::SwordTrainingActionSelection* _CurSelection_k__BackingField; // 0x80
		::Class_1_5EFEE08E3E11BEF1* GameContext; // 0x88
		::Class_1_4626569E10FA46C8* _RecordMgr_k__BackingField; // 0x90
		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* _PartnerMgr_k__BackingField; // 0x98
		::RPG::Client::SwordTraining::SwordTrainingRecordWrapper* _RecordWrapper; // 0xA0
		::RPG::Client::ActivitySwordTrainingEndingHIntInfo* EndingHintInfo; // 0xA8
		::System::UInt32 _CurTurnID_k__BackingField; // 0xB0
		::Enum_3_4608E37A1B3D374A_33 _DailyPhaseType_k__BackingField; // 0xB4
		::System::UInt32 _LastExamTurnID; // 0xB8
		::System::Boolean _IsAutoShowTrainingPageProcess; // 0xBC
		::System::Boolean _IsTrainingTurn_k__BackingField; // 0xBD
		::System::Boolean _IsRestore; // 0xBE
		::System::Boolean _IsExamTurn_k__BackingField; // 0xBF
		::System::UInt32 _StoryLineID_k__BackingField; // 0xC0
		::System::UInt32 _ActionHintID_k__BackingField; // 0xC4
		::System::Boolean _HasExtraAction_k__BackingField; // 0xC8
		::System::Boolean _Inited; // 0xC9
		::System::UInt32 _CurDay_k__BackingField; // 0xCC
		::Enum_3_4608E37A1B3D374A_33 _CurDailyPhaseType_k__BackingField; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameInstance* CreateGame(::Class_1_14E02E1F6D70E487_6* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::SwordTrainingGameInstance*(*)(::Class_1_14E02E1F6D70E487_6*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_CREATEGAME_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_14E02E1F6D70E487_6* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SyncTurnActions(::Class_1_45BB92167AED63A0_94* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCTURNACTIONS_OFFSET))(this, a1);
		}

		::System::Void SyncEnding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SYNCENDING_OFFSET))(this);
		}

		::System::Void OnRestoreGame(::Class_1_14E02E1F6D70E487_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONRESTOREGAME_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_99D87B66FA19BA63_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99D87B66FA19BA63_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATE_OFFSET))(this, a1);
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

		::System::Void OnGameSettle(::Class_1_DB57B006CFFCF00A_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONGAMESETTLE_OFFSET))(this, a1);
		}

		::System::Void OnTurnSettle(::Class_1_455008579EB95638_104* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_104*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ONTURNSETTLE_OFFSET))(this, a1);
		}

		::System::Void FinishGameState(::RPG::Client::SwordTraining::SwordTrainingGameStateType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingGameStateType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_FINISHGAMESTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingProgressRow* GetTurnRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETTURNROW_OFFSET))(this, a1);
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

		::System::Void UpdateEndingInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_UPDATEENDINGINFO_OFFSET))(this, a1);
		}

		::System::Void AddRandomEvent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_ADDRANDOMEVENT_OFFSET))(this, a1);
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

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankRowByPowerValue(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingPowerRankData* GetPowerRankByRankID(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingPowerRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETPOWERRANKBYRANKID_OFFSET))(this, a1);
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

		::System::Void SetPerformanceContext(::RPG::Client::SwordTrainingPerformanceType a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPerformanceContext_1(::RPG::Client::SwordTrainingPerformanceType a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingPerformanceType, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETPERFORMANCECONTEXT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetIsAutoShowTrainingPageProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean GetIsAutoShowTrainingPageProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GETISAUTOSHOWTRAININGPAGEPROCESS_OFFSET))(this);
		}

		::System::Void _RefreshActionTurnInfo(::Class_1_EB91F58AEEF3F578_6* a1, ::Class_1_D40936EF3BF54118_91* a2, ::Class_1_D17272E82AE804C2_968* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB91F58AEEF3F578_6*, ::Class_1_D40936EF3BF54118_91*, ::Class_1_D17272E82AE804C2_968*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONTURNINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshExamTurnInfo(::Class_1_D17272E82AE804C2_966* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_966*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHEXAMTURNINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshTurn(::Class_1_F3622139E5E134C0_2* a1, ::Class_1_D40936EF3BF54118_91* a2, ::Class_1_D17272E82AE804C2_968* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3622139E5E134C0_2*, ::Class_1_D40936EF3BF54118_91*, ::Class_1_D17272E82AE804C2_968*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHTURN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshStatusInfo(::Class_1_28D410CCE235575F_7* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTATUSINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshActionInfo(::Class_1_D40936EF3BF54118_91* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHACTIONINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshSkillInfo(::Class_1_4BC858D7C27E10ED_61* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSKILLINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshPowerRankInfo(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHPOWERRANKINFO_OFFSET))(this, a1);
		}

		::System::Void _RefreshStoryInfo(::Class_1_45BB92167AED63A0_92* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_92*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__REFRESHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _InitStateByPendingAction(::Class_1_B6270A14FD472E58* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B6270A14FD472E58*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__INITSTATEBYPENDINGACTION_OFFSET))(this, a1, a2);
		}

		::Class_1_D019640AABA5E1A8* _FetchStoryGameState(::Class_1_21C7581DFE99F091_106* a1)
		{
			return ((::Class_1_D019640AABA5E1A8*(*)(::PVOID, ::Class_1_21C7581DFE99F091_106*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__FETCHSTORYGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void _OnMoodChange(::Class_1_D17272E82AE804C2_969* a1, ::Enum_3_F80BFD5B986D5503_14 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_969*, ::Enum_3_F80BFD5B986D5503_14, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONMOODCHANGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnStatusChanged(::Enum_3_F80BFD5B986D5503_14 a1, ::Class_1_668FE281FA72D3E8_28* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_14, ::Class_1_668FE281FA72D3E8_28*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__ONSTATUSCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _StartPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE__STARTPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean get_IsTrainingTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISTRAININGTURN_OFFSET))(this);
		}

		::System::Void set_IsTrainingTurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISTRAININGTURN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExamTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISEXAMTURN_OFFSET))(this);
		}

		::System::Void set_IsExamTurn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ISEXAMTURN_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_33 get_DailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_33(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_DAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_DailyPhaseType(::Enum_3_4608E37A1B3D374A_33 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_33))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_DAILYPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingStatusData* get_StatusData()
		{
			return ((::RPG::Client::SwordTrainingStatusData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STATUSDATA_OFFSET))(this);
		}

		::System::Void set_StatusData(::RPG::Client::SwordTrainingStatusData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingStatusData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STATUSDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingMoodData* get_MoodData()
		{
			return ((::RPG::Client::SwordTrainingMoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_MOODDATA_OFFSET))(this);
		}

		::System::Void set_MoodData(::RPG::Client::SwordTrainingMoodData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingMoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_MOODDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionManager* get_TrainingActionMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_TRAININGACTIONMGR_OFFSET))(this);
		}

		::System::Void set_TrainingActionMgr(::RPG::Client::SwordTraining::SwordTrainingActionManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_TRAININGACTIONMGR_OFFSET))(this, a1);
		}

		::Class_1_7A75A0D0CD4D6128* get_EffectMgr()
		{
			return ((::Class_1_7A75A0D0CD4D6128*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_EFFECTMGR_OFFSET))(this);
		}

		::System::Void set_EffectMgr(::Class_1_7A75A0D0CD4D6128* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A75A0D0CD4D6128*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_EFFECTMGR_OFFSET))(this, a1);
		}

		::RPG::GameCore::SwordTrainingProgressRow* get_CurTurnRow()
		{
			return ((::RPG::GameCore::SwordTrainingProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNROW_OFFSET))(this);
		}

		::System::UInt32 get_CurDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAY_OFFSET))(this);
		}

		::System::Void set_CurDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurTurnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURTURNID_OFFSET))(this);
		}

		::System::Void set_CurTurnID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURTURNID_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingPartnerManager* get_PartnerMgr()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingPartnerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PARTNERMGR_OFFSET))(this);
		}

		::System::Void set_PartnerMgr(::RPG::Client::SwordTraining::SwordTrainingPartnerManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingPartnerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PARTNERMGR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_STORYLINEID_OFFSET))(this, a1);
		}

		::Class_1_4626569E10FA46C8* get_RecordMgr()
		{
			return ((::Class_1_4626569E10FA46C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_RECORDMGR_OFFSET))(this);
		}

		::System::Void set_RecordMgr(::Class_1_4626569E10FA46C8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4626569E10FA46C8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_RECORDMGR_OFFSET))(this, a1);
		}

		::Class_1_F5401F584B7E3E4B* get_GameStateMgr()
		{
			return ((::Class_1_F5401F584B7E3E4B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_GAMESTATEMGR_OFFSET))(this);
		}

		::System::Void set_GameStateMgr(::Class_1_F5401F584B7E3E4B* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F5401F584B7E3E4B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_GAMESTATEMGR_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType get_CurrentState()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURRENTSTATE_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionData* get_CurActionData()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURACTIONDATA_OFFSET))(this);
		}

		::System::Void set_CurActionData(::RPG::Client::SwordTraining::SwordTrainingActionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURACTIONDATA_OFFSET))(this, a1);
		}

		::Enum_3_4608E37A1B3D374A_33 get_CurDailyPhaseType()
		{
			return ((::Enum_3_4608E37A1B3D374A_33(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURDAILYPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurDailyPhaseType(::Enum_3_4608E37A1B3D374A_33 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_33))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURDAILYPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingActionSelection* get_CurSelection()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingActionSelection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_CURSELECTION_OFFSET))(this);
		}

		::System::Void set_CurSelection(::RPG::Client::SwordTraining::SwordTrainingActionSelection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingActionSelection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_CURSELECTION_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTraining::SwordTrainingRandomEventData* get_PendingEvent()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingRandomEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_PENDINGEVENT_OFFSET))(this);
		}

		::System::Void set_PendingEvent(::RPG::Client::SwordTraining::SwordTrainingRandomEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTraining::SwordTrainingRandomEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_PENDINGEVENT_OFFSET))(this, a1);
		}

		::RPG::Client::SwordTrainingGameSettleData* get_SettleData()
		{
			return ((::RPG::Client::SwordTrainingGameSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_SETTLEDATA_OFFSET))(this);
		}

		::System::Void set_SettleData(::RPG::Client::SwordTrainingGameSettleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_SETTLEDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActionHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_ACTIONHINTID_OFFSET))(this);
		}

		::System::Void set_ActionHintID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_ACTIONHINTID_OFFSET))(this, a1);
		}

		::System::Boolean get_HasExtraAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_GET_HASEXTRAACTION_OFFSET))(this);
		}

		::System::Void set_HasExtraAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMEINSTANCE_SET_HASEXTRAACTION_OFFSET))(this, a1);
		}
	};
}
