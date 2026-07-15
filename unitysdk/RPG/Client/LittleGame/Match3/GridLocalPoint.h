#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int GridLocalPoint_TypeDefinitionIndex = 40454;

	enum class GridLocalPoint : ::System::Int32
	{
		Center = 0,
		UpperRight = 1,
	};
}
