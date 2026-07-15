#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int GarbageBinState_TypeDefinitionIndex = 40895;

	enum class GarbageBinState : ::System::Int32
	{
		None = 0,
		Idle = 1,
		Stun = 2,
		Roll = 3,
		StopRoll = 4,
	};
}
