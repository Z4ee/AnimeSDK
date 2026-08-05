#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3> class ExtractorNode_3; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode_3___c__DisplayClass3_0_TypeDefinitionIndex = 30958;

	template <typename TInstance, typename T1, typename T2>
	class ExtractorNode_3___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ExtractorNode_3<TInstance, T1, T2>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<TInstance>* i; // 0x0
	};
}
