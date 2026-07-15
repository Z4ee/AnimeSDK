#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFPlayerAnim_TypeDefinitionIndex = 40262;

	enum class TRFPlayerAnim : ::System::Int32
	{
		Idle = 0,
		Appear = 1,
		Move = 2,
		Crash = 3,
		Climb = 4,
		Disappear = 5,
		GroundDeath = 6,
	};
}
