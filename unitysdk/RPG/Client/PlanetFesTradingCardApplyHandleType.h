#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardApplyHandleType_TypeDefinitionIndex = 63625;

	enum class PlanetFesTradingCardApplyHandleType : ::System::Int32
	{
		Review = 0,
		Free = 1,
		None = 2,
	};
}
