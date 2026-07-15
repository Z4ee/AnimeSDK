#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int Match3PVE1v1GameResult_TypeDefinitionIndex = 40450;

	enum class Match3PVE1v1GameResult : ::System::Int32
	{
		Win = 0,
		Lose = 1,
	};
}
