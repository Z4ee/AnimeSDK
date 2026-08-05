#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { template <typename T> class RelayValueInput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RelayValueInput_1___c__DisplayClass17_0_TypeDefinitionIndex = 31382;

	template <typename T>
	class RelayValueInput_1___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::RelayValueInput_1<T>* __4__this; // 0x0
		::FlowCanvas::FlowOutput* fOut; // 0x0
	};
}
