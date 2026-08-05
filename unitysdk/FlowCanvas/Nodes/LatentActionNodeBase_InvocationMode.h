#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNodeBase_InvocationMode_TypeDefinitionIndex = 31173;

	enum class LatentActionNodeBase_InvocationMode : ::System::Int32
	{
		FilterCalls = 1,
		QueueCalls = 0,
	};
}
