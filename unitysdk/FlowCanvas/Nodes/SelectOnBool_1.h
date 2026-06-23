#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnBool_1_TypeDefinitionIndex = 30696;

	template <typename T>
	class SelectOnBool_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* condition; // 0x0
		::FlowCanvas::ValueInput_1<T>* isTrue; // 0x0
		::FlowCanvas::ValueInput_1<T>* isFalse; // 0x0
		::FlowCanvas::ValueOutput_1<T>* result; // 0x0
	};
}
