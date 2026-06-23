#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ForEach_1_TypeDefinitionIndex = 29234;

	template <typename T>
	class ForEach_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		T currentObject; // 0x0
		::System::Int32 currentIndex; // 0x0
		::System::Boolean broken; // 0x0
	};
}
