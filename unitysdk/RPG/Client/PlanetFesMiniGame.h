#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesGameType.h"
#include "unitysdk/RPG/GameCore/PlanetFesMiniGameRewardType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_913;
namespace RPG::Client { class PlanetFesMiniGameBetUp; }
namespace RPG::Client { class PlanetFesMiniGameReward; }
namespace RPG::Client { class PlanetFesModule; }
namespace RPG::GameCore { class PlanetFesGameConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESMINIGAME_CREATE_OFFSET UNITYSDK_OFFSET(0xDB542E0)
#define RPG_CLIENT_PLANETFESMINIGAME_GETORDER_OFFSET UNITYSDK_OFFSET(0xDB54F30)
#define RPG_CLIENT_PLANETFESMINIGAME_GETREWARDS_OFFSET UNITYSDK_OFFSET(0xDB54690)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_AGENT_OFFSET UNITYSDK_OFFSET(0xDB54FD0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_BETUPS_OFFSET UNITYSDK_OFFSET(0xDB54FB0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_COINITEMID_OFFSET UNITYSDK_OFFSET(0xDB54FF0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0xDB54D70)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_LANDID_OFFSET UNITYSDK_OFFSET(0xDB51450)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_ORDER_OFFSET UNITYSDK_OFFSET(0xDB54B30)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDPOOLLOOPLENGTH_OFFSET UNITYSDK_OFFSET(0xDB54F10)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDS_OFFSET UNITYSDK_OFFSET(0xDB54EC0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_REWARDTYPE_OFFSET UNITYSDK_OFFSET(0xDB54B80)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_ROW_OFFSET UNITYSDK_OFFSET(0xDB544C0)
#define RPG_CLIENT_PLANETFESMINIGAME_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDB54D50)
#define RPG_CLIENT_PLANETFESMINIGAME_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xDB550D0)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_AGENT_OFFSET UNITYSDK_OFFSET(0xDB54FE0)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_BETUPS_OFFSET UNITYSDK_OFFSET(0xDB54FC0)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_REWARDPOOLLOOPLENGTH_OFFSET UNITYSDK_OFFSET(0xDB54F20)
#define RPG_CLIENT_PLANETFESMINIGAME_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xDB54D60)
#define RPG_CLIENT_PLANETFESMINIGAME_STARTGAME_OFFSET UNITYSDK_OFFSET(0xDB54520)
#define RPG_CLIENT_PLANETFESMINIGAME__CTOR_OFFSET UNITYSDK_OFFSET(0xDB54360)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesMiniGame_TypeDefinitionIndex = 66637;

	class PlanetFesMiniGame : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_913* _Agent_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* _BetUps_k__BackingField; // 0x18
		::RPG::GameCore::PlanetFesGameType _Type_k__BackingField; // 0x20
		::System::UInt32 _RewardPoolLoopLength_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::GameCore::PlanetFesGameType a1, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* a2, ::Class_0_16E4307DCC419505_913* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesGameType, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*, ::Class_0_16E4307DCC419505_913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::PlanetFesMiniGame* Create(::RPG::GameCore::PlanetFesGameType a1, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* a2, ::Class_0_16E4307DCC419505_913* a3)
		{
			return ((::RPG::Client::PlanetFesMiniGame*(*)(::RPG::GameCore::PlanetFesGameType, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*, ::Class_0_16E4307DCC419505_913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void StartGame(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_STARTGAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>* GetRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GETREWARDS_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesGameType get_Type()
		{
			return ((::RPG::GameCore::PlanetFesGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::GameCore::PlanetFesGameType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_TYPE_OFFSET))(this, a1);
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

		::System::Void set_RewardPoolLoopLength(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_REWARDPOOLLOOPLENGTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_ORDER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* get_BetUps()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_BETUPS_OFFSET))(this);
		}

		::System::Void set_BetUps(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesMiniGameBetUp*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_BETUPS_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_913* get_Agent()
		{
			return ((::Class_0_16E4307DCC419505_913*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_GET_AGENT_OFFSET))(this);
		}

		::System::Void set_Agent(::Class_0_16E4307DCC419505_913* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMINIGAME_SET_AGENT_OFFSET))(this, a1);
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
