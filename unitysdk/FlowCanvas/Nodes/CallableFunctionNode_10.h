#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas { class FlowNode; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_10_TypeDefinitionIndex = 30179;

	template <typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	class CallableFunctionNode_10 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		TResult result; // 0x0
	};
}
