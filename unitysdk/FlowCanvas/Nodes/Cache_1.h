#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int Cache_1_TypeDefinitionIndex = 30326;

	template <typename T>
	class Cache_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_2<T, T>
	{
	public:
	};
}
