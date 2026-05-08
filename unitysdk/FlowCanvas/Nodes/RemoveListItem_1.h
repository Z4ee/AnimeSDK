#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RemoveListItem_1_TypeDefinitionIndex = 27638;

	template <typename T>
	class RemoveListItem_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<::System::Collections::Generic::IList_1<T>*, ::System::Collections::Generic::List_1<T>*, T>
	{
	public:
	};
}
