#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourGamePhase_TypeDefinitionIndex = 59102;

	enum class ParkourGamePhase : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Entering = 2,
		Gaming = 3,
		Settling = 4,
		Settled = 5,
		Closing = 6,
		Closed = 7,
	};
}
