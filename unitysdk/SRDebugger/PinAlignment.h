#pragma once
#include "unitysdk/unitysdk.h"

namespace SRDebugger
{
	inline static constexpr unsigned int PinAlignment_TypeDefinitionIndex = 36419;

	enum class PinAlignment : ::System::Int32
	{
		TopLeft = 0,
		TopRight = 1,
		BottomLeft = 2,
		BottomRight = 3,
		CenterLeft = 4,
		CenterRight = 5,
		TopCenter = 6,
		BottomCenter = 7,
	};
}
