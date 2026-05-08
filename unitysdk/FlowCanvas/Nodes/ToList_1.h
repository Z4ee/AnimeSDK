#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ToList_1_TypeDefinitionIndex = 26630;

	template <typename T>
	class ToList_1 : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Collections::Generic::List_1<T>*, ::System::Collections::Generic::IList_1<T>*>
	{
	public:
	};
}
