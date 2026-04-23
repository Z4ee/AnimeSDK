#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
class Class_1_85AE2DC43E9AF910;
namespace RPG::Client { class ChimeraDuelGameSessionBattleTeam; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA008450)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_2_OFFSET UNITYSDK_OFFSET(0xA00B480)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_OFFSET UNITYSDK_OFFSET(0xA0081F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0086A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_EXPORTSETUP_OFFSET UNITYSDK_OFFSET(0xA00B910)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA00A1F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTERID_OFFSET UNITYSDK_OFFSET(0xA00A230)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYMASTER_OFFSET UNITYSDK_OFFSET(0xA00A270)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0xA00A3F0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYCHIMERAS_OFFSET UNITYSDK_OFFSET(0xA00A210)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTERID_OFFSET UNITYSDK_OFFSET(0xA00A250)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYMASTER_OFFSET UNITYSDK_OFFSET(0xA00A330)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xA00A410)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0xA00A400)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xA00A420)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEALLYTEAM_OFFSET UNITYSDK_OFFSET(0xA00A440)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEENEMYTEAM_OFFSET UNITYSDK_OFFSET(0xA00ABD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA00A430)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSessionBattle_TypeDefinitionIndex = 58323;

	class ChimeraDuelGameSessionBattle : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionBattleTeam* _AllyTeam_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelGameSessionBattleTeam* _EnemyTeam_k__BackingField; // 0x18

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

		::System::Void set_AllyTeam(::RPG::Client::ChimeraDuelGameSessionBattleTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ALLYTEAM_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionBattleTeam* get_EnemyTeam()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_GET_ENEMYTEAM_OFFSET))(this);
		}

		::System::Void set_EnemyTeam(::RPG::Client::ChimeraDuelGameSessionBattleTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_SET_ENEMYTEAM_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create(::Class_1_2135BD0826D34A80* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create_1(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_1_OFFSET))(info);
		}

		static ::RPG::Client::ChimeraDuelGameSessionBattle* Create_2(::Class_1_85AE2DC43E9AF910* setup)
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::Class_1_85AE2DC43E9AF910*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_CREATE_2_OFFSET))(setup);
		}

		::System::Void _CreateAllyTeam(::Class_1_2135BD0826D34A80* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEALLYTEAM_OFFSET))(this, serverData);
		}

		::System::Void _CreateEnemyTeam(::Class_1_2135BD0826D34A80* serverData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE__CREATEENEMYTEAM_OFFSET))(this, serverData);
		}

		::Class_1_85AE2DC43E9AF910* ExportSetup()
		{
			return ((::Class_1_85AE2DC43E9AF910*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_EXPORTSETUP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSIONBATTLE_DISPOSE_OFFSET))(this);
		}
	};
}
