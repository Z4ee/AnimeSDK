#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class SetOtherVariable_1; }
namespace NodeCanvas::Framework { class Blackboard; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SetOtherVariable_1___c__DisplayClass4_0_TypeDefinitionIndex = 29998;

	template <typename T>
	class SetOtherVariable_1___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::NodeCanvas::Framework::Blackboard*>* bb; // 0x0
		::FlowCanvas::Nodes::SetOtherVariable_1<T>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T>* v; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
