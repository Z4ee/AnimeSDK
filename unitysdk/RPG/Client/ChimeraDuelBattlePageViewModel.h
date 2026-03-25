#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C563E5E77DCDB6EB;
namespace RPG::Client { class ChimeraDuelBattlePageViewModel_GameViewModel; }
namespace RPG::Client { class ChimeraDuelBattlePageViewModel_TeamViewModel; }
namespace RPG::Client { class ChimeraDuelGameSession; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class ChimeraDuelTools_ShowcaseBattleSetup; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x938F700)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0x938F690)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0x938F6B0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_GAME_OFFSET UNITYSDK_OFFSET(0x938F670)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_SETTLEHANDLER_OFFSET UNITYSDK_OFFSET(0x938F6D0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0x938F6A0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0x938F6C0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_GAME_OFFSET UNITYSDK_OFFSET(0x938F680)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_SETTLEHANDLER_OFFSET UNITYSDK_OFFSET(0x938F6E0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x938F990)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORSESSIONBATTLE_OFFSET UNITYSDK_OFFSET(0x938FE10)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORSHOWCASEBATTLE_OFFSET UNITYSDK_OFFSET(0x938FBB0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x938F6F0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__REPORTCHIMERADUELCHALLENGEBATTLESETTLE_OFFSET UNITYSDK_OFFSET(0x93918B0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__REPORTCHIMERADUELCHALLENGEBATTLESTART_OFFSET UNITYSDK_OFFSET(0x9390DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelBattlePageViewModel_TypeDefinitionIndex = 51466;

	class ChimeraDuelBattlePageViewModel : public ::System::Object
	{
	public:
		::System::Action_1<::Class_1_C563E5E77DCDB6EB*>* _SettleHandler_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelBattlePageViewModel_GameViewModel* _Game_k__BackingField; // 0x18
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* _AllyTeam_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* _EnemyTeam_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelBattlePageViewModel_GameViewModel* get_Game()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_GameViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_GAME_OFFSET))(this);
		}

		::System::Void set_Game(::RPG::Client::ChimeraDuelBattlePageViewModel_GameViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel_GameViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_GAME_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* get_AllyTeam()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_ALLYTEAM_OFFSET))(this);
		}

		::System::Void set_AllyTeam(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_ALLYTEAM_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* get_EnemyTeam()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_ENEMYTEAM_OFFSET))(this);
		}

		::System::Void set_EnemyTeam(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_ENEMYTEAM_OFFSET))(this, value);
		}

		::System::Action_1<::Class_1_C563E5E77DCDB6EB*>* get_SettleHandler()
		{
			return ((::System::Action_1<::Class_1_C563E5E77DCDB6EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_GET_SETTLEHANDLER_OFFSET))(this);
		}

		::System::Void set_SettleHandler(::System::Action_1<::Class_1_C563E5E77DCDB6EB*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_C563E5E77DCDB6EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_SET_SETTLEHANDLER_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel* Create()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_CREATE_OFFSET))();
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel* _CreateForSessionBattle(::RPG::Client::ChimeraDuelGameSession* session)
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel*(*)(::RPG::Client::ChimeraDuelGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORSESSIONBATTLE_OFFSET))(session);
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel* _CreateForChallengeBattle(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info)
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel*(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORCHALLENGEBATTLE_OFFSET))(info);
		}

		static ::System::Void _ReportChimeraDuelChallengeBattleStart(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info)
		{
			return ((::System::Void(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__REPORTCHIMERADUELCHALLENGEBATTLESTART_OFFSET))(info);
		}

		static ::System::Void _ReportChimeraDuelChallengeBattleSettle(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info, ::Class_1_C563E5E77DCDB6EB* settleInfo)
		{
			return ((::System::Void(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*, ::Class_1_C563E5E77DCDB6EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__REPORTCHIMERADUELCHALLENGEBATTLESETTLE_OFFSET))(info, settleInfo);
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel* _CreateForShowcaseBattle(::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup* setup)
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel*(*)(::RPG::Client::ChimeraDuelTools_ShowcaseBattleSetup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL__CREATEFORSHOWCASEBATTLE_OFFSET))(setup);
		}
	};
}
