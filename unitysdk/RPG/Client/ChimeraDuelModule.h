#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_26.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_819;
class Class_1_70D183D5F3B9F81F;
class Class_1_7D90E35D57A0C529;
class Class_1_809340EB7C132B81;
class Class_1_C563E5E77DCDB6EB;
class Class_1_DD584E66F5D339D3_1;
class Class_1_EAFAB368CCDA222C;
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

#define RPG_CLIENT_CHIMERADUELMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5EC980)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x1B5EBEB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERAINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBC50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_CHIMERALEVELINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBD10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x1B5EBE70)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ISINLONGTAIL_OFFSET UNITYSDK_OFFSET(0x1B5EBF90)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x1B5EBF10)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MAINPUZZLESTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B5EBF30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_MASTERINFO_OFFSET UNITYSDK_OFFSET(0x1B5E70B0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5EBED0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5EBEF0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1B5EBE50)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE30)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBDF0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET UNITYSDK_OFFSET(0x1B5E5A00)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_SKILLINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBCB0)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TALKINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBD70)
#define RPG_CLIENT_CHIMERADUELMODULE_GET_TRIGGEREVENTINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBD90)
#define RPG_CLIENT_CHIMERADUELMODULE_HASANYRESIDENTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B5EC780)
#define RPG_CLIENT_CHIMERADUELMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1B5EC010)
#define RPG_CLIENT_CHIMERADUELMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B5EC4E0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5E9CF0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDSHOPSTAGEREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5E99A0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDFINISHMASTERCHALLENGECSREQ_OFFSET UNITYSDK_OFFSET(0x1B5E8060)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDGETDATAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5E6660)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSELECTGAMECSREQ_OFFSET UNITYSDK_OFFSET(0x1B5E82E0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5EB290)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPBUYITEMREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5EB5D0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5EAA10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPLOCKITEMREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5EAC20)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSHOPREFRESHREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5EAF10)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEPROMISED_OFFSET UNITYSDK_OFFSET(0x1B5E8530)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDSTARTGAMEREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5E85B0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMCHANGELINEUP_OFFSET UNITYSDK_OFFSET(0x1B5DA0F0)
#define RPG_CLIENT_CHIMERADUELMODULE_SENDTEAMSELLCHIMERAREQUEST_OFFSET UNITYSDK_OFFSET(0x1B5DA680)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ACHIEVEMENTDATAMANAGER_OFFSET UNITYSDK_OFFSET(0x1B5EBEC0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBEA0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMEINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0x1B5EBE80)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_MAINPUZZLEBOARD_OFFSET UNITYSDK_OFFSET(0x1B5EBF20)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5EBEE0)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_NEXTSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x1B5EBF00)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1B5EBE60)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_RANKINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE40)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_ROUNDINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBE00)
#define RPG_CLIENT_CHIMERADUELMODULE_SET_TALKINFO_OFFSET UNITYSDK_OFFSET(0x1B5EBD80)
#define RPG_CLIENT_CHIMERADUELMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B5E5A40)
#define RPG_CLIENT_CHIMERADUELMODULE__CANCELREQUESTSONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1B5E6510)
#define RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5ECC80)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E8A60)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E9F00)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E9BF0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELFINISHMASTERCHALLENGESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E8190)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E6790)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELGETFRIENDLISTSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E7B50)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSAVEFRIENDPVPLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E7C60)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSETFRIENDDEFENDLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E7ED0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSTARTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E8800)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELSYNCCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1B5E7110)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCHIMERADUELUNLOCKMASTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5E7A50)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELCHANGELINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EBA90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELECTGAMESCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EBB90)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSELLCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EB990)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYCHIMERASCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EB4D0)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPBUYITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EB840)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPLOCKSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EAE30)
#define RPG_CLIENT_CHIMERADUELMODULE__ONCMDCHIMERADUELSHOPREFRESHSCRSP_OFFSET UNITYSDK_OFFSET(0x1B5EB160)
#define RPG_CLIENT_CHIMERADUELMODULE__ONMODULEINITREQ_OFFSET UNITYSDK_OFFSET(0x1B5ECC30)
#define RPG_CLIENT_CHIMERADUELMODULE__TRYRESOLVEPROMISEDSTARTGAME_OFFSET UNITYSDK_OFFSET(0x1B5E65F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelModule_TypeDefinitionIndex = 63368;

	class ChimeraDuelModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Prop::ChimeraDuelMainPuzzleBoard* _MainPuzzleBoard_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelPlayerData* _PlayerData_k__BackingField; // 0x18
		::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* _NextShowcaseBattle_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelGameSession* _GameSession_k__BackingField; // 0x28
		::Class_1_EAFAB368CCDA222C* _RankInfo_k__BackingField; // 0x30
		::Class_1_DD584E66F5D339D3_1* _RoundInfo_k__BackingField; // 0x38
		::RPG::Client::ChimeraDuelGameInfo* _GameInfo_k__BackingField; // 0x40
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _RequestingStartGame; // 0x48
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_819*>* _SendPacketProxies; // 0x50
		::RPG::Client::ChimeraDuelTalkInfo* _TalkInfo_k__BackingField; // 0x58
		::RPG::Client::ChimeraDuelAchievementDataManager* _AchievementDataManager_k__BackingField; // 0x60
		::System::Collections::Generic::List_1<::Class_1_70D183D5F3B9F81F*>* _PendingSessionChanges; // 0x68
		::Class_1_7D90E35D57A0C529* _FriendPvpInfo_k__BackingField; // 0x70
		::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* _NextChallengeBattle_k__BackingField; // 0x78
		::System::Boolean _IsRequestingGetData; // 0x80
		::System::Boolean _IsAnticipatingSessionChanges; // 0x81

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_819*>* get_SendPacketProxies()
		{
			return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_819*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_SENDPACKETPROXIES_OFFSET))(this);
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

		::System::Void SendEndRoundBattleStageRequest(::Enum_3_DB663931210BBC27_26 a1, ::Class_1_C563E5E77DCDB6EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_26, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SENDENDROUNDBATTLESTAGEREQUEST_OFFSET))(this, a1, a2);
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

		::Class_1_7D90E35D57A0C529* get_FriendPvpInfo()
		{
			return ((::Class_1_7D90E35D57A0C529*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_GET_FRIENDPVPINFO_OFFSET))(this);
		}

		::System::Void set_FriendPvpInfo(::Class_1_7D90E35D57A0C529* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D90E35D57A0C529*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMODULE_SET_FRIENDPVPINFO_OFFSET))(this, a1);
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
	};
}
