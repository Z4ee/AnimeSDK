#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode_3.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SendEvent_1_TypeDefinitionIndex = 30658;

	template <typename T>
	class SendEvent_1 : public ::FlowCanvas::Nodes::CallableActionNode_3<::NodeCanvas::Framework::GraphOwner*, ::System::String*, T>
	{
	public:
	};
}
