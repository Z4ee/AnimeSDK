#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int InsertListItem_1_TypeDefinitionIndex = 30202;

	template <typename T>
	class InsertListItem_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Collections::Generic::IList_1<T>*, ::System::Collections::Generic::List_1<T>*, ::System::Int32, T>
	{
	public:
	};
}
