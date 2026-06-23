#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDReverseList_1_TypeDefinitionIndex = 66762;

	template <typename T>
	class LDReverseList_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Collections::Generic::List_1<T>*, ::System::Collections::Generic::List_1<T>*>
	{
	public:
	};
}
