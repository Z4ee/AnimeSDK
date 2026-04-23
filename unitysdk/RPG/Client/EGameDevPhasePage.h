#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EGameDevPhasePage_TypeDefinitionIndex = 56368;

	enum class EGameDevPhasePage : ::System::Int32
	{
		Main = 0,
		Maze = 1,
	};
}
