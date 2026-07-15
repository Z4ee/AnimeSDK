#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int TouchControlAnchor_TypeDefinitionIndex = 38730;

	enum class TouchControlAnchor : ::System::Int32
	{
		TopLeft = 0,
		CenterLeft = 1,
		BottomLeft = 2,
		TopCenter = 3,
		Center = 4,
		BottomCenter = 5,
		TopRight = 6,
		CenterRight = 7,
		BottomRight = 8,
	};
}
