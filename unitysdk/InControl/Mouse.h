#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int Mouse_TypeDefinitionIndex = 38647;

	enum class Mouse : ::System::Int32
	{
		None = 0,
		LeftButton = 1,
		RightButton = 2,
		MiddleButton = 3,
		NegativeX = 4,
		PositiveX = 5,
		NegativeY = 6,
		PositiveY = 7,
		PositiveScrollWheel = 8,
		NegativeScrollWheel = 9,
		Button4 = 10,
		Button5 = 11,
		Button6 = 12,
		Button7 = 13,
		Button8 = 14,
		Button9 = 15,
	};
}
