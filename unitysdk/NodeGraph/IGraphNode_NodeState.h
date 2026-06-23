#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_NodeState_TypeDefinitionIndex = 70568;

	enum class IGraphNode_NodeState : ::System::Int32
	{
		Active = 1,
		Create = 0,
		Done = 2,
	};
}
