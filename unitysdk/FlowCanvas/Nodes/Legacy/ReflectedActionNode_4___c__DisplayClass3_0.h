#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes::Legacy { template <typename T1, typename T2, typename T3, typename T4> class ReflectedActionNode_4; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_4___c__DisplayClass3_0_TypeDefinitionIndex = 29789;

	template <typename T1, typename T2, typename T3, typename T4>
	class ReflectedActionNode_4___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedActionNode_4<T1, T2, T3, T4>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p3; // 0x0
		::FlowCanvas::ValueInput_1<T4>* p4; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
