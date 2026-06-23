#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ToArray_1_TypeDefinitionIndex = 29953;

	template <typename T>
	class ToArray_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<::Il2CppArray<T>*, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
