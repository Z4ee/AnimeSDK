#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_65.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3669E0)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xB366D50)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xB367250)
#define RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0xB366B40)
#define RPG_CLIENT_TRAINPARTYMODULE_GETDIYITEMBYSLOTID_OFFSET UNITYSDK_OFFSET(0xB366BE0)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xB368C50)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xB368C20)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ISINGAMESCENE_OFFSET UNITYSDK_OFFSET(0xB367080)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xB368C40)
#define RPG_CLIENT_TRAINPARTYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB366960)
#define RPG_CLIENT_TRAINPARTYMODULE_ISAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xB366C50)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xB368C60)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xB368CC0)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWRESIDENTREDDOT_OFFSET UNITYSDK_OFFSET(0xB368D10)
#define RPG_CLIENT_TRAINPARTYMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0xB367540)
#define RPG_CLIENT_TRAINPARTYMODULE_ONENTERGAMESCENE_OFFSET UNITYSDK_OFFSET(0xB366CF0)
#define RPG_CLIENT_TRAINPARTYMODULE_SENDGETTRAINPARTYDATAREQ_OFFSET UNITYSDK_OFFSET(0xB366A30)
#define RPG_CLIENT_TRAINPARTYMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xB368C30)
#define RPG_CLIENT_TRAINPARTYMODULE_TRYSTARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB366F70)
#define RPG_CLIENT_TRAINPARTYMODULE_UNLOCKHEROROOM_OFFSET UNITYSDK_OFFSET(0xB3677C0)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB367800)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB367920)
#define RPG_CLIENT_TRAINPARTYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB368DD0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDDIYSCRSP_OFFSET UNITYSDK_OFFSET(0xB3685A0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xB368630)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB368910)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB3689A0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCRSP_OFFSET UNITYSDK_OFFSET(0xB368A50)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSTARTSTEPSCRSP_OFFSET UNITYSDK_OFFSET(0xB368500)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYENTERSCRSP_OFFSET UNITYSDK_OFFSET(0xB3686D0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xB368800)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xB368780)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB367D20)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xB367FA0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xB368720)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB368020)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETBADGEAUTOFILLSCRSP_OFFSET UNITYSDK_OFFSET(0xB368B20)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xB368100)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSYNCUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB368180)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYTAKEBUILDLEVELAWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB368880)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYUSECARDSCRSP_OFFSET UNITYSDK_OFFSET(0xB367E30)
#define RPG_CLIENT_TRAINPARTYMODULE__ONUNLOCKDATANEEDEDMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0xB3678B0)
#define RPG_CLIENT_TRAINPARTYMODULE__STARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB3671B0)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB368E90)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB368E00)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xB368EA0)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB368F00)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyModule_TypeDefinitionIndex = 62850;

	class TrainPartyModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::TrainParty::TrainPartyGameInstance* _CurrentGame_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* _PendingPromise; // 0x18
		::System::String* _GameplayPageName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void SendGetTrainPartyDataReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_SENDGETTRAINPARTYDATAREQ_OFFSET))(this);
		}

		::Enum_3_DB663931210BBC27_65 GetBuildStatusByStaticID(::System::UInt32 staticID)
		{
			return ((::Enum_3_DB663931210BBC27_65(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET))(this, staticID);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDIYItemBySlotID(::System::UInt32 slotID)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETDIYITEMBYSLOTID_OFFSET))(this, slotID);
		}

		::System::Boolean IsAreaUnlock(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ISAREAUNLOCK_OFFSET))(this, areaID);
		}

		::System::Void OnEnterGameScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ONENTERGAMESCENE_OFFSET))(this);
		}

		::System::Void EnterGameplayPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPLAYPAGE_OFFSET))(this);
		}

		::System::Boolean TryStartGameplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_TRYSTARTGAMEPLAY_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EnterGamePromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPROMISE_OFFSET))(this);
		}

		::System::Void LeaveGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_LEAVEGAME_OFFSET))(this);
		}

		::System::Void UnlockHeroRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_UNLOCKHEROROOM_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUnlockDataNeededMissionDataReady(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONUNLOCKDATANEEDEDMISSIONDATAREADY_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTrainPartyGetDataScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGETDATASCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyUseCardScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYUSECARDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyHandlePendingActionScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYHANDLEPENDINGACTIONSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyMoveScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYMOVESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartySettleNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETTLENOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartySyncUpdateScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSYNCUPDATESCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyBuildStartStepScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSTARTSTEPSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyBuildDiyScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDDIYSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyBuildingUpdateNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDINGUPDATENOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyEnterScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYENTERSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyLeaveScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYLEAVESCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyGamePlayStartScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSTARTSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyGamePlaySettleNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSETTLENOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyTakeBuildLevelAwardScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYTAKEBUILDLEVELAWARDSCRSP_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyBuildRoomScNotify(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDROOMSCNOTIFY_OFFSET))(this, cmdID, rspObject);
		}

		::System::Void _OnTrainPartyBuildSelfDisplayAreaDiyScNotify(::System::UInt16 cmd, ::System::Object* notifyObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCNOTIFY_OFFSET))(this, cmd, notifyObject);
		}

		::System::Void _OnTrainPartyBuildSelfDisplayAreaDiyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainPartySetBadgeAutoFillScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETBADGEAUTOFILLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _StartGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__STARTGAMEPLAY_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyGameInstance* get_CurrentGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::TrainParty::TrainPartyGameInstance* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_SET_CURRENTGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsInGameScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GET_ISINGAMESCENE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GET_REWARDID_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoNewContentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowResidentRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ISSHOWRESIDENTREDDOT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
