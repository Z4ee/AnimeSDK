#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickTwist_ActionRotationDirection_TypeDefinitionIndex = 38127;

	enum class QuickTwist_ActionRotationDirection : ::System::Int32
	{
		All = 0,
		Clockwise = 1,
		Counterclockwise = 2,
	};
}
