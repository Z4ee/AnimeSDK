#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetFirstListItem_1_TypeDefinitionIndex = 27158;

	template <typename T>
	class GetFirstListItem_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<T, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
