#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReadFlowParameter_1_TypeDefinitionIndex = 31122;

	template <typename T>
	class ReadFlowParameter_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		T flowValue; // 0x0
	};
}
