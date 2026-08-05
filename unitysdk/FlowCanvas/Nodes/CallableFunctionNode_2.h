#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas { class FlowNode; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_2_TypeDefinitionIndex = 30846;

	template <typename TResult, typename T1>
	class CallableFunctionNode_2 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		TResult result; // 0x0
	};
}
