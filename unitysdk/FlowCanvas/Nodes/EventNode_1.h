#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EventNode_1_TypeDefinitionIndex = 31186;

	template <typename T>
	class EventNode_1 : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<T>* target; // 0x0
	};
}
