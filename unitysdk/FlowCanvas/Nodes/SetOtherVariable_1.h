#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace NodeCanvas::Framework { class Blackboard; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SetOtherVariable_1_TypeDefinitionIndex = 30792;

	template <typename T>
	class SetOtherVariable_1 : public ::FlowCanvas::FlowNode
	{
	public:
		::ParadoxNotion::OperationMethod operation; // 0x0
		::FlowCanvas::ValueInput_1<::System::String*>* varName; // 0x0
	};
}
