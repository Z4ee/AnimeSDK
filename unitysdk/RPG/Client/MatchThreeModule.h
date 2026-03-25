#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_FA4F4A67B1C04320_517;
class Class_1_FAEB60E7FA15317F_1;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client { class MatchThreeGame; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace RPG::Client { class MatchThreeLobby; }
namespace RPG::Client { class MatchThreePlayerData; }
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B44270)
#define RPG_CLIENT_MATCHTHREEMODULE_DOENDGAME_OFFSET UNITYSDK_OFFSET(0x9B45FB0)
#define RPG_CLIENT_MATCHTHREEMODULE_ENDGAME_OFFSET UNITYSDK_OFFSET(0x9B443A0)
#define RPG_CLIENT_MATCHTHREEMODULE_GETBIRDLOCATIONID_OFFSET UNITYSDK_OFFSET(0x9B46670)
#define RPG_CLIENT_MATCHTHREEMODULE_GETDATAINITPROMISE_OFFSET UNITYSDK_OFFSET(0x9B45AB0)
#define RPG_CLIENT_MATCHTHREEMODULE_GETDEFAULTBIRDID_OFFSET UNITYSDK_OFFSET(0x9B46610)
#define RPG_CLIENT_MATCHTHREEMODULE_GETEASYLEVELFINISHORDER_OFFSET UNITYSDK_OFFSET(0x9B22A50)
#define RPG_CLIENT_MATCHTHREEMODULE_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0x9B42FF0)
#define RPG_CLIENT_MATCHTHREEMODULE_GETLEVELSBYMODE_OFFSET UNITYSDK_OFFSET(0x9B42E70)
#define RPG_CLIENT_MATCHTHREEMODULE_GETOFFERDATA_OFFSET UNITYSDK_OFFSET(0x9B21ED0)
#define RPG_CLIENT_MATCHTHREEMODULE_GETSCORELIMIT_OFFSET UNITYSDK_OFFSET(0x9B463A0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0x9B46CE0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_AVATARREWARDID_OFFSET UNITYSDK_OFFSET(0x9B46CC0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B46AA0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x9B44550)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9B46B60)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISARENAUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B46AC0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISENTRANCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B46B10)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISHARDMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0x9B43DB0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_LIMITREWARDID_OFFSET UNITYSDK_OFFSET(0x9B46CA0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_MATCHTHREELOBBY_OFFSET UNITYSDK_OFFSET(0x9B46BE0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B46A80)
#define RPG_CLIENT_MATCHTHREEMODULE_HASAVATARREWARD_OFFSET UNITYSDK_OFFSET(0x9B21F70)
#define RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENTEXCLUDEARENA_OFFSET UNITYSDK_OFFSET(0x9B44A90)
#define RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENT_OFFSET UNITYSDK_OFFSET(0x9B21C20)
#define RPG_CLIENT_MATCHTHREEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9B43E00)
#define RPG_CLIENT_MATCHTHREEMODULE_ISALLOFFERREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9B21E00)
#define RPG_CLIENT_MATCHTHREEMODULE_ISLEVELFINISH_OFFSET UNITYSDK_OFFSET(0x9B22C40)
#define RPG_CLIENT_MATCHTHREEMODULE_ISSCOREREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x9B46510)
#define RPG_CLIENT_MATCHTHREEMODULE_MARKNEEDAUTOOPENENTRANCE_OFFSET UNITYSDK_OFFSET(0x9B46570)
#define RPG_CLIENT_MATCHTHREEMODULE_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0x9B44560)
#define RPG_CLIENT_MATCHTHREEMODULE_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0x9B44760)
#define RPG_CLIENT_MATCHTHREEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B45AF0)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x9B447A0)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x9B44830)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9B44910)
#define RPG_CLIENT_MATCHTHREEMODULE_QUITGAME_OFFSET UNITYSDK_OFFSET(0x9B45EA0)
#define RPG_CLIENT_MATCHTHREEMODULE_READYCREATEPVPGAME_OFFSET UNITYSDK_OFFSET(0x9B44500)
#define RPG_CLIENT_MATCHTHREEMODULE_RESTARTPVEGAME_OFFSET UNITYSDK_OFFSET(0x9B45D30)
#define RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B44A40)
#define RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x9B449F0)
#define RPG_CLIENT_MATCHTHREEMODULE_SENDLEVELRESULTTOSERVER_OFFSET UNITYSDK_OFFSET(0x9B46020)
#define RPG_CLIENT_MATCHTHREEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9B457B0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_AVATARREWARDID_OFFSET UNITYSDK_OFFSET(0x9B46CD0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B46AB0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_LIMITREWARDID_OFFSET UNITYSDK_OFFSET(0x9B46CB0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B46A90)
#define RPG_CLIENT_MATCHTHREEMODULE_STARTPVEGAME_OFFSET UNITYSDK_OFFSET(0x9B45B30)
#define RPG_CLIENT_MATCHTHREEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9B465B0)
#define RPG_CLIENT_MATCHTHREEMODULE_TRYCONTINUEPVPGAME_OFFSET UNITYSDK_OFFSET(0x9B44460)
#define RPG_CLIENT_MATCHTHREEMODULE_UPDATELEVELDATABYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9B43130)
#define RPG_CLIENT_MATCHTHREEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B44BF0)
#define RPG_CLIENT_MATCHTHREEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B453C0)
#define RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREEGETDATADATASCRSP_OFFSET UNITYSDK_OFFSET(0x9B454A0)
#define RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREELEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0x9B45610)
#define RPG_CLIENT_MATCHTHREEMODULE__CREATESTATREPORTDATA_OFFSET UNITYSDK_OFFSET(0x9B462A0)
#define RPG_CLIENT_MATCHTHREEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B46D60)
#define RPG_CLIENT_MATCHTHREEMODULE__DISPOSECURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9B44700)
#define RPG_CLIENT_MATCHTHREEMODULE__GETLEVELDICTBYMODE_OFFSET UNITYSDK_OFFSET(0x9B42F80)
#define RPG_CLIENT_MATCHTHREEMODULE__INITLEVELDATA_OFFSET UNITYSDK_OFFSET(0x9B43690)
#define RPG_CLIENT_MATCHTHREEMODULE__INITUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9B43F50)
#define RPG_CLIENT_MATCHTHREEMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9B44D10)
#define RPG_CLIENT_MATCHTHREEMODULE__ONMATCHTHREESYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9B45740)
#define RPG_CLIENT_MATCHTHREEMODULE__ONONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x9B44DF0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCBIRDLOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x9B46700)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVELS_OFFSET UNITYSDK_OFFSET(0x9B43B00)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVEL_OFFSET UNITYSDK_OFFSET(0x9B43CE0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCMATCHTHREEINFO_OFFSET UNITYSDK_OFFSET(0x9B45550)
#define RPG_CLIENT_MATCHTHREEMODULE__TRYCLEARINVALIDPREFS_OFFSET UNITYSDK_OFFSET(0x9B44EC0)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B47080)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9B46FF0)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9B47150)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B47090)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B470F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeModule_TypeDefinitionIndex = 53594;

	class MatchThreeModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _OFFER_TYPE = 0x3; // 0x0
		// static const ::System::UInt32 _DEFAULT_BIRD_ID = 0x12C; // 0x0
		// static const ::System::UInt32 _LIMIT_PANEL_ID = 0xC35E; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _EasyLevels; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockMainMissionIDs; // 0x18
		::RPG::Client::MatchThreeGame* _CurrentGame_k__BackingField; // 0x20
		::RPG::Client::MatchThreePlayerData* _PlayerData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedEasyLevels; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BirdLocations; // 0x38
		::RPG::Client::Promises::Promise* _DataInited; // 0x40
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSubMissionIDs; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _HardLevels; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _HiddenLevels; // 0x58
		::System::UInt32 _AvatarRewardID_k__BackingField; // 0x60
		::System::Boolean _ShouldCreatePVPGame; // 0x64
		::System::Boolean _NeedAutoShowEntrance; // 0x65
		::System::UInt32 _ArenaUnlockSubMissionID; // 0x68
		::System::UInt32 _EntranceUnlockSubMissionID; // 0x6C
		::System::UInt32 _HardModeUnlockSubMissionID; // 0x70
		::System::UInt32 _LimitRewardID_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeLevelData*>* GetLevelsByMode(::System::UInt32 mode)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeLevelData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETLEVELSBYMODE_OFFSET))(this, mode);
		}

		::RPG::Client::MatchThreeLevelData* GetLevelData(::System::UInt32 levelID, ::System::UInt32 mode)
		{
			return ((::RPG::Client::MatchThreeLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETLEVELDATA_OFFSET))(this, levelID, mode);
		}

		::System::Boolean IsLevelFinish(::System::UInt32 levelID, ::System::UInt32 mode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ISLEVELFINISH_OFFSET))(this, levelID, mode);
		}

		::System::Int32 GetEasyLevelFinishOrder(::System::UInt32 levelID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETEASYLEVELFINISHORDER_OFFSET))(this, levelID);
		}

		::System::Void UpdateLevelDataBySubmission(::System::UInt32 submissionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_UPDATELEVELDATABYSUBMISSION_OFFSET))(this, submissionID);
		}

		::System::Void _InitLevelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__INITLEVELDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _GetLevelDictByMode(::System::UInt32 mode)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__GETLEVELDICTBYMODE_OFFSET))(this, mode);
		}

		::System::Void _SyncFinishedLevels(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FA4F4A67B1C04320_517*>* finishedLevels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FA4F4A67B1C04320_517*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVELS_OFFSET))(this, finishedLevels);
		}

		::System::Void _SyncFinishedLevel(::System::UInt32 levelID, ::System::UInt32 modeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVEL_OFFSET))(this, levelID, modeID);
		}

		::System::Boolean get_IsHardModeUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_ISHARDMODEUNLOCK_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryContinuePVPGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_TRYCONTINUEPVPGAME_OFFSET))(this);
		}

		::System::Void ReadyCreatePVPGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_READYCREATEPVPGAME_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_3 get_GameMode()
		{
			return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void OnCreateGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONCREATEGAME_OFFSET))(this);
		}

		::System::Void OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONFINISHGAME_OFFSET))(this);
		}

		::System::Void OnServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void OnServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void OnServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnOnGeneralRsp(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET))(this, msgId, msg);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnGeneralNotify(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET))(this, msgId, msg);
		}

		::System::Boolean IsAllOfferRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ISALLOFFERREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean HasAvatarReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_HASAVATARREWARD_OFFSET))(this);
		}

		::System::Boolean HasNewContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENT_OFFSET))(this);
		}

		::System::Boolean HasNewContentExcludeArena()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENTEXCLUDEARENA_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnOnActivityEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONONACTIVITYEND_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdMatchThreeGetDataDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREEGETDATADATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdMatchThreeLevelEndScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREELEVELENDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnMatchThreeSyncDataScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONMATCHTHREESYNCDATASCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GetDataInitPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETDATAINITPROMISE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void StartPVEGame(::System::UInt32 levelID, ::System::UInt32 mode, ::System::UInt32 birdID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_STARTPVEGAME_OFFSET))(this, levelID, mode, birdID);
		}

		::System::Void RestartPVEGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_RESTARTPVEGAME_OFFSET))(this);
		}

		::System::Void QuitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_QUITGAME_OFFSET))(this);
		}

		::System::Void EndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ENDGAME_OFFSET))(this);
		}

		::System::Void DoEndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_DOENDGAME_OFFSET))(this);
		}

		::System::Void SendLevelResultToServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SENDLEVELRESULTTOSERVER_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetOfferData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETOFFERDATA_OFFSET))(this);
		}

		::System::UInt32 GetScoreLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETSCORELIMIT_OFFSET))(this);
		}

		::System::Boolean IsScoreReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ISSCOREREACHLIMIT_OFFSET))(this);
		}

		::System::Void MarkNeedAutoOpenEntrance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_MARKNEEDAUTOOPENENTRANCE_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::UInt32 GetDefaultBirdID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETDEFAULTBIRDID_OFFSET))(this);
		}

		::System::UInt32 GetBirdLocationID(::System::UInt32 birdID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETBIRDLOCATIONID_OFFSET))(this, birdID);
		}

		::System::Void _InitUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__INITUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _SyncMatchThreeInfo(::Class_1_FAEB60E7FA15317F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAEB60E7FA15317F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCMATCHTHREEINFO_OFFSET))(this, info);
		}

		::System::Void _SyncBirdLocationInfo(::Class_1_FAEB60E7FA15317F_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FAEB60E7FA15317F_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCBIRDLOCATIONINFO_OFFSET))(this, info);
		}

		::System::Void _TryClearInvalidPrefs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__TRYCLEARINVALIDPREFS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _CreateStatReportData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CREATESTATREPORTDATA_OFFSET))(this);
		}

		::System::Void _DisposeCurrentGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__DISPOSECURRENTGAME_OFFSET))(this);
		}

		::RPG::Client::MatchThreePlayerData* get_PlayerData()
		{
			return ((::RPG::Client::MatchThreePlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::MatchThreePlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_PLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeGame* get_CurrentGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::MatchThreeGame* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_CURRENTGAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsArenaUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_ISARENAUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_ISENTRANCEUNLOCK_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeModule* get_Instance()
		{
			return ((::RPG::Client::MatchThreeModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::MatchThreeLobby* get_MatchThreeLobby()
		{
			return ((::RPG::Client::MatchThreeLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_MATCHTHREELOBBY_OFFSET))(this);
		}

		::System::UInt32 get_LimitRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_LIMITREWARDID_OFFSET))(this);
		}

		::System::Void set_LimitRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_LIMITREWARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_AVATARREWARDID_OFFSET))(this);
		}

		::System::Void set_AvatarRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_AVATARREWARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_ACTIVITYID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}
