#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphState_TypeDefinitionIndex = 58237;

	enum class NodeGraphBase_GraphState : ::System::Int32
	{
		End = 3,
		Init = 1,
		Running = 2,
		None = 0,
	};
}
