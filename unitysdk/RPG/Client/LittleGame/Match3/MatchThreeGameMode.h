#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int MatchThreeGameMode_TypeDefinitionIndex = 40462;

	enum class MatchThreeGameMode : ::System::Int32
	{
		PVE = 0,
		PVP = 1,
		PVE_1V1 = 2,
		PVP_1V1 = 3,
		PVP_Royale = 4,
	};
}
