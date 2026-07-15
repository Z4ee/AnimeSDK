#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_GestureType_TypeDefinitionIndex = 38174;

	enum class EasyTouch_GestureType : ::System::Int32
	{
		Tap = 0,
		Drag = 1,
		Swipe = 2,
		None = 3,
		LongTap = 4,
		Pinch = 5,
		Twist = 6,
		Cancel = 7,
		Acquisition = 8,
	};
}
