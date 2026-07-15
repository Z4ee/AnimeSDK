#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateConnection_TransitionTiming_TypeDefinitionIndex = 67776;

	enum class SignalAnimationStateConnection_TransitionTiming : ::System::Int32
	{
		Immediate = 0,
		AfterAnimation = 1,
		AfterAnimationWithCondition = 2,
	};
}
