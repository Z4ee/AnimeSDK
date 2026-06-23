#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class CallableFunctionNode_9; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_9___c__DisplayClass2_0_TypeDefinitionIndex = 30140;

	template <typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class CallableFunctionNode_9___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableFunctionNode_9<TResult, T1, T2, T3, T4, T5, T6, T7, T8>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
		::FlowCanvas::ValueInput_1<T4>* p4; // 0x0
		::FlowCanvas::ValueInput_1<T5>* p5; // 0x0
		::FlowCanvas::ValueInput_1<T6>* p6; // 0x0
		::FlowCanvas::ValueInput_1<T7>* p7; // 0x0
		::FlowCanvas::ValueInput_1<T8>* p8; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
