#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_61.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA60FEB0)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0xA610220)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xA610720)
#define RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0xA610010)
#define RPG_CLIENT_TRAINPARTYMODULE_GETDYNAMICPROPIDBYSLOTID_OFFSET UNITYSDK_OFFSET(0xA6100B0)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xA612050)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xA612020)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ISINGAMESCENE_OFFSET UNITYSDK_OFFSET(0xA610550)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xA612040)
#define RPG_CLIENT_TRAINPARTYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA60FE30)
#define RPG_CLIENT_TRAINPARTYMODULE_ISAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0xA610120)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0xA612060)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0xA6120C0)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWRESIDENTREDDOT_OFFSET UNITYSDK_OFFSET(0xA612110)
#define RPG_CLIENT_TRAINPARTYMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0xA610A10)
#define RPG_CLIENT_TRAINPARTYMODULE_ONENTERGAMESCENE_OFFSET UNITYSDK_OFFSET(0xA6101C0)
#define RPG_CLIENT_TRAINPARTYMODULE_SENDGETTRAINPARTYDATAREQ_OFFSET UNITYSDK_OFFSET(0xA60FF00)
#define RPG_CLIENT_TRAINPARTYMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xA612030)
#define RPG_CLIENT_TRAINPARTYMODULE_TRYSTARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xA610440)
#define RPG_CLIENT_TRAINPARTYMODULE_UNLOCKHEROROOM_OFFSET UNITYSDK_OFFSET(0xA610C90)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA610F00)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA610F40)
#define RPG_CLIENT_TRAINPARTYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6121D0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDDIYSCRSP_OFFSET UNITYSDK_OFFSET(0xA611B20)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0xA611BB0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA611E90)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSTARTSTEPSCRSP_OFFSET UNITYSDK_OFFSET(0xA611A80)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYENTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA611C50)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xA611D80)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0xA611D00)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA6112D0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0xA611530)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0xA611CA0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6115B0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0xA611680)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSKIPUNLOCKSELFROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xA611F20)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSYNCUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA611700)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYTAKEBUILDLEVELAWARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA611E00)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYUSECARDSCRSP_OFFSET UNITYSDK_OFFSET(0xA6113C0)
#define RPG_CLIENT_TRAINPARTYMODULE__STARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xA610680)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA612290)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA612200)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6122A0)
#define RPG_CLIENT_TRAINPARTYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA612300)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyModule_TypeDefinitionIndex = 55648;

	class TrainPartyModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::String* _GameplayPageName; // 0x10
		::RPG::Client::TrainParty::TrainPartyGameInstance* _CurrentGame_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise* _PendingPromise; // 0x20

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

		::Enum_3_DB663931210BBC27_61 GetBuildStatusByStaticID(::System::UInt32 staticID)
		{
			return ((::Enum_3_DB663931210BBC27_61(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET))(this, staticID);
		}

		::System::UInt32 GetDynamicPropIDBySlotID(::System::UInt32 slotID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETDYNAMICPROPIDBYSLOTID_OFFSET))(this, slotID);
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

		::System::Void _OnTrainPartySkipUnlockSelfRoomScRsp(::System::UInt16 cmdID, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSKIPUNLOCKSELFROOMSCRSP_OFFSET))(this, cmdID, rspObject);
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
