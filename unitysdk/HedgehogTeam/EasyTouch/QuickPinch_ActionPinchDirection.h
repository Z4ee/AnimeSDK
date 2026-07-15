#pragma once
#include "unitysdk/unitysdk.h"

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickPinch_ActionPinchDirection_TypeDefinitionIndex = 38112;

	enum class QuickPinch_ActionPinchDirection : ::System::Int32
	{
		All = 0,
		PinchIn = 1,
		PinchOut = 2,
	};
}
