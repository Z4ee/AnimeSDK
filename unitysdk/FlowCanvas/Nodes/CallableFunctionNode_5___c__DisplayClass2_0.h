#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3, typename T4, typename T5> class CallableFunctionNode_5; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_5___c__DisplayClass2_0_TypeDefinitionIndex = 30611;

	template <typename TResult, typename T1, typename T2, typename T3, typename T4>
	class CallableFunctionNode_5___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableFunctionNode_5<TResult, T1, T2, T3, T4>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
		::FlowCanvas::ValueInput_1<T4>* p4; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
