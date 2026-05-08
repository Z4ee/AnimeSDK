#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T> class ReadFlowParameter_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ReadFlowParameter_1___c__DisplayClass1_0_TypeDefinitionIndex = 26993;

	template <typename T>
	class ReadFlowParameter_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ReadFlowParameter_1<T>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<::System::String*>* pName; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
