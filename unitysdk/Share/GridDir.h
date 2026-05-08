#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 17738;

	enum class GridDir : ::System::Int32
	{
		Transfer = 99,
		Down = 1,
		All = 4,
		None = -1,
		Right = 3,
		Left = 2,
		Up = 0,
	};
}
