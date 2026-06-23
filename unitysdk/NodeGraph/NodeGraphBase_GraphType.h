#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_GraphType_TypeDefinitionIndex = 40051;

	enum class NodeGraphBase_GraphType : ::System::Int32
	{
		Child = 3,
		Normal = 0,
		Function = 1,
		Macro = 2,
	};
}
