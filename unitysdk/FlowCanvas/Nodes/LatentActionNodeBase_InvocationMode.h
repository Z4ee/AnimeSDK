#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase_InvocationMode_TypeDefinitionIndex = 30236;

	enum class LatentActionNodeBase_InvocationMode : ::System::Int32
	{
		QueueCalls = 0,
		FilterCalls = 1,
	};
}
