#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/UniversalDelegateParam_1.h"

namespace FlowCanvas { class FlowNode; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UniversalDelegateParam_2_TypeDefinitionIndex = 26958;

	template <typename TArray, typename TValue>
	class UniversalDelegateParam_2 : public ::FlowCanvas::Nodes::UniversalDelegateParam_1<TArray>
	{
	public:
		::Il2CppArray<::FlowCanvas::ValueInput_1<TValue>*>* valueInputs; // 0x0
	};
}
