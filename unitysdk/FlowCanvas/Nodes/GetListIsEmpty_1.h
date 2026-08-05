#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int GetListIsEmpty_1_TypeDefinitionIndex = 29923;

	template <typename T>
	class GetListIsEmpty_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
