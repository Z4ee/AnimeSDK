#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	inline static constexpr unsigned int CakeRaceGameState_TypeDefinitionIndex = 72526;

	enum class CakeRaceGameState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Start = 2,
		End = 3,
	};
}
