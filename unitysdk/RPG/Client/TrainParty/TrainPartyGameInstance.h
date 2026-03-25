#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartySettleSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_0AF80CDC1665CFBD;
class Class_1_13D46CC8D6D092DC;
class Class_1_8332CF178AAAF4CC;
class Class_1_C08314F2D113A624;
class Class_1_D8EAED2BCF3F4D39_20;
class Class_1_F0A446EC7AE7E87D_3;
class Class_1_FA60E9866DBA97E8_40;
class Class_1_FA60E9866DBA97E8_41;
class Class_1_FFE5B8A52EC38E9C_4;
namespace RPG::Client::TrainParty { class TrainPartyBuildManager; }
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { class TrainPartyCardManager; }
namespace RPG::Client::TrainParty { class TrainPartyEventFadeInData; }
namespace RPG::Client::TrainParty { class TrainPartyGameRecordManager; }
namespace RPG::Client::TrainParty { class TrainPartyGridsController; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerManager; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerTeamData; }
namespace RPG::Client::TrainParty { class TrainPartyPreviewInfo; }
namespace RPG::Client::TrainParty { class TrainPartySettleData; }
namespace RPG::Client::TrainParty { class TrainPartyStatusData; }
namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace RPG::GameCore { class TrainPartyProgressRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA5F7B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAMEPLAYSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA5F7F40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xA5F73C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA5FACC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5F8F70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOREPLACEPASSENGERSKILL_OFFSET UNITYSDK_OFFSET(0xA5FBD60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOSELECTDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xA5FBC20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORBIDHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA5FB050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORCEFINISHDIALOGUEACTION_OFFSET UNITYSDK_OFFSET(0xA5FC7F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETCURTURNTEAMPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xA5FC320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0xA5F76C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xA5FBB40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETSELECTABLETEAMDATALIST_OFFSET UNITYSDK_OFFSET(0xA5FC130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xA5FC9A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xA5FCA80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTUNRROW_OFFSET UNITYSDK_OFFSET(0xA5FBED0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xA5FCAE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xA5FCAC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xA5FC9C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ISINCARDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5F8A40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xA5FCAA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xA5FC9E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xA5F7420)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISCURTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5FBE20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISNEWTURN_OFFSET UNITYSDK_OFFSET(0xA5FBFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET UNITYSDK_OFFSET(0xA5FADA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xA5FBA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xA5FBAF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET UNITYSDK_OFFSET(0xA5F7DC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xA5F98F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET UNITYSDK_OFFSET(0xA5FB0A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWEVENTFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xA5FC790)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA5FB530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xA5FC6C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONUSECARDFAIL_OFFSET UNITYSDK_OFFSET(0xA5FB7B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RECORDCURTURNSEEN_OFFSET UNITYSDK_OFFSET(0xA5FC060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RELEASEHANDLEPENDINGACTIONLOCK_OFFSET UNITYSDK_OFFSET(0xA5FB9E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xA5FC9B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xA5FCA90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xA5FCAF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xA5FCAD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xA5FC9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xA5FCAB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xA5FCA30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xA5FC9F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_STARTUSECARD_OFFSET UNITYSDK_OFFSET(0xA5FB650)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA5F7970)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xA5F7750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRIGGERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xA5FC0C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA5F94A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYPLAYSIMPLETALK_OFFSET UNITYSDK_OFFSET(0xA5FC610)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWEVENTFADEIN_OFFSET UNITYSDK_OFFSET(0xA5FC720)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xA5FB3E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSTARTGAMEPALY_OFFSET UNITYSDK_OFFSET(0xA5FB810)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA5F8020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA5F8910)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CHECKISTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xA5FBF30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xA5F73B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__HANDLENEXTPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xA5F9500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ONCARDACTEND_OFFSET UNITYSDK_OFFSET(0xA5FC940)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__SETCURTURNID_OFFSET UNITYSDK_OFFSET(0xA5F78C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xA5FB5E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGameInstance_TypeDefinitionIndex = 61142;

	class TrainPartyGameInstance : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildManager* _BuildMgr_k__BackingField; // 0x10
		::RPG::Client::TrainParty::TrainPartyCardManager* _ActionCardMgr_k__BackingField; // 0x18
		::System::Action* _OnShowEventFadeInFinishCallback; // 0x20
		::RPG::Client::TrainParty::TrainPartyPassengerManager* _PassengerMgr_k__BackingField; // 0x28
		::System::Action* _OnShowSettleFinish; // 0x30
		::RPG::Client::TrainParty::TrainPartySettleData* _SettleData; // 0x38
		::System::Action* _OnActionFinishCallback; // 0x40
		::Class_1_C08314F2D113A624* _EventMgr_k__BackingField; // 0x48
		::UnityEngine::CanvasGroup* _GameplayMaskBG_k__BackingField; // 0x50
		::RPG::Client::TrainParty::TrainPartyMeetingData* _CurMeetingData_k__BackingField; // 0x58
		::Class_1_13D46CC8D6D092DC* _CurPendingAction; // 0x60
		::Class_1_13D46CC8D6D092DC* _NextPendingAction; // 0x68
		::RPG::Client::TrainParty::TrainPartyGridsController* _GridsInfo_k__BackingField; // 0x70
		::RPG::Client::TrainParty::TrainPartyPreviewInfo* _PreviewInfo; // 0x78
		::RPG::Client::TrainParty::TrainPartyStatusData* _TrainStatusData_k__BackingField; // 0x80
		::RPG::Client::TrainParty::TrainPartyGameRecordManager* _RecordMgr_k__BackingField; // 0x88
		::System::Action* _OnSimpleTalkFinishCallback; // 0x90
		::Class_1_0AF80CDC1665CFBD* _GameplaySettleInfo; // 0x98
		::System::UInt32 _CurTurnID_k__BackingField; // 0xA0
		::System::UInt32 _LockCount; // 0xA4
		::System::Boolean _IsCurTurnLocked; // 0xA8
		::System::Boolean _NeedSelectPassenger_k__BackingField; // 0xA9
		::System::Boolean _IsOnRoundStart; // 0xAA
		::System::Boolean _Inited; // 0xAB
		::System::Boolean IsInCardAct; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartyGameInstance* CreateGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAME_OFFSET))();
		}

		static ::RPG::Client::TrainParty::TrainPartyGameInstance* GetInstance()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETINSTANCE_OFFSET))();
		}

		::System::Void Sync(::Class_1_FFE5B8A52EC38E9C_4* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void SyncGameplayData(::Class_1_FA60E9866DBA97E8_40* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET))(this, serverInfo);
		}

		::System::Void ClearGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void OnGameplaySettle(::Class_1_0AF80CDC1665CFBD* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AF80CDC1665CFBD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET))(this, settleInfo);
		}

		::System::Void Update(::Class_1_F0A446EC7AE7E87D_3* updateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET))(this, updateInfo);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryHandlePendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYHANDLEPENDINGACTION_OFFSET))(this);
		}

		::System::Void OnHandlePendingActionFinish(::Class_1_8332CF178AAAF4CC* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8332CF178AAAF4CC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET))(this, rsp);
		}

		::System::Void OnCardSettle(::Class_1_FA60E9866DBA97E8_41* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET))(this, settleInfo);
		}

		::System::Void OnLeaveGameScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartySettleData* CreateSettleData(::Class_1_D8EAED2BCF3F4D39_20* info, ::RPG::Client::TrainParty::TrainPartySettleSourceType type)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::PVOID, ::Class_1_D8EAED2BCF3F4D39_20*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET))(this, info, type);
		}

		::RPG::Client::TrainParty::TrainPartySettleData* CreateGameplaySettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAMEPLAYSETTLEDATA_OFFSET))(this);
		}

		::System::Void TryShowSettleResult(::System::Action* onShowFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWSETTLERESULT_OFFSET))(this, onShowFinish);
		}

		::System::Void StartUseCard(::RPG::Client::TrainParty::TrainPartyCardData* cardData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_STARTUSECARD_OFFSET))(this, cardData);
		}

		::System::Void OnUseCardFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONUSECARDFAIL_OFFSET))(this);
		}

		::System::Void TryStartGamepaly(::RPG::Client::TrainParty::TrainPartyPassengerTeamData* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerTeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSTARTGAMEPALY_OFFSET))(this, teamData);
		}

		::System::Void ForbidHandlePendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORBIDHANDLEPENDINGACTION_OFFSET))(this);
		}

		::System::Void ReleaseHandlePendingActionLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RELEASEHANDLEPENDINGACTIONLOCK_OFFSET))(this);
		}

		::System::Void OnShowSettleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWSETTLEFINISH_OFFSET))(this);
		}

		::System::Void OnEnterGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONENTERGAME_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONEXITGAME_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPreviewInfo* GetPreviewInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPreviewInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETPREVIEWINFO_OFFSET))(this);
		}

		::System::Void DoSelectDialogueOption(::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOSELECTDIALOGUEOPTION_OFFSET))(this, finishCallback);
		}

		::System::Void DoReplacePassengerSkill(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOREPLACEPASSENGERSKILL_OFFSET))(this, skillID);
		}

		::System::Boolean IsCurTurnLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISCURTURNLOCKED_OFFSET))(this);
		}

		::System::Boolean IsNewTurn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISNEWTURN_OFFSET))(this);
		}

		::System::Void RecordCurTurnSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RECORDCURTURNSEEN_OFFSET))(this);
		}

		::System::Void TriggerPerformance(::System::String* actPath, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRIGGERPERFORMANCE_OFFSET))(this, actPath, finishCallback);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerTeamData*>* GetSelectableTeamDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerTeamData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETSELECTABLETEAMDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetCurTurnTeamPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETCURTURNTEAMPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void TryPlaySimpleTalk(::RPG::GameCore::PlayTrainPartySimpleTalk* simpleTalk, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayTrainPartySimpleTalk*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYPLAYSIMPLETALK_OFFSET))(this, simpleTalk, finishCallback);
		}

		::System::Void OnSimpleTalkFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSIMPLETALKFINISH_OFFSET))(this);
		}

		::System::Void TryShowEventFadeIn(::RPG::Client::TrainParty::TrainPartyEventFadeInData* data, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyEventFadeInData*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWEVENTFADEIN_OFFSET))(this, data, finishCallback);
		}

		::System::Void OnShowEventFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWEVENTFADEINFINISH_OFFSET))(this);
		}

		::System::Void ForceFinishDialogueAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORCEFINISHDIALOGUEACTION_OFFSET))(this);
		}

		::System::Void _HandleNextPendingAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__HANDLENEXTPENDINGACTION_OFFSET))(this);
		}

		::System::Void _AddPendingAction(::Class_1_13D46CC8D6D092DC* pendingAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13D46CC8D6D092DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET))(this, pendingAction);
		}

		::System::Void _TryShowSettleResult(::RPG::Client::TrainParty::TrainPartySettleData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__TRYSHOWSETTLERESULT_OFFSET))(this, data);
		}

		::System::Void _OnCardActEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ONCARDACTEND_OFFSET))(this);
		}

		::System::Void _SetCurTurnID(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__SETCURTURNID_OFFSET))(this, id);
		}

		::System::Boolean _CheckIsTurnLocked(::RPG::GameCore::TrainPartyProgressRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyProgressRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CHECKISTURNLOCKED_OFFSET))(this, row);
		}

		::RPG::Client::TrainParty::TrainPartyCardManager* get_ActionCardMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ACTIONCARDMGR_OFFSET))(this);
		}

		::System::Void set_ActionCardMgr(::RPG::Client::TrainParty::TrainPartyCardManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyCardManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_ACTIONCARDMGR_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyGridsController* get_GridsInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGridsController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GRIDSINFO_OFFSET))(this);
		}

		::System::Void set_GridsInfo(::RPG::Client::TrainParty::TrainPartyGridsController* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGridsController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GRIDSINFO_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyStatusData* get_TrainStatusData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyStatusData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_TRAINSTATUSDATA_OFFSET))(this);
		}

		::System::Void set_TrainStatusData(::RPG::Client::TrainParty::TrainPartyStatusData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyStatusData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_TRAINSTATUSDATA_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerManager* get_PassengerMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_PASSENGERMGR_OFFSET))(this);
		}

		::System::Void set_PassengerMgr(::RPG::Client::TrainParty::TrainPartyPassengerManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_PASSENGERMGR_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyGameRecordManager* get_RecordMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameRecordManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_RECORDMGR_OFFSET))(this);
		}

		::System::Void set_RecordMgr(::RPG::Client::TrainParty::TrainPartyGameRecordManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameRecordManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_RECORDMGR_OFFSET))(this, value);
		}

		::Class_1_C08314F2D113A624* get_EventMgr()
		{
			return ((::Class_1_C08314F2D113A624*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_EVENTMGR_OFFSET))(this);
		}

		::System::Void set_EventMgr(::Class_1_C08314F2D113A624* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C08314F2D113A624*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_EVENTMGR_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyBuildManager* get_BuildMgr()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_BUILDMGR_OFFSET))(this);
		}

		::System::Void set_BuildMgr(::RPG::Client::TrainParty::TrainPartyBuildManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_BUILDMGR_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyProgressRow* get_CurTunrRow()
		{
			return ((::RPG::GameCore::TrainPartyProgressRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTUNRROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingData* get_CurMeetingData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURMEETINGDATA_OFFSET))(this);
		}

		::System::Void set_CurMeetingData(::RPG::Client::TrainParty::TrainPartyMeetingData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURMEETINGDATA_OFFSET))(this, value);
		}

		::System::Boolean get_NeedSelectPassenger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_NEEDSELECTPASSENGER_OFFSET))(this);
		}

		::System::Void set_NeedSelectPassenger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_NEEDSELECTPASSENGER_OFFSET))(this, value);
		}

		::System::Boolean get_IsInCardPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ISINCARDPERFORMANCE_OFFSET))(this);
		}

		::UnityEngine::CanvasGroup* get_GameplayMaskBG()
		{
			return ((::UnityEngine::CanvasGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GAMEPLAYMASKBG_OFFSET))(this);
		}

		::System::Void set_GameplayMaskBG(::UnityEngine::CanvasGroup* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GAMEPLAYMASKBG_OFFSET))(this, value);
		}

		::System::UInt32 get_CurTurnID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTURNID_OFFSET))(this);
		}

		::System::Void set_CurTurnID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURTURNID_OFFSET))(this, value);
		}
	};
}
