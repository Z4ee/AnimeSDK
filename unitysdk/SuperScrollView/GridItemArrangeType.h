#pragma once
#include "unitysdk/unitysdk.h"

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemArrangeType_TypeDefinitionIndex = 45839;

	enum class GridItemArrangeType : ::System::Int32
	{
		TopLeftToBottomRight = 0,
		BottomLeftToTopRight = 1,
		TopRightToBottomLeft = 2,
		BottomRightToTopLeft = 3,
	};
}
