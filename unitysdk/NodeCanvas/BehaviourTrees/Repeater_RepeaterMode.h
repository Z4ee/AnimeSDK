#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_RepeaterMode_TypeDefinitionIndex = 30181;

	enum class Repeater_RepeaterMode : ::System::Int32
	{
		RepeatForever = 2,
		RepeatTimes = 0,
		RepeatUntil = 1,
	};
}
