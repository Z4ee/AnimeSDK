#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T> class ActionCall_1; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_1_TypeDefinitionIndex = 30111;

	template <typename T1>
	class ReflectedActionNode_1 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_1<T1>* call; // 0x0
		T1 instance; // 0x0
	};
}
