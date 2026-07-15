#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournVariantType_TypeDefinitionIndex = 10268;

	enum class RogueTournVariantType : ::System::Int32
	{
		None = 0,
		BattleDouble = 302,
		BattleTriple = 303,
		BattlePumanDouble = 305,
		BattlePumanTriple = 306,
		EncounterSingle = 401,
		EncounterDouble = 402,
		EventNone = 500,
		EventSingle = 501,
		EventDouble = 502,
		EventTriple = 503,
		CoinNormal = 601,
		CoinEnhanced = 602,
		RewardSingle = 801,
		RewardDouble = 802,
		HiddenMiracleCompose = 1201,
		HiddenSlotMachine = 1202,
		HiddenFortuneWheel = 1203,
		HiddenChest = 1204,
	};
}
