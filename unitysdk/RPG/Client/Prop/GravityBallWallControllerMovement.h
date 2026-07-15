#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallWallControllerMovement_TypeDefinitionIndex = 74640;

	enum class GravityBallWallControllerMovement : ::System::Int32
	{
		None = 0,
		Forward = 1,
		Backward = 2,
	};
}
