#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController_CoinAmount_TypeDefinitionIndex = 63533;

	enum class PlanetFesFloatingController_CoinAmount : ::System::Int32
	{
		Few = 0,
		Lots = 1,
		Large = 2,
		Bonus = 3,
		BonusFinal = 4,
		DoubleLarge = 5,
	};
}
