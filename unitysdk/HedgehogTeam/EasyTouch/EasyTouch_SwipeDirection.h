#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_SwipeDirection_TypeDefinitionIndex = 38175;

	enum class EasyTouch_SwipeDirection : ::System::Int32
	{
		None = 0,
		Left = 1,
		Right = 2,
		Up = 3,
		Down = 4,
		UpLeft = 5,
		UpRight = 6,
		DownLeft = 7,
		DownRight = 8,
		Other = 9,
		All = 10,
	};
}
