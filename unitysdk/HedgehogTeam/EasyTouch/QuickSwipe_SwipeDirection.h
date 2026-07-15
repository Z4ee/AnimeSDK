#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickSwipe_SwipeDirection_TypeDefinitionIndex = 38116;

	enum class QuickSwipe_SwipeDirection : ::System::Int32
	{
		Vertical = 0,
		Horizontal = 1,
		DiagonalRight = 2,
		DiagonalLeft = 3,
		Up = 4,
		UpRight = 5,
		Right = 6,
		DownRight = 7,
		Down = 8,
		DownLeft = 9,
		Left = 10,
		UpLeft = 11,
		All = 12,
	};
}
