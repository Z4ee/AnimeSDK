#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_25.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_694;
class Class_1_470AF1D89171047D;
class Class_1_C3EE4C119FC7D0D0;
class Class_1_C563E5E77DCDB6EB;
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

#define RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA020950)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xA01FED0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xA01FD30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET UNITYSDK_OFFSET(0xA01FD90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xA01FEB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xA01FE30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xA01FE90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xA01FFB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xA01FF30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xA01FF50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET UNITYSDK_OFFSET(0xA01B750)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xA01FEF0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xA01FF10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA01FE70)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xA01FE50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA01FE10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET UNITYSDK_OFFSET(0xA01A960)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xA01FD60)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xA01FDC0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0xA01FDE0)
#define RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA020740)
#define RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA020030)
#define RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA0204F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xA01E090)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xA01DD10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET UNITYSDK_OFFSET(0xA01C4F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xA01AEB0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET UNITYSDK_OFFSET(0xA01C710)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xA01F3B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xA01F6F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xA01EB00)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xA01ED10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET UNITYSDK_OFFSET(0xA01F000)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET UNITYSDK_OFFSET(0xA01C910)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET UNITYSDK_OFFSET(0xA01C990)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET UNITYSDK_OFFSET(0xA010FD0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xA0113F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xA01FEE0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xA01FEC0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xA01FE40)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xA01FEA0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xA01FF40)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xA01FF00)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xA01FF20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA01FE80)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xA01FE60)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xA01FE20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xA01FDD0)
#define RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA01A970)
#define RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA01AD70)
#define RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA020E40)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xA01CDF0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA01E2A0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xA01DF90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xA01C5D0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xA01AFE0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xA01BFB0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA01C0C0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA01C350)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xA01CB90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA01B780)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET UNITYSDK_OFFSET(0xA01BEF0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xA01FB70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xA01FC70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xA01FA70)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xA01F5F0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xA01F920)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0xA01EF20)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0xA01F280)
#define RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xA020CF0)
#define RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET UNITYSDK_OFFSET(0xA01AE40)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA021000)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA020F10)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xA020FA0)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA020EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelModule_TypeDefinitionIndex = 58314;

	class ChimeraDuelModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::ChimeraDuelPlayerData* _PlayerData_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelGameInfo* _GameInfo_k__BackingField; // 0x18
		::RPG::Client::ChimeraDuelTalkInfo* _TalkInfo_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelAchievementDataManager* _AchievementDataManager_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_694*>* _SendPacketProxies; // 0x30
		::RPG::Client::ChimeraDuelGameSession* _GameSession_k__BackingField; // 0x38
		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* _NextShowcaseBattle_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::Class_1_470AF1D89171047D*>* _PendingSessionChanges; // 0x48
		::Class_1_C3EE4C119FC7D0D0* _FriendPvpInfo_k__BackingField; // 0x50
		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* _NextChallengeBattle_k__BackingField; // 0x58
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* _MainPuzzleBoard_k__BackingField; // 0x60
		::Class_1_F95DD0989B6896B5* _RankInfo_k__BackingField; // 0x68
		::Class_1_F3EB7D0860A6C71F_2* _RoundInfo_k__BackingField; // 0x70
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestingStartGame; // 0x78
		::System::Boolean _IsRequestingGetData; // 0x80
		::System::Boolean _IsAnticipatingSessionChanges; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_694*>* get_SendPacketProxies()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_694*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET))(this);
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

		::System::Void SendEndRoundBattleStageRequest(::Enum_3_DB663931210BBC27_25 resultType, ::Class_1_C563E5E77DCDB6EB* settleInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_25, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET))(this, resultType, settleInfo);
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
