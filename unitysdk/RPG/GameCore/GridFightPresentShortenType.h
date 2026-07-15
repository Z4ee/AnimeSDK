#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPresentShortenType_TypeDefinitionIndex = 12928;

	enum class GridFightPresentShortenType : ::System::Int32
	{
		None = 0,
		Perfect = 1,
		Lose = 2,
	};
}
