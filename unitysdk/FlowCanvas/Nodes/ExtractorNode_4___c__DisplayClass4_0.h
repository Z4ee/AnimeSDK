#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3, typename T4> class ExtractorNode_4; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode_4___c__DisplayClass4_0_TypeDefinitionIndex = 29869;

	template <typename TInstance, typename T1, typename T2, typename T3>
	class ExtractorNode_4___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::ExtractorNode_4<TInstance, T1, T2, T3>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<TInstance>* i; // 0x0
	};
}
