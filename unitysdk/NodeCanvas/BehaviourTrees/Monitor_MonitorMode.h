#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_MonitorMode_TypeDefinitionIndex = 27820;

	enum class Monitor_MonitorMode : ::System::Int32
	{
		Failure = 0,
		Success = 1,
		AnyStatus = 10,
	};
}
