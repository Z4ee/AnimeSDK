#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int WriteFlowParameter_1___c__DisplayClass0_0_TypeDefinitionIndex = 30098;

	template <typename T>
	class WriteFlowParameter_1___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::FlowCanvas::ValueInput_1<::System::String*>* pName; // 0x0
		::FlowCanvas::ValueInput_1<T>* pValue; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
