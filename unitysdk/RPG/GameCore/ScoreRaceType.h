#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoreRaceType_TypeDefinitionIndex = 12777;

	enum class ScoreRaceType : ::System::Int32
	{
		Unkown = 0,
		Score = 1,
		Special = 2,
	};
}
