#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 11150;

	enum class GridDir : ::System::Int32
	{
		Left = 2,
		Down = 1,
		None = -1,
		Up = 0,
		Right = 3,
		All = 4,
		Transfer = 99,
	};
}
