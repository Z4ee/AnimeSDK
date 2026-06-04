#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EGameDevPhasePage_TypeDefinitionIndex = 57130;

	enum class EGameDevPhasePage : ::System::Int32
	{
		Main = 0,
		Maze = 1,
	};
}
