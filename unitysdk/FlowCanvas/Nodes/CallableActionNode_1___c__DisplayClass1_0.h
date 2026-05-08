#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class CallableActionNode_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableActionNode_1___c__DisplayClass1_0_TypeDefinitionIndex = 26951;

	template <typename T1>
	class CallableActionNode_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableActionNode_1<T1>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
