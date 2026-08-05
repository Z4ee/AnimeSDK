#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas { class FlowNode; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_6_TypeDefinitionIndex = 31072;

	template <typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5>
	class CallableFunctionNode_6 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		TResult result; // 0x0
	};
}
