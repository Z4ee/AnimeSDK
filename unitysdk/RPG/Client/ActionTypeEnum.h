#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActionTypeEnum_TypeDefinitionIndex = 49703;

	enum class ActionTypeEnum : ::System::Int32
	{
		Special = 0,
		Menu = 1,
		Battle = 2,
		Maze = 3,
	};
}
