#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphType_TypeDefinitionIndex = 85157;

	enum class NodeGraphBase_GraphType : ::System::Int32
	{
		Function = 1,
		Child = 3,
		Normal = 0,
		Macro = 2,
	};
}
