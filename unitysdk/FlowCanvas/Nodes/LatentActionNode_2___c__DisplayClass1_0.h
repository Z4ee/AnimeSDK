#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2> class LatentActionNode_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNode_2___c__DisplayClass1_0_TypeDefinitionIndex = 30898;

	template <typename T1, typename T2>
	class LatentActionNode_2___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::LatentActionNode_2<T1, T2>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
	};
}
