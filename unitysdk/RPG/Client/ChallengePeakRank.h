#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakRank_TypeDefinitionIndex = 60371;

	enum class ChallengePeakRank : ::System::Int32
	{
		None = 0,
		Bronze = 1,
		Silver = 2,
		Gold = 3,
		ColorMedal = 4,
	};
}
