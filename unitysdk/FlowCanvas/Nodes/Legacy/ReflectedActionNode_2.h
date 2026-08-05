#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2> class ActionCall_2; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_2_TypeDefinitionIndex = 29718;

	template <typename T1, typename T2>
	class ReflectedActionNode_2 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_2<T1, T2>* call; // 0x0
		T1 instance; // 0x0
	};
}
