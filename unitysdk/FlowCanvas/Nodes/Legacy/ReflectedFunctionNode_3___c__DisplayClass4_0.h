#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes::Legacy { template <typename T1, typename T2, typename T3> class ReflectedFunctionNode_3; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_3___c__DisplayClass4_0_TypeDefinitionIndex = 29841;

	template <typename T1, typename T2, typename TResult>
	class ReflectedFunctionNode_3___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedFunctionNode_3<T1, T2, TResult>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x0
	};
}
