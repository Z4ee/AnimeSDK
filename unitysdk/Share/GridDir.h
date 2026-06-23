#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int GridDir_TypeDefinitionIndex = 11274;

	enum class GridDir : ::System::Int32
	{
		Transfer = 99,
		Left = 2,
		All = 4,
		Up = 0,
		None = -1,
		Down = 1,
		Right = 3,
	};
}
