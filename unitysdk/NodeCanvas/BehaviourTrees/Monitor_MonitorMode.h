#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_MonitorMode_TypeDefinitionIndex = 30106;

	enum class Monitor_MonitorMode : ::System::Int32
	{
		AnyStatus = 10,
		Failure = 0,
		Success = 1,
	};
}
