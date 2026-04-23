#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/RPG/GameCore/PlanetFesMiniGameRewardType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_773;
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace RPG::Client { class PlanetFesMiniGameReward; }
namespace RPG::Client { class PlanetFesModule; }
namespace RPG::GameCore { class PlanetFesGameConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAME_CREATE_OFFSET UNITYSDK_OFFSET(0xACC43D0)
#define RPG_CLIENT_PLANETFESMINIGAME_GETORDER_OFFSET UNITYSDK_OFFSET(0xACC4D20)
#define RPG_CLIENT_PLANETFESMINIGAME_GETREWARDS_OFFSET UNITYSDK_OFFSET(0xACC46C0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_AGENT_OFFSET UNITYSDK_OFFSET(0xACC4DC0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_BETUPS_OFFSET UNITYSDK_OFFSET(0xACC4DA0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_COINITEMID_OFFSET UNITYSDK_OFFSET(0xACC4DE0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xACC4C10)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_LANDID_OFFSET UNITYSDK_OFFSET(0xACC1530)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xACC4A70)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDPOOLLOOPLENGTH_OFFSET UNITYSDK_OFFSET(0xACC4D00)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xACC4CF0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xACC4A80)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_ROW_OFFSET UNITYSDK_OFFSET(0xACC4540)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xACC4BF0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xACC4E40)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_AGENT_OFFSET UNITYSDK_OFFSET(0xACC4DD0)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_BETUPS_OFFSET UNITYSDK_OFFSET(0xACC4DB0)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_REWARDPOOLLOOPLENGTH_OFFSET UNITYSDK_OFFSET(0xACC4D10)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xACC4C00)
#define RPG_CLIENT_PLANETFESMINIGAME_STARTGAME_OFFSET UNITYSDK_OFFSET(0xACC45A0)
#define RPG_CLIENT_PLANETFESMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0xACC4450)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGame_TypeDefinitionIndex = 61362;

	class PlanetFesMiniGame : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* _BetUps_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_773* _Agent_k__BackingField; // 0x18
		::System::UInt32 _RewardPoolLoopLength_k__BackingField; // 0x20
		::RPG::GameCore::PlanetFesGameType _Type_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::GameCore::PlanetFesGameType type, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* betUps, ::Class_0_16E4307DCC419505_773* agent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesGameType, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME__CTOR_OFFSET))(this, type, betUps, agent);
		}

		static ::RPG::Client::PlanetFesMiniGame* Create(::RPG::GameCore::PlanetFesGameType type, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* betUps, ::Class_0_16E4307DCC419505_773* agent)
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::RPG::GameCore::PlanetFesGameType, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_CREATE_OFFSET))(type, betUps, agent);
		}

		::System::Void StartGame(::System::UInt32 ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_STARTGAME_OFFSET))(this, ratio);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>* GetRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GETREWARDS_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesGameType get_Type()
		{
			return ((::RPG::GameCore::PlanetFesGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::PlanetFesGameType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_FINISHCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesMiniGameRewardType get_RewardType()
		{
			return ((::RPG::GameCore::PlanetFesMiniGameRewardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>* get_Rewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDS_OFFSET))(this);
		}

		::System::UInt32 get_RewardPoolLoopLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDPOOLLOOPLENGTH_OFFSET))(this);
		}

		::System::Void set_RewardPoolLoopLength(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_REWARDPOOLLOOPLENGTH_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_ORDER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* get_BetUps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_BETUPS_OFFSET))(this);
		}

		::System::Void set_BetUps(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_BETUPS_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_773* get_Agent()
		{
			return ((::Class_0_16E4307DCC419505_773*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_AGENT_OFFSET))(this);
		}

		::System::Void set_Agent(::Class_0_16E4307DCC419505_773* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_773*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_AGENT_OFFSET))(this, value);
		}

		::System::UInt32 get_CoinItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_COINITEMID_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesGameConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PlanetFesGameConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_LandID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_LANDID_OFFSET))(this);
		}

		::RPG::Client::PlanetFesModule* get__Module()
		{
			return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET__MODULE_OFFSET))(this);
		}

		::System::UInt32 GetOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GETORDER_OFFSET))(this);
		}
	};
}
