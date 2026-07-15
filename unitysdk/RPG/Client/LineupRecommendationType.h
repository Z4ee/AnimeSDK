#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LineupRecommendationType_TypeDefinitionIndex = 65096;

	enum class LineupRecommendationType : ::System::Int32
	{
		None = 0,
		Challenge = 1,
		LocalLegend = 2,
		ChallengePeakNormal = 3,
		ChallengePeakBoss = 4,
		ChallengeTierce = 5,
	};
}
