#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelSettleReason.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelBattlePageViewModel_TeamViewModel; }

#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9392470)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0x9392D20)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ENEMYREASON_OFFSET UNITYSDK_OFFSET(0x9392D80)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0x9392D40)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ISMASTER_OFFSET UNITYSDK_OFFSET(0x9392DA0)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_REASON_OFFSET UNITYSDK_OFFSET(0x9392D60)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ALLYTEAM_OFFSET UNITYSDK_OFFSET(0x9392D30)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ENEMYREASON_OFFSET UNITYSDK_OFFSET(0x9392D90)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ENEMYTEAM_OFFSET UNITYSDK_OFFSET(0x9392D50)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ISMASTER_OFFSET UNITYSDK_OFFSET(0x9392DB0)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_REASON_OFFSET UNITYSDK_OFFSET(0x9392D70)
#define RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9392DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChallengeSettlementData_TypeDefinitionIndex = 51367;

	class ChimeraDuelChallengeSettlementData : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* _EnemyTeam_k__BackingField; // 0x10
		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* _AllyTeam_k__BackingField; // 0x18
		::RPG::Client::LittleGame::ChimeraDuelSettleReason _Reason_k__BackingField; // 0x20
		::RPG::Client::LittleGame::ChimeraDuelSettleReason _EnemyReason_k__BackingField; // 0x24
		::System::Boolean _IsMaster_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* get_AllyTeam()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ALLYTEAM_OFFSET))(this);
		}

		::System::Void set_AllyTeam(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ALLYTEAM_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* get_EnemyTeam()
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ENEMYTEAM_OFFSET))(this);
		}

		::System::Void set_EnemyTeam(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ENEMYTEAM_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::ChimeraDuelSettleReason get_Reason()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::RPG::Client::LittleGame::ChimeraDuelSettleReason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_REASON_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::ChimeraDuelSettleReason get_EnemyReason()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ENEMYREASON_OFFSET))(this);
		}

		::System::Void set_EnemyReason(::RPG::Client::LittleGame::ChimeraDuelSettleReason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuelSettleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ENEMYREASON_OFFSET))(this, value);
		}

		::System::Boolean get_IsMaster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_GET_ISMASTER_OFFSET))(this);
		}

		::System::Void set_IsMaster(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_SET_ISMASTER_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelChallengeSettlementData* Create(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* allyTeam, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* enemyTeam, ::RPG::Client::LittleGame::ChimeraDuelSettleReason reason, ::System::Boolean isMaster)
		{
			return ((::RPG::Client::ChimeraDuelChallengeSettlementData*(*)(::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*, ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*, ::RPG::Client::LittleGame::ChimeraDuelSettleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHALLENGESETTLEMENTDATA_CREATE_OFFSET))(allyTeam, enemyTeam, reason, isMaster);
		}
	};
}
