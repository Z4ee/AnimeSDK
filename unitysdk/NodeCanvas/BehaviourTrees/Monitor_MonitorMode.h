#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_MonitorMode_TypeDefinitionIndex = 31448;

	enum class Monitor_MonitorMode : ::System::Int32
	{
		Success = 1,
		Failure = 0,
		AnyStatus = 10,
	};
}
