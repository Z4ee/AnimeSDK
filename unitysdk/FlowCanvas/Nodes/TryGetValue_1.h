#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TryGetValue_1_TypeDefinitionIndex = 30138;

	template <typename T>
	class TryGetValue_1 : public ::FlowCanvas::Nodes::CallableFunctionNode_3<T, ::System::Collections::Generic::IDictionary_2<::System::String*, T>*, ::System::String*>
	{
	public:
		::System::Boolean _exists_k__BackingField; // 0x0
	};
}
