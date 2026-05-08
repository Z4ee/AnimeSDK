#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnInt_1_TypeDefinitionIndex = 27519;

	template <typename T>
	class SelectOnInt_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Int32 _portCount; // 0x0
	};
}
