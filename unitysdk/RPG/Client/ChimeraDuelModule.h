#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_25.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_745;
class Class_1_809340EB7C132B81;
class Class_1_BF001F1F4539E7CD;
class Class_1_C563E5E77DCDB6EB;
class Class_1_DD584E66F5D339D3_1;
class Class_1_EAFAB368CCDA222C;
class Class_1_EB7343D9CD261C8C;
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

#define RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69CF40)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xB69C670)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0xB69C4D0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET UNITYSDK_OFFSET(0xB69C530)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xB69C650)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xB69C5D0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xB69C630)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0xB69C750)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xB69C6D0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0xB69C6F0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET UNITYSDK_OFFSET(0xB698EB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xB69C690)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xB69C6B0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xB69C610)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xB69C5F0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xB69C5B0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET UNITYSDK_OFFSET(0xB6979E0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0xB69C500)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xB69C560)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0xB69C580)
#define RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB6776E0)
#define RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xB69C7D0)
#define RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB69CCF0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xB67AE40)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0xB68ECA0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET UNITYSDK_OFFSET(0xB67B4A0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0xB698610)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET UNITYSDK_OFFSET(0xB699DB0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xB68E0F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xB68E960)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xB68C8D0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET UNITYSDK_OFFSET(0xB68CBD0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET UNITYSDK_OFFSET(0xB68D380)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET UNITYSDK_OFFSET(0xB699FB0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET UNITYSDK_OFFSET(0xB69A030)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET UNITYSDK_OFFSET(0xB691190)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0xB691530)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0xB69C680)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0xB69C660)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0xB69C5E0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xB69C640)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0xB69C6E0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0xB69C6A0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0xB69C6C0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0xB69C620)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0xB69C600)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0xB69C5C0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET UNITYSDK_OFFSET(0xB69C570)
#define RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB6979F0)
#define RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB6984C0)
#define RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xB69D2E0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xB69A490)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xB69B500)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xB69B400)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0xB699C60)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xB698740)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET UNITYSDK_OFFSET(0xB699750)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB699860)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB699AD0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xB69A230)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB698EE0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET UNITYSDK_OFFSET(0xB699690)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xB69C310)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0xB69C410)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xB69C210)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0xB69BFC0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0xB69C0C0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0xB69BDC0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0xB69BEA0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0xB69D290)
#define RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET UNITYSDK_OFFSET(0xB6985A0)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB69D490)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xB69D3B0)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xB69D430)
#define RPG_CLIENT_CHIMERADUELMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xB69D350)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelModule_TypeDefinitionIndex = 59244;

	class ChimeraDuelModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_745*>* _SendPacketProxies; // 0x10
		::RPG::Client::ChimeraDuelGameSession* _GameSession_k__BackingField; // 0x18
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestingStartGame; // 0x20
		::Class_1_EB7343D9CD261C8C* _FriendPvpInfo_k__BackingField; // 0x28
		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* _NextChallengeBattle_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::Class_1_BF001F1F4539E7CD*>* _PendingSessionChanges; // 0x38
		::RPG::Client::ChimeraDuelGameInfo* _GameInfo_k__BackingField; // 0x40
		::Class_1_EAFAB368CCDA222C* _RankInfo_k__BackingField; // 0x48
		::Class_1_DD584E66F5D339D3_1* _RoundInfo_k__BackingField; // 0x50
		::RPG::Client::ChimeraDuelTalkInfo* _TalkInfo_k__BackingField; // 0x58
		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* _NextShowcaseBattle_k__BackingField; // 0x60
		::RPG::Client::ChimeraDuelAchievementDataManager* _AchievementDataManager_k__BackingField; // 0x68
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* _MainPuzzleBoard_k__BackingField; // 0x70
		::RPG::Client::ChimeraDuelPlayerData* _PlayerData_k__BackingField; // 0x78
		::System::Boolean _IsAnticipatingSessionChanges; // 0x80
		::System::Boolean _IsRequestingGetData; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_745*>* get_SendPacketProxies()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_745*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET))(this);
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

		::System::Void _OnChimeraDuelGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSyncChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelUnlockMasterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelGetFriendListScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSaveFriendPvpLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelSetFriendDefendLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendFinishMasterChallengeCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET))(this, a1);
		}

		::System::Void _OnChimeraDuelFinishMasterChallengeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendSelectGameCsReq(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* SendStartGamePromised(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET))(this, a1);
		}

		::System::Void _TryResolvePromisedStartGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET))(this, a1);
		}

		::System::Void SendStartGameRequest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET))(this, a1);
		}

		::System::Void _OnChimeraDuelStartGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelEndGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendEndRoundShopStageRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET))(this);
		}

		::System::Void _OnChimeraDuelEndRoundShopStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendEndRoundBattleStageRequest(::Enum_3_DB663931210BBC27_25 a1, ::Class_1_C563E5E77DCDB6EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_25, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnChimeraDuelEndRoundBattleStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopLockChimeraRequest(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopLockItemRequest(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelShopLockScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopRefreshRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET))(this);
		}

		::System::Void _OnCmdChimeraDuelShopRefreshScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopBuyChimeraRequest(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCmdChimeraDuelShopBuyChimeraScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendShopBuyItemRequest(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelShopBuyItemScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendTeamSellChimeraRequest(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelSellChimeraScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void SendTeamChangeLineup(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnCmdChimeraDuelChangeLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdChimeraDuelSelectGameScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET))(this, a1, a2);
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

		::System::Void set_TalkInfo(::RPG::Client::ChimeraDuelTalkInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTalkInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET))(this, a1);
		}

		::Class_1_809340EB7C132B81* get_TriggerEventInfo()
		{
			return ((::Class_1_809340EB7C132B81*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET))(this);
		}

		::Class_1_DD584E66F5D339D3_1* get_RoundInfo()
		{
			return ((::Class_1_DD584E66F5D339D3_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET))(this);
		}

		::System::Void set_RoundInfo(::Class_1_DD584E66F5D339D3_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DD584E66F5D339D3_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameInfo* get_GameInfo()
		{
			return ((::RPG::Client::ChimeraDuelGameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET))(this);
		}

		::System::Void set_GameInfo(::RPG::Client::ChimeraDuelGameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET))(this, a1);
		}

		::Class_1_EAFAB368CCDA222C* get_RankInfo()
		{
			return ((::Class_1_EAFAB368CCDA222C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET))(this);
		}

		::System::Void set_RankInfo(::Class_1_EAFAB368CCDA222C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EAFAB368CCDA222C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelPlayerData* get_PlayerData()
		{
			return ((::RPG::Client::ChimeraDuelPlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::ChimeraDuelPlayerData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSession* get_GameSession()
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::RPG::Client::ChimeraDuelGameSession* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET))(this, a1);
		}

		::Class_1_EB7343D9CD261C8C* get_FriendPvpInfo()
		{
			return ((::Class_1_EB7343D9CD261C8C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET))(this);
		}

		::System::Void set_FriendPvpInfo(::Class_1_EB7343D9CD261C8C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EB7343D9CD261C8C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelAchievementDataManager* get_AchievementDataManager()
		{
			return ((::RPG::Client::ChimeraDuelAchievementDataManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET))(this);
		}

		::System::Void set_AchievementDataManager(::RPG::Client::ChimeraDuelAchievementDataManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelAchievementDataManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET))(this, a1);
		}

		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* get_NextChallengeBattle()
		{
			return ((::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextChallengeBattle(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* get_NextShowcaseBattle()
		{
			return ((::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET))(this);
		}

		::System::Void set_NextShowcaseBattle(::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* get_MainPuzzleBoard()
		{
			return ((::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET))(this);
		}

		::System::Void set_MainPuzzleBoard(::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET))(this, a1);
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
