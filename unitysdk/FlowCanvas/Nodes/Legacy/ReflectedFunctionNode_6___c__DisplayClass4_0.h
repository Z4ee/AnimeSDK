#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ReflectedMethodRegistrationOptions.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes::Legacy { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class ReflectedFunctionNode_6; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_6___c__DisplayClass4_0_TypeDefinitionIndex = 30879;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult>
	class ReflectedFunctionNode_6___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedFunctionNode_6<T1, T2, T3, T4, T5, TResult>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
		::FlowCanvas::ValueInput_1<T4>* p4; // 0x0
		::FlowCanvas::ValueInput_1<T5>* p5; // 0x0
		::FlowCanvas::Nodes::ReflectedMethodRegistrationOptions options; // 0x0
	};
}
