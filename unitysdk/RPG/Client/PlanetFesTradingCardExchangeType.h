#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardExchangeType_TypeDefinitionIndex = 63621;

	enum class PlanetFesTradingCardExchangeType : ::System::Int32
	{
		Demand = 0,
		Present = 1,
		None = 2,
	};
}
