#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3> class LatentActionNode_3; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNode_3___c__DisplayClass1_0_TypeDefinitionIndex = 27710;

	template <typename T1, typename T2, typename T3>
	class LatentActionNode_3___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::LatentActionNode_3<T1, T2, T3>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
	};
}
