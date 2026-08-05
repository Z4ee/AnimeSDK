#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace MoleMole
{
	inline static constexpr unsigned int NodeMapEntry_TypeDefinitionIndex = 53570;

	struct alignas(8) NodeMapEntry
	{
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* nodes; // 0x18
	};
}
