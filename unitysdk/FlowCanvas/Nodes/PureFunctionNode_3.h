#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNodeBase.h"

namespace FlowCanvas { class FlowNode; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureFunctionNode_3_TypeDefinitionIndex = 30005;

	template <typename TResult, typename T1, typename T2>
	class PureFunctionNode_3 : public ::FlowCanvas::Nodes::PureFunctionNodeBase
	{
	public:
	};
}
