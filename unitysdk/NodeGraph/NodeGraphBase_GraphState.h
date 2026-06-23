#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphState_TypeDefinitionIndex = 40050;

	enum class NodeGraphBase_GraphState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Running = 2,
		End = 3,
	};
}
