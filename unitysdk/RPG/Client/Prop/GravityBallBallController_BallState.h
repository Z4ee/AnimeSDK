#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallBallController_BallState_TypeDefinitionIndex = 74633;

	enum class GravityBallBallController_BallState : ::System::Int32
	{
		Controlling = 0,
		Falling = 1,
		Dragging = 2,
		Reached = 3,
	};
}
