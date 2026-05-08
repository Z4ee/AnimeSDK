#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeaterMode_TypeDefinitionIndex = 27693;

	enum class Repeater_RepeaterMode : ::System::Int32
	{
		RepeatForever = 2,
		RepeatUntil = 1,
		RepeatTimes = 0,
	};
}
