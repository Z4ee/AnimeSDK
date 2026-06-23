#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode.h"

namespace FlowCanvas { class FlowNode; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode_5_TypeDefinitionIndex = 30857;

	template <typename TInstance, typename T1, typename T2, typename T3, typename T4>
	class ExtractorNode_5 : public ::FlowCanvas::Nodes::ExtractorNode
	{
	public:
		T1 a; // 0x0
		T2 b; // 0x0
		T3 c; // 0x0
		T4 d; // 0x0
	};
}
