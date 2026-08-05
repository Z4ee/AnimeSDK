#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionCall_5; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_5_TypeDefinitionIndex = 30891;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class ReflectedActionNode_5 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_5<T1, T2, T3, T4, T5>* call; // 0x0
		T1 instance; // 0x0
	};
}
