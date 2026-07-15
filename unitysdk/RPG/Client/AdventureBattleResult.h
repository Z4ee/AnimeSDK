#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureBattleResult_TypeDefinitionIndex = 57449;

	enum class AdventureBattleResult : ::System::Int32
	{
		None = 0,
		Win = 1,
		Lose = 2,
		ManualExit = 3,
	};
}
