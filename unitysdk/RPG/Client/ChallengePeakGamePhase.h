#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakGamePhase_TypeDefinitionIndex = 60383;

	enum class ChallengePeakGamePhase : ::System::Int32
	{
		None = 0,
		Ready = 1,
		Starting = 2,
		Gaming = 3,
		Settled = 4,
		Closing = 5,
		Closed = 6,
	};
}
