#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> class FunctionCall_8; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_8_TypeDefinitionIndex = 30023;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult>
	class ReflectedFunctionNode_8 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_8<T1, T2, T3, T4, T5, T6, T7, TResult>* call; // 0x0
		TResult returnValue; // 0x0
		T1 instance; // 0x0
	};
}
