#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class FunctionCall_9; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_9_TypeDefinitionIndex = 30015;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename TResult>
	class ReflectedFunctionNode_9 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_9<T1, T2, T3, T4, T5, T6, T7, T8, TResult>* call; // 0x0
		TResult returnValue; // 0x0
		T1 instance; // 0x0
	};
}
