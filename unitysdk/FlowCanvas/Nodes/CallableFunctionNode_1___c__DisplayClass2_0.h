#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { template <typename T> class CallableFunctionNode_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_1___c__DisplayClass2_0_TypeDefinitionIndex = 30064;

	template <typename TResult>
	class CallableFunctionNode_1___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableFunctionNode_1<TResult>* __4__this; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
