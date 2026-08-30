#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	inline static constexpr unsigned int GameDayState_TypeDefinitionIndex = 77265;

	enum class GameDayState : ::System::Int32
	{
		Prepare = 0,
		Game = 1,
		PendingFinish = 2,
		Finish = 3,
	};
}
