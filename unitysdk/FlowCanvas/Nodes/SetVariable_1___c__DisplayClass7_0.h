#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetVariable_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SetVariable_1___c__DisplayClass7_0_TypeDefinitionIndex = 26514;

	template <typename T>
	class SetVariable_1___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::SetVariable_1<T>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T>* v; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
