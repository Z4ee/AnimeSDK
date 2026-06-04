#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_D17272E82AE804C2_563;
class Class_1_E604C57AF8A09FF9;
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

#define RPG_CLIENT_MATCHTHREEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF86130)
#define RPG_CLIENT_MATCHTHREEMODULE_DOENDGAME_OFFSET UNITYSDK_OFFSET(0xBF88A50)
#define RPG_CLIENT_MATCHTHREEMODULE_ENDGAME_OFFSET UNITYSDK_OFFSET(0xBF86260)
#define RPG_CLIENT_MATCHTHREEMODULE_GETBIRDLOCATIONID_OFFSET UNITYSDK_OFFSET(0xBF89120)
#define RPG_CLIENT_MATCHTHREEMODULE_GETDATAINITPROMISE_OFFSET UNITYSDK_OFFSET(0xBF88560)
#define RPG_CLIENT_MATCHTHREEMODULE_GETDEFAULTBIRDID_OFFSET UNITYSDK_OFFSET(0xBF890C0)
#define RPG_CLIENT_MATCHTHREEMODULE_GETEASYLEVELFINISHORDER_OFFSET UNITYSDK_OFFSET(0xBF84A90)
#define RPG_CLIENT_MATCHTHREEMODULE_GETLEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF84910)
#define RPG_CLIENT_MATCHTHREEMODULE_GETLEVELSBYMODE_OFFSET UNITYSDK_OFFSET(0xBF84700)
#define RPG_CLIENT_MATCHTHREEMODULE_GETOFFERDATA_OFFSET UNITYSDK_OFFSET(0xBF86A20)
#define RPG_CLIENT_MATCHTHREEMODULE_GETSCORELIMIT_OFFSET UNITYSDK_OFFSET(0xBF88E50)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xBF89820)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_AVATARREWARDID_OFFSET UNITYSDK_OFFSET(0xBF89800)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xBF895E0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF86410)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xBF896A0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISARENAUNLOCK_OFFSET UNITYSDK_OFFSET(0xBF89600)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISENTRANCEUNLOCK_OFFSET UNITYSDK_OFFSET(0xBF89650)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_ISHARDMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0xBF858D0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_LIMITREWARDID_OFFSET UNITYSDK_OFFSET(0xBF897E0)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_MATCHTHREELOBBY_OFFSET UNITYSDK_OFFSET(0xBF89720)
#define RPG_CLIENT_MATCHTHREEMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xBF895C0)
#define RPG_CLIENT_MATCHTHREEMODULE_HASAVATARREWARD_OFFSET UNITYSDK_OFFSET(0xBF86AC0)
#define RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENTEXCLUDEARENA_OFFSET UNITYSDK_OFFSET(0xBF86D50)
#define RPG_CLIENT_MATCHTHREEMODULE_HASNEWCONTENT_OFFSET UNITYSDK_OFFSET(0xBF86B70)
#define RPG_CLIENT_MATCHTHREEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xBF85920)
#define RPG_CLIENT_MATCHTHREEMODULE_ISALLOFFERREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xBF86950)
#define RPG_CLIENT_MATCHTHREEMODULE_ISLEVELFINISH_OFFSET UNITYSDK_OFFSET(0xBF84A10)
#define RPG_CLIENT_MATCHTHREEMODULE_ISSCOREREACHLIMIT_OFFSET UNITYSDK_OFFSET(0xBF88FC0)
#define RPG_CLIENT_MATCHTHREEMODULE_MARKNEEDAUTOOPENENTRANCE_OFFSET UNITYSDK_OFFSET(0xBF89020)
#define RPG_CLIENT_MATCHTHREEMODULE_ONCREATEGAME_OFFSET UNITYSDK_OFFSET(0xBF86420)
#define RPG_CLIENT_MATCHTHREEMODULE_ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0xBF86620)
#define RPG_CLIENT_MATCHTHREEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBF885A0)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xBF86660)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xBF866F0)
#define RPG_CLIENT_MATCHTHREEMODULE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xBF867D0)
#define RPG_CLIENT_MATCHTHREEMODULE_QUITGAME_OFFSET UNITYSDK_OFFSET(0xBF88940)
#define RPG_CLIENT_MATCHTHREEMODULE_READYCREATEPVPGAME_OFFSET UNITYSDK_OFFSET(0xBF863C0)
#define RPG_CLIENT_MATCHTHREEMODULE_RESTARTPVEGAME_OFFSET UNITYSDK_OFFSET(0xBF887E0)
#define RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xBF86900)
#define RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xBF868B0)
#define RPG_CLIENT_MATCHTHREEMODULE_SENDLEVELRESULTTOSERVER_OFFSET UNITYSDK_OFFSET(0xBF88AC0)
#define RPG_CLIENT_MATCHTHREEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xBF88270)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_AVATARREWARDID_OFFSET UNITYSDK_OFFSET(0xBF89810)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_CURRENTGAME_OFFSET UNITYSDK_OFFSET(0xBF895F0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_LIMITREWARDID_OFFSET UNITYSDK_OFFSET(0xBF897F0)
#define RPG_CLIENT_MATCHTHREEMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xBF895D0)
#define RPG_CLIENT_MATCHTHREEMODULE_STARTPVEGAME_OFFSET UNITYSDK_OFFSET(0xBF885E0)
#define RPG_CLIENT_MATCHTHREEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xBF89060)
#define RPG_CLIENT_MATCHTHREEMODULE_TRYCONTINUEPVPGAME_OFFSET UNITYSDK_OFFSET(0xBF86320)
#define RPG_CLIENT_MATCHTHREEMODULE_UPDATELEVELDATABYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xBF84B50)
#define RPG_CLIENT_MATCHTHREEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF86EB0)
#define RPG_CLIENT_MATCHTHREEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF87970)
#define RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREEGETDATADATASCRSP_OFFSET UNITYSDK_OFFSET(0xBF87BA0)
#define RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREELEVELENDSCRSP_OFFSET UNITYSDK_OFFSET(0xBF87D10)
#define RPG_CLIENT_MATCHTHREEMODULE__CREATESTATREPORTDATA_OFFSET UNITYSDK_OFFSET(0xBF88D40)
#define RPG_CLIENT_MATCHTHREEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBF898A0)
#define RPG_CLIENT_MATCHTHREEMODULE__DISPOSECURRENTGAME_OFFSET UNITYSDK_OFFSET(0xBF865C0)
#define RPG_CLIENT_MATCHTHREEMODULE__GETLEVELDICTBYMODE_OFFSET UNITYSDK_OFFSET(0xBF848A0)
#define RPG_CLIENT_MATCHTHREEMODULE__INITLEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF85170)
#define RPG_CLIENT_MATCHTHREEMODULE__INITUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0xBF85D40)
#define RPG_CLIENT_MATCHTHREEMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0xBF87010)
#define RPG_CLIENT_MATCHTHREEMODULE__ONMATCHTHREESYNCDATASCNOTIFY_OFFSET UNITYSDK_OFFSET(0xBF88200)
#define RPG_CLIENT_MATCHTHREEMODULE__ONONACTIVITYEND_OFFSET UNITYSDK_OFFSET(0xBF870F0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCBIRDLOCATIONINFO_OFFSET UNITYSDK_OFFSET(0xBF891B0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVELS_OFFSET UNITYSDK_OFFSET(0xBF855F0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBF857D0)
#define RPG_CLIENT_MATCHTHREEMODULE__SYNCMATCHTHREEINFO_OFFSET UNITYSDK_OFFSET(0xBF87C50)
#define RPG_CLIENT_MATCHTHREEMODULE__TRYCLEARINVALIDPREFS_OFFSET UNITYSDK_OFFSET(0xBF871C0)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF89BB0)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xBF89B30)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xBF89C80)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF89BC0)
#define RPG_CLIENT_MATCHTHREEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBF89C20)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeModule_TypeDefinitionIndex = 61672;

	class MatchThreeModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::UInt32 _OFFER_TYPE = 0x3; // 0x0
		// static const ::System::UInt32 _DEFAULT_BIRD_ID = 0x12C; // 0x0
		// static const ::System::UInt32 _LIMIT_PANEL_ID = 0xC35E; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BirdLocations; // 0x10
		::RPG::Client::Promises::Promise* _DataInited; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSubMissionIDs; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _EasyLevels; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedEasyLevels; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockMainMissionIDs; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _HardLevels; // 0x40
		::RPG::Client::MatchThreePlayerData* _PlayerData_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _HiddenLevels; // 0x50
		::RPG::Client::MatchThreeGame* _CurrentGame_k__BackingField; // 0x58
		::System::Boolean _NeedAutoShowEntrance; // 0x60
		::System::Boolean _ShouldCreatePVPGame; // 0x61
		::System::UInt32 _HardModeUnlockSubMissionID; // 0x64
		::System::UInt32 _AvatarRewardID_k__BackingField; // 0x68
		::System::UInt32 _ArenaUnlockSubMissionID; // 0x6C
		::System::UInt32 _LimitRewardID_k__BackingField; // 0x70
		::System::UInt32 _EntranceUnlockSubMissionID; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeLevelData*>* GetLevelsByMode(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeLevelData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETLEVELSBYMODE_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeLevelData* GetLevelData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeLevelData*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETLEVELDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLevelFinish(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_ISLEVELFINISH_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetEasyLevelFinishOrder(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETEASYLEVELFINISHORDER_OFFSET))(this, a1);
		}

		::System::Void UpdateLevelDataBySubmission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_UPDATELEVELDATABYSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _InitLevelData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__INITLEVELDATA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>* _GetLevelDictByMode(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeLevelData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__GETLEVELDICTBYMODE_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishedLevels(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_563*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D17272E82AE804C2_563*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVELS_OFFSET))(this, a1);
		}

		::System::Void _SyncFinishedLevel(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCFINISHEDLEVEL_OFFSET))(this, a1, a2);
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

		::System::Void ReadyCreatePVPGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_READYCREATEPVPGAME_OFFSET))(this, a1);
		}

		::Enum_3_A35B38E5F9115A76_2 get_GameMode()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_GAMEMODE_OFFSET))(this);
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

		::System::Void RPG_Client_IMultiplayerGame_OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IMultiplayerGame_OnGeneralNotify(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_RPG_CLIENT_IMULTIPLAYERGAME_ONGENERALNOTIFY_OFFSET))(this, a1, a2);
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

		::System::Void _OnFinishSubMission(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONFINISHSUBMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnOnActivityEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONONACTIVITYEND_OFFSET))(this, a1);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdMatchThreeGetDataDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREEGETDATADATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdMatchThreeLevelEndScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__CMDMATCHTHREELEVELENDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnMatchThreeSyncDataScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__ONMATCHTHREESYNCDATASCNOTIFY_OFFSET))(this, a1, a2);
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

		::System::Void StartPVEGame(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_STARTPVEGAME_OFFSET))(this, a1, a2, a3);
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

		::System::UInt32 GetBirdLocationID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GETBIRDLOCATIONID_OFFSET))(this, a1);
		}

		::System::Void _InitUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__INITUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _SyncMatchThreeInfo(::Class_1_E604C57AF8A09FF9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E604C57AF8A09FF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCMATCHTHREEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncBirdLocationInfo(::Class_1_E604C57AF8A09FF9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E604C57AF8A09FF9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE__SYNCBIRDLOCATIONINFO_OFFSET))(this, a1);
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

		::System::Void set_PlayerData(::RPG::Client::MatchThreePlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreePlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeGame* get_CurrentGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_CURRENTGAME_OFFSET))(this);
		}

		::System::Void set_CurrentGame(::RPG::Client::MatchThreeGame* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGame*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_CURRENTGAME_OFFSET))(this, a1);
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

		::System::Void set_LimitRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_LIMITREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_GET_AVATARREWARDID_OFFSET))(this);
		}

		::System::Void set_AvatarRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEMODULE_SET_AVATARREWARDID_OFFSET))(this, a1);
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
