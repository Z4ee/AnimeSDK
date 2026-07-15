#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFMoveState_TypeDefinitionIndex = 40259;

	enum class TRFMoveState : ::System::Int32
	{
		Idle = 0,
		Moving = 1,
	};
}
