#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_NodeState_TypeDefinitionIndex = 45142;

	enum class IGraphNode_NodeState : ::System::Int32
	{
		Done = 2,
		Create = 0,
		Active = 1,
	};
}
