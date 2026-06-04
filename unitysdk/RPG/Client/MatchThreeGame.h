#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_D828E592C9D2FCC9.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_02098A44CBBFEEE1_1;
class Class_1_1CBA230307F9C289_25;
class Class_1_3AD2528CD53B1639_5;
class Class_1_3AD2528CD53B1639_6;
class Class_1_4BC858D7C27E10ED_24;
class Class_1_4BC858D7C27E10ED_26;
class Class_1_4BC858D7C27E10ED_27;
class Class_1_4C75491B780B94AA;
class Class_1_A16A135FC5A0DDB9_2;
class Class_1_C30510A2D20EA22C;
class Class_1_C9DFE5EE7107C629_8;
class Class_1_F3CA30716D4FAF92_11;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class IMatchThreeScore; }
namespace RPG::Client { class MatchThreeEnvironmentData; }
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace RPG::Client { class MatchThreeV2LevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEGAME_ADDGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xBF7C030)
#define RPG_CLIENT_MATCHTHREEGAME_ADDINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xBF7C080)
#define RPG_CLIENT_MATCHTHREEGAME_CHANGEENEMY_OFFSET UNITYSDK_OFFSET(0xBF7BA20)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0xBF7B370)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0xBF76B00)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVEGAME_OFFSET UNITYSDK_OFFSET(0xBF7A2D0)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVPGAME_OFFSET UNITYSDK_OFFSET(0xBF7AE10)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEROYALEGAME_OFFSET UNITYSDK_OFFSET(0xBF78C70)
#define RPG_CLIENT_MATCHTHREEGAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF7B120)
#define RPG_CLIENT_MATCHTHREEGAME_GETALLOPPONENTS_OFFSET UNITYSDK_OFFSET(0xBF7C120)
#define RPG_CLIENT_MATCHTHREEGAME_GETBASICDAMAGE_OFFSET UNITYSDK_OFFSET(0xBF7BB40)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0xBF7BC60)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIPATH_OFFSET UNITYSDK_OFFSET(0xBF7BE90)
#define RPG_CLIENT_MATCHTHREEGAME_GETINPUTTIMEOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xBF7BFC0)
#define RPG_CLIENT_MATCHTHREEGAME_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xBF7BBD0)
#define RPG_CLIENT_MATCHTHREEGAME_GETNEXTTIPTEXTID_OFFSET UNITYSDK_OFFSET(0xBF7B720)
#define RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET UNITYSDK_OFFSET(0xBF79D00)
#define RPG_CLIENT_MATCHTHREEGAME_GETRANKRESULTSCORE_OFFSET UNITYSDK_OFFSET(0xBF7F690)
#define RPG_CLIENT_MATCHTHREEGAME_GETRESULTSCORES_OFFSET UNITYSDK_OFFSET(0xBF7D480)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0xBF7FD80)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0xBF78C30)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0xBF7A2B0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xBF78BD0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENEMY_OFFSET UNITYSDK_OFFSET(0xBF7FD50)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0xBF7FD70)
#define RPG_CLIENT_MATCHTHREEGAME_GET_FINALRANK_OFFSET UNITYSDK_OFFSET(0xBF80400)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0xBF80730)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF7FCC0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0xBF7FCE0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0xBF78C50)
#define RPG_CLIENT_MATCHTHREEGAME_GET_IS1V1GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF801E0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBIRDSKILLDISABLED_OFFSET UNITYSDK_OFFSET(0xBF80670)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBOARDIDLE_OFFSET UNITYSDK_OFFSET(0xBF80130)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISLOSE_OFFSET UNITYSDK_OFFSET(0xBF7FEF0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISOUTOFSTEP_OFFSET UNITYSDK_OFFSET(0xBF80190)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1ENEMYGIVEUP_OFFSET UNITYSDK_OFFSET(0xBF80340)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1GIVEUP_OFFSET UNITYSDK_OFFSET(0xBF802E0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xBF800F0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF80230)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGIVEUP_OFFSET UNITYSDK_OFFSET(0xBF80280)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xBF800D0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALEGIVEUP_OFFSET UNITYSDK_OFFSET(0xBF803A0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0xBF80110)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISROYALEGAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF79DB0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISTIE_OFFSET UNITYSDK_OFFSET(0xBF80010)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0xBF7FDD0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF80710)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xBF7FD90)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0xBF78C10)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0xBF7FDB0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_RESULTSTATICDATA_OFFSET UNITYSDK_OFFSET(0xBF804C0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_SELF_OFFSET UNITYSDK_OFFSET(0xBF7FD30)
#define RPG_CLIENT_MATCHTHREEGAME_GET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0xBF78BF0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF78BB0)
#define RPG_CLIENT_MATCHTHREEGAME_HASINPUTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0xBF7BF20)
#define RPG_CLIENT_MATCHTHREEGAME_INITALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0xBF7AA60)
#define RPG_CLIENT_MATCHTHREEGAME_INITGAMEESCINSTANCE_OFFSET UNITYSDK_OFFSET(0xBF7B840)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET UNITYSDK_OFFSET(0xBF77C50)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET UNITYSDK_OFFSET(0xBF78D00)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET UNITYSDK_OFFSET(0xBF7C300)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_OFFSET UNITYSDK_OFFSET(0xBF76DB0)
#define RPG_CLIENT_MATCHTHREEGAME_INITPVEPLAYERS_OFFSET UNITYSDK_OFFSET(0xBF771A0)
#define RPG_CLIENT_MATCHTHREEGAME_INITROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0xBF77B60)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET UNITYSDK_OFFSET(0xBF793D0)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET UNITYSDK_OFFSET(0xBF792C0)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xBF7B320)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0xBF7C0D0)
#define RPG_CLIENT_MATCHTHREEGAME_SAVEGAMERESULT_OFFSET UNITYSDK_OFFSET(0xBF7B800)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0xBF78C40)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0xBF7A2C0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0xBF78BE0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_ENEMY_OFFSET UNITYSDK_OFFSET(0xBF7FD60)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0xBF80740)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xBF7FCD0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0xBF78C60)
#define RPG_CLIENT_MATCHTHREEGAME_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF80720)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0xBF7FDA0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0xBF78C20)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0xBF7FDC0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_SELF_OFFSET UNITYSDK_OFFSET(0xBF7FD40)
#define RPG_CLIENT_MATCHTHREEGAME_SET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0xBF78C00)
#define RPG_CLIENT_MATCHTHREEGAME_SET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0xBF78BC0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0xBF798F0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET UNITYSDK_OFFSET(0xBF79250)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET UNITYSDK_OFFSET(0xBF794E0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET UNITYSDK_OFFSET(0xBF7C950)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0xBF783E0)
#define RPG_CLIENT_MATCHTHREEGAME__CREATESCORELIST_OFFSET UNITYSDK_OFFSET(0xBF7D710)
#define RPG_CLIENT_MATCHTHREEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0xBF76CE0)
#define RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET UNITYSDK_OFFSET(0xBF7D220)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVP1V1SCOREDATA_OFFSET UNITYSDK_OFFSET(0xBF7E460)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPROYALESCOREDATA_OFFSET UNITYSDK_OFFSET(0xBF7ED50)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPSCOREDATA_OFFSET UNITYSDK_OFFSET(0xBF7D990)
#define RPG_CLIENT_MATCHTHREEGAME__ONBIRDSKILLDISABLECHANGE_OFFSET UNITYSDK_OFFSET(0xBF80860)
#define RPG_CLIENT_MATCHTHREEGAME__ONGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0xBF80750)
#define RPG_CLIENT_MATCHTHREEGAME__ONINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xBF80800)
#define RPG_CLIENT_MATCHTHREEGAME__REFRESHLOCALRANKDATA_OFFSET UNITYSDK_OFFSET(0xBF79DC0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0xBF7CCE0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET UNITYSDK_OFFSET(0xBF786B0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0xBF79BB0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0xBF797C0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0xBF7D1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame_TypeDefinitionIndex = 61635;

	class MatchThreeGame : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* _OnGameStateChangeHandler; // 0x10
		::RPG::Client::MatchThreeGameOpponent* _Enemy_k__BackingField; // 0x18
		::System::String* EnvConfigPathV2; // 0x20
		::Class_1_C30510A2D20EA22C* _MatchThreeTipManager; // 0x28
		::RPG::Client::MatchThreeGameOpponent* _Self_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _AllEnvironments_k__BackingField; // 0x38
		::System::Action* _OnInputStateChangeHandler; // 0x40
		::Class_1_4C75491B780B94AA* _GameEcsInstance_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _Environments_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* _Opponents; // 0x58
		::RPG::Client::MatchThreeLevelData* _LevelData_k__BackingField; // 0x60
		::RPG::Client::MatchThreeV2LevelData* _V2LevelData_k__BackingField; // 0x68
		::System::UInt32 EnemyAILevel; // 0x70
		::System::UInt32 _StepPerSection_k__BackingField; // 0x74
		::System::UInt32 _MaxStep_k__BackingField; // 0x78
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstRoleType; // 0x7C
		::System::UInt32 _CurrentRound_k__BackingField; // 0x80
		::System::Single _InputTimePerSection_k__BackingField; // 0x84
		::System::UInt32 _CurrentSection_k__BackingField; // 0x88
		::RPG::Client::LittleGame::Match3::OpponentRole _CurrentActionRole_k__BackingField; // 0x8C
		::System::UInt32 _MaxSection_k__BackingField; // 0x90
		::System::UInt32 RandomSeed; // 0x94
		::RPG::Client::LittleGame::Match3::MatchThreeGameMode _GameMode_k__BackingField; // 0x98
		::System::UInt32 _MaxHp_k__BackingField; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeGame* CreateOneOnOneGame(::RPG::Client::LittleGame::Match3::MatchThreeGameMode a1)
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::RPG::Client::LittleGame::Match3::MatchThreeGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEONEONONEGAME_OFFSET))(a1);
		}

		::System::Void InitPlayers(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a3, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitPvePlayers(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPVEPLAYERS_OFFSET))(this, a1, a2);
		}

		::System::Void InitRoyalePlayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITROYALEPLAYER_OFFSET))(this, a1);
		}

		::System::Void InitPlayers_1(::Class_1_4BC858D7C27E10ED_26* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET))(this, a1);
		}

		::System::Void UpdateAllPlayers(::Class_1_A16A135FC5A0DDB9_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET))(this, a1);
		}

		::System::Void _UpdatePlayer(::Class_1_3AD2528CD53B1639_5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeV2LevelData* get_V2LevelData()
		{
			return ((::RPG::Client::MatchThreeV2LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_V2LEVELDATA_OFFSET))(this);
		}

		::System::Void set_V2LevelData(::RPG::Client::MatchThreeV2LevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_V2LEVELDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Void set_CurrentSection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTSECTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_StepPerSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_STEPPERSECTION_OFFSET))(this);
		}

		::System::Void set_StepPerSection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_STEPPERSECTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXSECTION_OFFSET))(this);
		}

		::System::Void set_MaxSection(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXSECTION_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Match3::OpponentRole get_CurrentActionRole()
		{
			return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTACTIONROLE_OFFSET))(this);
		}

		::System::Void set_CurrentActionRole(::RPG::Client::LittleGame::Match3::OpponentRole a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTACTIONROLE_OFFSET))(this, a1);
		}

		::System::Single get_InputTimePerSection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_INPUTTIMEPERSECTION_OFFSET))(this);
		}

		::System::Void set_InputTimePerSection(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_INPUTTIMEPERSECTION_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeGame* CreateRoyaleGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEROYALEGAME_OFFSET))();
		}

		::System::Void InitPlayers_2(::Class_1_4BC858D7C27E10ED_27* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET))(this, a1);
		}

		::System::Void UpdateAllPlayers_1(::Class_1_3AD2528CD53B1639_6* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET))(this, a1);
		}

		::System::Void UpdateAllPlayers_2(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshPrevLiveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET))(this);
		}

		::System::Void UpdateAllPlayerRealTimeData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_25*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET))(this, a1);
		}

		::System::Void _UpdateRoyalePlayerRealTimeData(::Class_1_1CBA230307F9C289_25* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* GetProcessedOpponentsForRoyale()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET))(this);
		}

		::System::Void _UpdateRoyalePlayer(::Class_1_1CBA230307F9C289_25* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshLocalRankData(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__REFRESHLOCALRANKDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTROUND_OFFSET))(this);
		}

		::System::Void set_CurrentRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTROUND_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeGame* CreatePVEGame(::RPG::Client::MatchThreeLevelData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::RPG::Client::MatchThreeLevelData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEPVEGAME_OFFSET))(a1, a2);
		}

		static ::RPG::Client::MatchThreeGame* CreatePVPGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEPVPGAME_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateEnvironment(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEENVIRONMENT_OFFSET))(this, a1);
		}

		::System::Void InitAllEnvironments(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITALLENVIRONMENTS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetNextTipTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETNEXTTIPTEXTID_OFFSET))(this);
		}

		::System::Void SaveGameResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SAVEGAMERESULT_OFFSET))(this);
		}

		::System::Void InitGameEscInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITGAMEESCINSTANCE_OFFSET))(this);
		}

		::System::Void ChangeEnemy(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CHANGEENEMY_OFFSET))(this, a1);
		}

		::System::UInt32 GetBasicDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETBASICDAMAGE_OFFSET))(this);
		}

		::System::UInt32 GetMaxDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETMAXDAMAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETEMOJIIDS_OFFSET))(this);
		}

		::System::String* GetEmojiPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETEMOJIPATH_OFFSET))(this, a1);
		}

		::System::Boolean HasInputTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_HASINPUTTIMELIMIT_OFFSET))(this);
		}

		::System::UInt64 GetInputTimeoutTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETINPUTTIMEOUTTIMESTAMP_OFFSET))(this);
		}

		::System::Void AddGameStateChangeHandler(::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_ADDGAMESTATECHANGEHANDLER_OFFSET))(this, a1);
		}

		::System::Void RemoveGameStateChangeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REMOVEGAMESTATECHANGEHANDLER_OFFSET))(this);
		}

		::System::Void AddInputStateChangeHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_ADDINPUTSTATECHANGEHANDLER_OFFSET))(this, a1);
		}

		::System::Void RemoveInputStateChangeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REMOVEINPUTSTATECHANGEHANDLER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* GetAllOpponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETALLOPPONENTS_OFFSET))(this);
		}

		::System::Void InitPlayers_3(::Class_1_4BC858D7C27E10ED_24* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_24*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET))(this, a1);
		}

		::System::Void UpdateAllPlayers_3(::Class_1_02098A44CBBFEEE1_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET))(this, a1);
		}

		::System::Void RefreshPreviousRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET))(this);
		}

		::System::Void _UpdatePlayer_1(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_F3CA30716D4FAF92_11* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_F3CA30716D4FAF92_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _UpdateSelfPlayer(::Class_1_C9DFE5EE7107C629_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* GetResultScores()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETRESULTSCORES_OFFSET))(this);
		}

		::RPG::Client::IMatchThreeScore* GetRankResultScore()
		{
			return ((::RPG::Client::IMatchThreeScore*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETRANKRESULTSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVPScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVPSCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVP1V1ScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVP1V1SCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVPRoyaleScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVPROYALESCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _CreateScoreList(::System::Nullable_1<::Struct_2_D828E592C9D2FCC9> a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D828E592C9D2FCC9>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__CREATESCORELIST_OFFSET))(this, a1);
		}

		::Class_1_F3CA30716D4FAF92_11* _FindEnemyData(::Class_1_02098A44CBBFEEE1_1* a1)
		{
			return ((::Class_1_F3CA30716D4FAF92_11*(*)(::PVOID, ::Class_1_02098A44CBBFEEE1_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Match3::MatchThreeGameMode get_GameMode()
		{
			return ((::RPG::Client::LittleGame::Match3::MatchThreeGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void set_GameMode(::RPG::Client::LittleGame::Match3::MatchThreeGameMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::MatchThreeGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_GAMEMODE_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Match3::Match3GameState get_GameState()
		{
			return ((::RPG::Client::LittleGame::Match3::Match3GameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMESTATE_OFFSET))(this);
		}

		::RPG::Client::MatchThreeGameOpponent* get_Self()
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_SELF_OFFSET))(this);
		}

		::System::Void set_Self(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_SELF_OFFSET))(this, a1);
		}

		::RPG::Client::MatchThreeGameOpponent* get_Enemy()
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ENEMY_OFFSET))(this);
		}

		::System::Void set_Enemy(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_ENEMY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* get_Environments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ENVIRONMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* get_AllEnvironments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ALLENVIRONMENTS_OFFSET))(this);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXHP_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXSTEP_OFFSET))(this);
		}

		::System::Void set_MaxStep(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXSTEP_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISVICTORY_OFFSET))(this);
		}

		::System::Boolean get_IsLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsTie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISTIE_OFFSET))(this);
		}

		::System::Boolean get_IsPvpNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPNETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsPvp1v1NetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsPvpRoyaleNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsBoardIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISBOARDIDLE_OFFSET))(this);
		}

		::System::Boolean get_IsOutOfStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISOUTOFSTEP_OFFSET))(this);
		}

		::System::Boolean get_Is1v1GameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_IS1V1GAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPvPGameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsRoyaleGameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISROYALEGAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPvPGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvP1v1GiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1GIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvP1v1EnemyGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1ENEMYGIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvpRoyaleGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALEGIVEUP_OFFSET))(this);
		}

		::System::UInt32 get_FinalRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_FINALRANK_OFFSET))(this);
		}

		::Struct_2_52A902145F5BE51F get_ResultStaticData()
		{
			return ((::Struct_2_52A902145F5BE51F(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_RESULTSTATICDATA_OFFSET))(this);
		}

		::System::Boolean get_IsBirdSkillDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISBIRDSKILLDISABLED_OFFSET))(this);
		}

		::RPG::Client::MatchThreeLevelData* get_LevelData()
		{
			return ((::RPG::Client::MatchThreeLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::RPG::Client::MatchThreeLevelData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_LEVELDATA_OFFSET))(this, a1);
		}

		::Class_1_4C75491B780B94AA* get_GameEcsInstance()
		{
			return ((::Class_1_4C75491B780B94AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameEcsInstance(::Class_1_4C75491B780B94AA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C75491B780B94AA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET))(this, a1);
		}

		::System::Void _OnGameStateChange(::RPG::Client::LittleGame::Match3::Match3GameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONGAMESTATECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnInputStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONINPUTSTATECHANGE_OFFSET))(this);
		}

		::System::Void _OnBirdSkillDisableChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONBIRDSKILLDISABLECHANGE_OFFSET))(this);
		}
	};
}
