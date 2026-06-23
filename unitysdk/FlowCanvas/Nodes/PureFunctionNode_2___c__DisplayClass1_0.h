#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2> class PureFunctionNode_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureFunctionNode_2___c__DisplayClass1_0_TypeDefinitionIndex = 30738;

	template <typename TResult, typename T1>
	class PureFunctionNode_2___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureFunctionNode_2<TResult, T1>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T1>* p1; // 0x0
	};
}
