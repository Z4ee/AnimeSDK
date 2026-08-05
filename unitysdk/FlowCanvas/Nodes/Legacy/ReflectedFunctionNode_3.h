#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"

namespace FlowCanvas { class FlowNode; }
namespace ParadoxNotion { template <typename T1, typename T2, typename T3> class FunctionCall_3; }
namespace System::Reflection { class MethodInfo; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_3_TypeDefinitionIndex = 31230;

	template <typename T1, typename T2, typename TResult>
	class ReflectedFunctionNode_3 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_3<T1, T2, TResult>* call; // 0x0
		TResult returnValue; // 0x0
		T1 instance; // 0x0
	};
}
