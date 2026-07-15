#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int PlayerFlipState_TypeDefinitionIndex = 40172;

	enum class PlayerFlipState : ::System::Int32
	{
		Finish = 0,
		StartFlip = 1,
		NiceFlip = 2,
		FlipPause = 3,
		FlipResume = 4,
	};
}
