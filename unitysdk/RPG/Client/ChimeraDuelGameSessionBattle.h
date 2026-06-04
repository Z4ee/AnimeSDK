#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
class Class_1_D3E9CB566496BBAE;
namespace RPG::Client { class ChimeraDuelGameSessionBattleTeam; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xB685750)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_2_OFFSET UNITYSDK_OFFSET(0xB688C10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_OFFSET UNITYSDK_OFFSET(0xB684C30)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6859E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_EXPORTSETUP_OFFSET UNITYSDK_OFFSET(0xB6890F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB687B90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTERID_OFFSET UNITYSDK_OFFSET(0xB687BD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTER_OFFSET UNITYSDK_OFFSET(0xB687C10)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0xB687E70)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xB687BB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTERID_OFFSET UNITYSDK_OFFSET(0xB687BF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTER_OFFSET UNITYSDK_OFFSET(0xB687D40)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xB687E90)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0xB687E80)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xB687EA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEALLYTEAM_OFFSET UNITYSDK_OFFSET(0xB687EC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xB6884E0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xB687EB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionBattle_TypeDefinitionIndex = 59253;

	class ChimeraDuelGameSessionBattle : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionBattleTeam* _EnemyTeam_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelGameSessionBattleTeam* _AllyTeam_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_AllyChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYCHIMERAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_EnemyChimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYCHIMERAS_OFFSET))(this);
		}

		::System::UInt32 get_AllyMasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTERID_OFFSET))(this);
		}

		::System::UInt32 get_EnemyMasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTERID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* get_AllyMaster()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTER_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* get_EnemyMaster()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTER_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameSessionBattleTeam* get_AllyTeam()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYTEAM_OFFSET))(this);
		}

		::System::Void set_AllyTeam(::RPG::Client::ChimeraDuelGameSessionBattleTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ALLYTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ChimeraDuelGameSessionBattleTeam* get_EnemyTeam()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYTEAM_OFFSET))(this);
		}

		::System::Void set_EnemyTeam(::RPG::Client::ChimeraDuelGameSessionBattleTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ENEMYTEAM_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create(::Class_1_2135BD0826D34A80* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create_1(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_1_OFFSET))(a1);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create_2(::Class_1_D3E9CB566496BBAE* a1)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::Class_1_D3E9CB566496BBAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_2_OFFSET))(a1);
		}

		::System::Void _CreateAllyTeam(::Class_1_2135BD0826D34A80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEALLYTEAM_OFFSET))(this, a1);
		}

		::System::Void _CreateEnemyTeam(::Class_1_2135BD0826D34A80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEENEMYTEAM_OFFSET))(this, a1);
		}

		::Class_1_D3E9CB566496BBAE* ExportSetup()
		{
			return ((::Class_1_D3E9CB566496BBAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_EXPORTSETUP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_DISPOSE_OFFSET))(this);
		}
	};
}
