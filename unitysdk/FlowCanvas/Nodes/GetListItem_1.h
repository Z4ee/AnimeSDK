#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetListItem_1_TypeDefinitionIndex = 26983;

	template <typename T>
	class GetListItem_1 : public ::FlowCanvas::Nodes::PureFunctionNode_3<T, ::System::Collections::Generic::IList_1<T>*, ::System::Int32>
	{
	public:
	};
}
