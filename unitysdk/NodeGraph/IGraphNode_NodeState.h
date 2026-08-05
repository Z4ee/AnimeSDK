#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_NodeState_TypeDefinitionIndex = 44744;

	enum class IGraphNode_NodeState : ::System::Int32
	{
		Create = 0,
		Active = 1,
		Done = 2,
	};
}
