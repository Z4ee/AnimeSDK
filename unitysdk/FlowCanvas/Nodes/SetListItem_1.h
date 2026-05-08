#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SetListItem_1_TypeDefinitionIndex = 27163;

	template <typename T>
	class SetListItem_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Collections::Generic::IList_1<T>*, ::System::Collections::Generic::IList_1<T>*, ::System::Int32, T>
	{
	public:
	};
}
