#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class CallableActionNode_6; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableActionNode_6___c__DisplayClass1_0_TypeDefinitionIndex = 30144;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class CallableActionNode_6___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableActionNode_6<T1, T2, T3, T4, T5, T6>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
		::FlowCanvas::ValueInput_1<T4>* p4; // 0x0
		::FlowCanvas::ValueInput_1<T5>* p5; // 0x0
		::FlowCanvas::ValueInput_1<T6>* p6; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
