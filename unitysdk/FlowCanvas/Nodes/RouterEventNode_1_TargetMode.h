#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RouterEventNode_1_TargetMode_TypeDefinitionIndex = 30543;

	enum class RouterEventNode_1_TargetMode : ::System::Int32
	{
		MultipleTargets = 1,
		SingleTarget = 0,
	};
}
