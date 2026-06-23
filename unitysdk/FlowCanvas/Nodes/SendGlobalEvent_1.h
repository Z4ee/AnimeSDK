#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_2.h"

namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SendGlobalEvent_1_TypeDefinitionIndex = 30196;

	template <typename T>
	class SendGlobalEvent_1 : public ::FlowCanvas::Nodes::CallableActionNode_2<::System::String*, T>
	{
	public:
	};
}
