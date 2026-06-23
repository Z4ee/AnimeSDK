#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int EnumToInt_1_TypeDefinitionIndex = 44678;

	template <typename T>
	class EnumToInt_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<T>* _enumInput; // 0x0
		::FlowCanvas::ValueOutput_1<::System::Int32>* _intOutput; // 0x0
	};
}
