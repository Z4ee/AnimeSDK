#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int AddDictionaryItem_1_TypeDefinitionIndex = 30490;

	template <typename T>
	class AddDictionaryItem_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_4<::System::Collections::Generic::IDictionary_2<::System::String*, T>*, ::System::Collections::Generic::IDictionary_2<::System::String*, T>*, ::System::String*, T>
	{
	public:
	};
}
