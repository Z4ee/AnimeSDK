#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_67.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2A22C0)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPLAYPAGE_OFFSET UNITYSDK_OFFSET(0x1B2A2630)
#define RPG_CLIENT_TRAINPARTYMODULE_ENTERGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0x1B2A2BC0)
#define RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET UNITYSDK_OFFSET(0x1B2A2420)
#define RPG_CLIENT_TRAINPARTYMODULE_GETDIYITEMBYSLOTID_OFFSET UNITYSDK_OFFSET(0x1B2A24C0)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x1B2A4DE0)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1B2A4D70)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_ISINGAMESCENE_OFFSET UNITYSDK_OFFSET(0x1B2A2A70)
#define RPG_CLIENT_TRAINPARTYMODULE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1B2A4D90)
#define RPG_CLIENT_TRAINPARTYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B2A2270)
#define RPG_CLIENT_TRAINPARTYMODULE_ISAREAUNLOCK_OFFSET UNITYSDK_OFFSET(0x1B2A2530)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFONEWCONTENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1B2A4E30)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x1B2A4E90)
#define RPG_CLIENT_TRAINPARTYMODULE_ISSHOWRESIDENTREDDOT_OFFSET UNITYSDK_OFFSET(0x1B2A4EE0)
#define RPG_CLIENT_TRAINPARTYMODULE_LEAVEGAME_OFFSET UNITYSDK_OFFSET(0x1B2A2E80)
#define RPG_CLIENT_TRAINPARTYMODULE_ONENTERGAMESCENE_OFFSET UNITYSDK_OFFSET(0x1B2A25D0)
#define RPG_CLIENT_TRAINPARTYMODULE_SENDGETTRAINPARTYDATAREQ_OFFSET UNITYSDK_OFFSET(0x1B2A2310)
#define RPG_CLIENT_TRAINPARTYMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x1B2A4D80)
#define RPG_CLIENT_TRAINPARTYMODULE_TRYSTARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x1B2A2950)
#define RPG_CLIENT_TRAINPARTYMODULE_UNLOCKHEROROOM_OFFSET UNITYSDK_OFFSET(0x1B2A30E0)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B2A3120)
#define RPG_CLIENT_TRAINPARTYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B2A3260)
#define RPG_CLIENT_TRAINPARTYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2A4FA0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDDIYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A46D0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDINGUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4770)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4A50)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4AE0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A4B90)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSTARTSTEPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A4630)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A4810)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4940)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A48C0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A3D30)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYHANDLEPENDINGACTIONSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A3FB0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A4860)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4030)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETBADGEAUTOFILLSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A4C70)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETTLENOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4100)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSYNCUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B2A4180)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYTAKEBUILDLEVELAWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A49C0)
#define RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYUSECARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1B2A3E40)
#define RPG_CLIENT_TRAINPARTYMODULE__ONUNLOCKDATANEEDEDMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1B2A31F0)
#define RPG_CLIENT_TRAINPARTYMODULE__STARTGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x1B2A2B20)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyModule_TypeDefinitionIndex = 68161;

	class TrainPartyModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _PendingPromise; // 0x10
		::System::String* _GameplayPageName; // 0x18
		::RPG::Client::TrainParty::TrainPartyGameInstance* _CurrentGame_k__BackingField; // 0x20

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

		::Enum_3_DB663931210BBC27_67 GetBuildStatusByStaticID(::System::UInt32 a1)
		{
			return ((::Enum_3_DB663931210BBC27_67(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETBUILDSTATUSBYSTATICID_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* GetDIYItemBySlotID(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GETDIYITEMBYSLOTID_OFFSET))(this, a1);
		}

		::System::Boolean IsAreaUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_ISAREAUNLOCK_OFFSET))(this, a1);
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

		::System::Void _OnUnlockDataNeededMissionDataReady(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONUNLOCKDATANEEDEDMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTrainPartyGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyUseCardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYUSECARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyHandlePendingActionScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYHANDLEPENDINGACTIONSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyMoveScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYMOVESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartySettleNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETTLENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartySyncUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSYNCUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildStartStepScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSTARTSTEPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDDIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildingUpdateNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDINGUPDATENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyEnterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYENTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYLEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyGamePlayStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyGamePlaySettleNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYGAMEPLAYSETTLENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyTakeBuildLevelAwardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYTAKEBUILDLEVELAWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildRoomScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDROOMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildSelfDisplayAreaDiyScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartyBuildSelfDisplayAreaDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYBUILDSELFDISPLAYAREADIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPartySetBadgeAutoFillScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__ONTRAINPARTYSETBADGEAUTOFILLSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _StartGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE__STARTGAMEPLAY_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyGameInstance* get_CurrentGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::TrainParty::TrainPartyGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYMODULE_SET_CURRENTGAME_OFFSET))(this, a1);
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
	};
}
