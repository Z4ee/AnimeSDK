#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ActionType_TypeDefinitionIndex = 39337;

	enum class ActionType : ::System::Int32
	{
		Flip = 0,
		PrepareFire = 1,
		Fire = 2,
	};
}
