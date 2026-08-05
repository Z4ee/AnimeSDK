#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnString_1_TypeDefinitionIndex = 30469;

	template <typename T>
	class SelectOnString_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* stringCases; // 0x0
	};
}
