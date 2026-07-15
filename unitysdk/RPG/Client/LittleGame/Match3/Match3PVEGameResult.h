#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int Match3PVEGameResult_TypeDefinitionIndex = 40449;

	enum class Match3PVEGameResult : ::System::Int32
	{
		Win = 0,
		Lose = 1,
	};
}
