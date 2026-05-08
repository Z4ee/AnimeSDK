#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class Port; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int IntToEnum_1_TypeDefinitionIndex = 40341;

	template <typename T>
	class IntToEnum_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Int32>* _intInput; // 0x0
		::FlowCanvas::ValueOutput_1<T>* _enumOutput; // 0x0
	};
}
