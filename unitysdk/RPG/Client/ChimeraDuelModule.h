#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_24.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_603;
class Class_1_C3EE4C119FC7D0D0;
class Class_1_C563E5E77DCDB6EB;
class Class_1_F39C4BFF3EB82CCB;
class Class_1_F3EB7D0860A6C71F_2;
class Class_1_F95DD0989B6896B5;
class Class_1_FF872820A2FF123B;
namespace RPG::Client { class ChimeraDuelAchievementDataManager; }
namespace RPG::Client { class ChimeraDuelChimeraInfo; }
namespace RPG::Client { class ChimeraDuelChimeraLevelInfo; }
namespace RPG::Client { class ChimeraDuelGameInfo; }
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelMasterInfo; }
namespace RPG::Client { class ChimeraDuelPlayerData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelSkillInfo; }
namespace RPG::Client { class ChimeraDuelTalkInfo; }
namespace RPG::Client { class ChimeraDuelTools_ShowcaseBattleSetup; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::Client::Prop { class ChimeraDuelMainPuzzleBoard; }
namespace RPG::Client::Prop { class IChimeraDuelMainPuzzleStateMachine; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93B2940)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x93B1ED0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0x93B1D30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET UNITYSDK_OFFSET(0x93B1D90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0x93B1EB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0x93B1E30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x93B1E90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0x93B1FB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x93B1F30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x93B1F50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET UNITYSDK_OFFSET(0x93AD750)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x93B1EF0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x93B1F10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x93B1E70)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x93B1E50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x93B1E10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET UNITYSDK_OFFSET(0x93AC960)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x93B1D60)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET UNITYSDK_OFFSET(0x93B1DC0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x93B1DE0)
#define RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x93B2730)
#define RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x93B2030)
#define RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x93B24E0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0x93B0090)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0x93AFD10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET UNITYSDK_OFFSET(0x93AE510)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x93ACEB0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET UNITYSDK_OFFSET(0x93AE730)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x93B13B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET UNITYSDK_OFFSET(0x93B16F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x93B0B00)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET UNITYSDK_OFFSET(0x93B0D10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET UNITYSDK_OFFSET(0x93B1000)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET UNITYSDK_OFFSET(0x93AE930)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET UNITYSDK_OFFSET(0x93AE9B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET UNITYSDK_OFFSET(0x93A2FE0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x93A3400)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x93B1EE0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0x93B1EC0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0x93B1E40)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x93B1EA0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x93B1F40)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x93B1F00)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x93B1F20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x93B1E80)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x93B1E60)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x93B1E20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET UNITYSDK_OFFSET(0x93B1DD0)
#define RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x93AC970)
#define RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0x93ACD70)
#define RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x93B2E30)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x93AEE10)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x93B02A0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x93AFF90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x93AE5F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x93ACFE0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x93ADFD0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x93AE0E0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x93AE370)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x93AEBB0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x93AD780)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET UNITYSDK_OFFSET(0x93ADF10)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x93B1B70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x93B1C70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x93B1A70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x93B15F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x93B1920)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0x93B0F20)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0x93B1280)
#define RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x93B2CE0)
#define RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET UNITYSDK_OFFSET(0x93ACE40)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x93B2FF0)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x93B2F00)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x93B2F90)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x93B2EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelModule_TypeDefinitionIndex = 51376;

	class ChimeraDuelModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* _NextChallengeBattle_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelTalkInfo* _TalkInfo_k__BackingField; // 0x18
		::Class_1_C3EE4C119FC7D0D0* _FriendPvpInfo_k__BackingField; // 0x20
		::Class_1_F3EB7D0860A6C71F_2* _RoundInfo_k__BackingField; // 0x28
		::RPG::Client::ChimeraDuelPlayerData* _PlayerData_k__BackingField; // 0x30
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestingStartGame; // 0x38
		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* _NextShowcaseBattle_k__BackingField; // 0x40
		::Class_1_F95DD0989B6896B5* _RankInfo_k__BackingField; // 0x48
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* _MainPuzzleBoard_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::Class_1_F39C4BFF3EB82CCB*>* _PendingSessionChanges; // 0x58
		::RPG::Client::ChimeraDuelGameInfo* _GameInfo_k__BackingField; // 0x60
		::RPG::Client::ChimeraDuelAchievementDataManager* _AchievementDataManager_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_603*>* _SendPacketProxies; // 0x70
		::RPG::Client::ChimeraDuelGameSession* _GameSession_k__BackingField; // 0x78
		::System::Boolean _IsAnticipatingSessionChanges; // 0x80
		::System::Boolean _IsRequestingGetData; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_603*>* get_SendPacketProxies()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_603*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CancelRequestsOnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET))(this);
		}

		::System::Void SendGetDataRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET))(this);
		}

		::System::Void _OnChimeraDuelGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelSyncChangeScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelUnlockMasterScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelGetFriendListScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelSaveFriendPvpLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelSetFriendDefendLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendFinishMasterChallengeCsReq(::System::UInt32 masterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET))(this, masterID);
		}

		::System::Void _OnChimeraDuelFinishMasterChallengeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendSelectGameCsReq(::System::UInt32 nextGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET))(this, nextGameID);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* SendStartGamePromised(::System::UInt32 masterID)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET))(this, masterID);
		}

		::System::Void _TryResolvePromisedStartGame(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET))(this, result);
		}

		::System::Void SendStartGameRequest(::System::UInt32 masterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET))(this, masterID);
		}

		::System::Void _OnChimeraDuelStartGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnChimeraDuelEndGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendEndRoundShopStageRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET))(this);
		}

		::System::Void _OnChimeraDuelEndRoundShopStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendEndRoundBattleStageRequest(::Enum_3_DB663931210BBC27_24 resultType, ::Class_1_C563E5E77DCDB6EB* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_24, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET))(this, resultType, settleInfo);
		}

		::System::Void _OnChimeraDuelEndRoundBattleStageScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendShopLockChimeraRequest(::System::UInt32 uniqueID, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET))(this, uniqueID, locked);
		}

		::System::Void SendShopLockItemRequest(::System::UInt32 uniqueID, ::System::Boolean locked)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET))(this, uniqueID, locked);
		}

		::System::Void _OnCmdChimeraDuelShopLockScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendShopRefreshRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET))(this);
		}

		::System::Void _OnCmdChimeraDuelShopRefreshScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendShopBuyChimeraRequest(::System::UInt32 shopChimeraUniqueID, ::Il2CppArray<::System::UInt32>* lineup, ::System::UInt32 upgradedMemberUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET))(this, shopChimeraUniqueID, lineup, upgradedMemberUniqueID);
		}

		::System::Void _OnCmdChimeraDuelShopBuyChimeraScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendShopBuyItemRequest(::System::UInt32 shopItemUniqueID, ::System::UInt32 appliedChimeraUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET))(this, shopItemUniqueID, appliedChimeraUniqueID);
		}

		::System::Void _OnCmdChimeraDuelShopBuyItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendTeamSellChimeraRequest(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* lineup, ::System::UInt32 soldUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET))(this, lineup, soldUniqueID);
		}

		::System::Void _OnCmdChimeraDuelSellChimeraScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendTeamChangeLineup(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* lineup, ::System::UInt32 sourceUniqueID, ::System::UInt32 targetUniqueID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET))(this, lineup, sourceUniqueID, targetUniqueID);
		}

		::System::Void _OnCmdChimeraDuelChangeLineupScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdChimeraDuelSelectGameScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::RPG::Client::ChimeraDuelChimeraInfo* get_ChimeraInfo()
		{
			return ((::RPG::Client::ChimeraDuelChimeraInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterInfo* get_MasterInfo()
		{
			return ((::RPG::Client::ChimeraDuelMasterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelSkillInfo* get_SkillInfo()
		{
			return ((::RPG::Client::ChimeraDuelSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo* get_ChimeraLevelInfo()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelTalkInfo* get_TalkInfo()
		{
			return ((::RPG::Client::ChimeraDuelTalkInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET))(this);
		}

		::System::Void set_TalkInfo(::RPG::Client::ChimeraDuelTalkInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET))(this, value);
		}

		::Class_1_FF872820A2FF123B* get_TriggerEventInfo()
		{
			return ((::Class_1_FF872820A2FF123B*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET))(this);
		}

		::Class_1_F3EB7D0860A6C71F_2* get_RoundInfo()
		{
			return ((::Class_1_F3EB7D0860A6C71F_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET))(this);
		}

		::System::Void set_RoundInfo(::Class_1_F3EB7D0860A6C71F_2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3EB7D0860A6C71F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameInfo* get_GameInfo()
		{
			return ((::RPG::Client::ChimeraDuelGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET))(this);
		}

		::System::Void set_GameInfo(::RPG::Client::ChimeraDuelGameInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET))(this, value);
		}

		::Class_1_F95DD0989B6896B5* get_RankInfo()
		{
			return ((::Class_1_F95DD0989B6896B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::Class_1_F95DD0989B6896B5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F95DD0989B6896B5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelPlayerData* get_PlayerData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::ChimeraDuelPlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSession* get_GameSession()
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::RPG::Client::ChimeraDuelGameSession* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET))(this, value);
		}

		::Class_1_C3EE4C119FC7D0D0* get_FriendPvpInfo()
		{
			return ((::Class_1_C3EE4C119FC7D0D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET))(this);
		}

		::System::Void set_FriendPvpInfo(::Class_1_C3EE4C119FC7D0D0* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C3EE4C119FC7D0D0*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelAchievementDataManager* get_AchievementDataManager()
		{
			return ((::RPG::Client::ChimeraDuelAchievementDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_AchievementDataManager(::RPG::Client::ChimeraDuelAchievementDataManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelAchievementDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET))(this, value);
		}

		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* get_NextChallengeBattle()
		{
			return ((::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextChallengeBattle(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* get_NextShowcaseBattle()
		{
			return ((::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextShowcaseBattle(::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET))(this, value);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* get_MainPuzzleBoard()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET))(this);
		}

		::System::Void set_MainPuzzleBoard(::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET))(this, value);
		}

		::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine* get_MainPuzzleStateMachine()
		{
			return ((::RPG::Client::Prop::IChimeraDuelMainPuzzleStateMachine*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET))(this);
		}

		::System::Boolean get_IsInLongTail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Boolean HasAnyResidentRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnModuleInitReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
