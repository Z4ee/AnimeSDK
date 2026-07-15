#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::PingPong
{
	inline static constexpr unsigned int GameState_TypeDefinitionIndex = 40424;

	enum class GameState : ::System::Int32
	{
		Awake = 0,
		Prepare = 1,
		WaitFireBall = 2,
		Playing = 3,
		Success = 4,
		Fail = 5,
		End = 6,
	};
}
