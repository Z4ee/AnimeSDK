#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes::Legacy { template <typename T1, typename T2> class ReflectedActionNode_2; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_2___c__DisplayClass3_0_TypeDefinitionIndex = 29719;

	template <typename T1, typename T2>
	class ReflectedActionNode_2___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedActionNode_2<T1, T2>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p2; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
