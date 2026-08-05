#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_FilterMode_TypeDefinitionIndex = 30990;

	enum class Filter_FilterMode : ::System::Int32
	{
		CoolDown = 1,
		LimitNumberOfTimes = 0,
	};
}
