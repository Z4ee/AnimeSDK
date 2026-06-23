#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ShuffleList_1_TypeDefinitionIndex = 29560;

	template <typename T>
	class ShuffleList_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::Generic::IList_1<T>*, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
