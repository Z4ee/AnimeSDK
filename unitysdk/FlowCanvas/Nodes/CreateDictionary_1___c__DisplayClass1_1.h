#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateDictionary_1___c__DisplayClass1_1_TypeDefinitionIndex = 30508;

	template <typename T>
	class CreateDictionary_1___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* v; // 0x0
		::System::Collections::Generic::List_1<::System::String*>* k; // 0x0
	};
}
