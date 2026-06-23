#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5> class FunctionCall_5; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_5_TypeDefinitionIndex = 30186;

	template <typename T1, typename T2, typename T3, typename T4, typename TResult>
	class ReflectedFunctionNode_5 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_5<T1, T2, T3, T4, TResult>* call; // 0x0
		TResult returnValue; // 0x0
		T1 instance; // 0x0
	};
}
