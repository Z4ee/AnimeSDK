#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateDictionary_1___c__DisplayClass1_0_TypeDefinitionIndex = 30506;

	template <typename T>
	class CreateDictionary_1___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<::System::String*>*>* keys; // 0x0
		::System::Collections::Generic::List_1<::FlowCanvas::ValueInput_1<T>*>* values; // 0x0
	};
}
