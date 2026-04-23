#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartySettleSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_28452A520F6B220F;
class Class_1_6FC4D75D938BC053_19;
class Class_1_963E317C37FB5E9A_37;
class Class_1_963E317C37FB5E9A_38;
class Class_1_C0163F1F521957F0_1;
class Class_1_C08314F2D113A624;
class Class_1_EB4EA813E55E9D5A;
class Class_1_FB0A3C740B6169EA_1;
class Class_1_FFE5B8A52EC38E9C_6;
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

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB34B510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAMEPLAYSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB34BB10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATEGAME_OFFSET UNITYSDK_OFFSET(0xB34AD90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET UNITYSDK_OFFSET(0xB34F120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB34D2F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOREPLACEPASSENGERSKILL_OFFSET UNITYSDK_OFFSET(0xB350570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_DOSELECTDIALOGUEOPTION_OFFSET UNITYSDK_OFFSET(0xB350430)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORBIDHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xB34F4B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_FORCEFINISHDIALOGUEACTION_OFFSET UNITYSDK_OFFSET(0xB351380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETCURTURNTEAMPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xB350EB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0xB34B060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0xB3502E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GETSELECTABLETEAMDATALIST_OFFSET UNITYSDK_OFFSET(0xB350940)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xB3516C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xB351780)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xB3517A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTUNRROW_OFFSET UNITYSDK_OFFSET(0xB3506E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xB351800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xB351760)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xB3517E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xB3516E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_ISINCARDPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB34C720)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xB3517C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xB351720)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xB351740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_GET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xB351700)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0xB34ADF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISCURTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xB350630)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ISNEWTURN_OFFSET UNITYSDK_OFFSET(0xB350800)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET UNITYSDK_OFFSET(0xB34F200)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xB350210)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xB350290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET UNITYSDK_OFFSET(0xB34B990)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET UNITYSDK_OFFSET(0xB34DCE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET UNITYSDK_OFFSET(0xB34F500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWEVENTFADEINFINISH_OFFSET UNITYSDK_OFFSET(0xB351320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSHOWSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xB34FC20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONSIMPLETALKFINISH_OFFSET UNITYSDK_OFFSET(0xB351250)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONUSECARDFAIL_OFFSET UNITYSDK_OFFSET(0xB34FF00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RECORDCURTURNSEEN_OFFSET UNITYSDK_OFFSET(0xB350870)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_RELEASEHANDLEPENDINGACTIONLOCK_OFFSET UNITYSDK_OFFSET(0xB350130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_ACTIONCARDMGR_OFFSET UNITYSDK_OFFSET(0xB3516D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_BUILDMGR_OFFSET UNITYSDK_OFFSET(0xB351790)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURMEETINGDATA_OFFSET UNITYSDK_OFFSET(0xB3517B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_CURTURNID_OFFSET UNITYSDK_OFFSET(0xB351810)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_EVENTMGR_OFFSET UNITYSDK_OFFSET(0xB351770)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GAMEPLAYMASKBG_OFFSET UNITYSDK_OFFSET(0xB3517F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_GRIDSINFO_OFFSET UNITYSDK_OFFSET(0xB3516F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_NEEDSELECTPASSENGER_OFFSET UNITYSDK_OFFSET(0xB3517D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_PASSENGERMGR_OFFSET UNITYSDK_OFFSET(0xB351730)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_RECORDMGR_OFFSET UNITYSDK_OFFSET(0xB351750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SET_TRAINSTATUSDATA_OFFSET UNITYSDK_OFFSET(0xB351710)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_STARTUSECARD_OFFSET UNITYSDK_OFFSET(0xB34FD40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xB34B350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0xB34B0F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRIGGERPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB3508D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYHANDLEPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xB34D880)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYPLAYSIMPLETALK_OFFSET UNITYSDK_OFFSET(0xB3511A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWEVENTFADEIN_OFFSET UNITYSDK_OFFSET(0xB3512B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB34FB80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_TRYSTARTGAMEPALY_OFFSET UNITYSDK_OFFSET(0xB34FF60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB34BBF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xB34C5F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CHECKISTURNLOCKED_OFFSET UNITYSDK_OFFSET(0xB350740)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB34AD80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__HANDLENEXTPENDINGACTION_OFFSET UNITYSDK_OFFSET(0xB34D8E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ONCARDACTEND_OFFSET UNITYSDK_OFFSET(0xB351660)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__SETCURTURNID_OFFSET UNITYSDK_OFFSET(0xB34B2A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__TRYSHOWSETTLERESULT_OFFSET UNITYSDK_OFFSET(0xB34FCD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGameInstance_TypeDefinitionIndex = 68629;

	class TrainPartyGameInstance : public ::System::Object
	{
	public:
		::System::Action* _OnSimpleTalkFinishCallback; // 0x10
		::System::Action* _OnShowSettleFinish; // 0x18
		::Class_1_C08314F2D113A624* _EventMgr_k__BackingField; // 0x20
		::System::Action* _OnActionFinishCallback; // 0x28
		::RPG::Client::TrainParty::TrainPartyBuildManager* _BuildMgr_k__BackingField; // 0x30
		::Class_1_C0163F1F521957F0_1* _NextPendingAction; // 0x38
		::RPG::Client::TrainParty::TrainPartyPreviewInfo* _PreviewInfo; // 0x40
		::RPG::Client::TrainParty::TrainPartyPassengerManager* _PassengerMgr_k__BackingField; // 0x48
		::RPG::Client::TrainParty::TrainPartyCardManager* _ActionCardMgr_k__BackingField; // 0x50
		::Class_1_28452A520F6B220F* _GameplaySettleInfo; // 0x58
		::RPG::Client::TrainParty::TrainPartyMeetingData* _CurMeetingData_k__BackingField; // 0x60
		::RPG::Client::TrainParty::TrainPartySettleData* _SettleData; // 0x68
		::UnityEngine::CanvasGroup* _GameplayMaskBG_k__BackingField; // 0x70
		::Class_1_C0163F1F521957F0_1* _CurPendingAction; // 0x78
		::RPG::Client::TrainParty::TrainPartyGridsController* _GridsInfo_k__BackingField; // 0x80
		::System::Action* _OnShowEventFadeInFinishCallback; // 0x88
		::RPG::Client::TrainParty::TrainPartyStatusData* _TrainStatusData_k__BackingField; // 0x90
		::RPG::Client::TrainParty::TrainPartyGameRecordManager* _RecordMgr_k__BackingField; // 0x98
		::System::UInt32 _LockCount; // 0xA0
		::System::Boolean _IsOnRoundStart; // 0xA4
		::System::Boolean _Inited; // 0xA5
		::System::Boolean _NeedSelectPassenger_k__BackingField; // 0xA6
		::System::Boolean IsInCardAct; // 0xA7
		::System::Boolean _IsCurTurnLocked; // 0xA8
		::System::UInt32 _CurTurnID_k__BackingField; // 0xAC

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

		::System::Void Sync(::Class_1_FFE5B8A52EC38E9C_6* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNC_OFFSET))(this, serverInfo);
		}

		::System::Void SyncGameplayData(::Class_1_963E317C37FB5E9A_37* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_SYNCGAMEPLAYDATA_OFFSET))(this, serverInfo);
		}

		::System::Void ClearGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CLEARGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void OnGameplaySettle(::Class_1_28452A520F6B220F* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28452A520F6B220F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONGAMEPLAYSETTLE_OFFSET))(this, settleInfo);
		}

		::System::Void Update(::Class_1_EB4EA813E55E9D5A* updateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB4EA813E55E9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_UPDATE_OFFSET))(this, updateInfo);
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

		::System::Void OnHandlePendingActionFinish(::Class_1_FB0A3C740B6169EA_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0A3C740B6169EA_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONHANDLEPENDINGACTIONFINISH_OFFSET))(this, rsp);
		}

		::System::Void OnCardSettle(::Class_1_963E317C37FB5E9A_38* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A_38*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONCARDSETTLE_OFFSET))(this, settleInfo);
		}

		::System::Void OnLeaveGameScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_ONLEAVEGAMESCENE_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartySettleData* CreateSettleData(::Class_1_6FC4D75D938BC053_19* info, ::RPG::Client::TrainParty::TrainPartySettleSourceType type)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::PVOID, ::Class_1_6FC4D75D938BC053_19*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE_CREATESETTLEDATA_OFFSET))(this, info, type);
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

		::System::Void _AddPendingAction(::Class_1_C0163F1F521957F0_1* pendingAction)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C0163F1F521957F0_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMEINSTANCE__ADDPENDINGACTION_OFFSET))(this, pendingAction);
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
