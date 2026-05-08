#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_3.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PickValue_1_TypeDefinitionIndex = 27310;

	template <typename T>
	class PickValue_1 : public ::FlowCanvas::Nodes::PureFunctionNode_3<T, ::System::Int32, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
