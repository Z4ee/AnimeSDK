#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int HashSet_1_Enumerator_TypeDefinitionIndex = 3690;

	template <typename T>
	struct HashSet_1_Enumerator
	{
		::System::Collections::Generic::HashSet_1<T>* _set; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		T _current; // 0x0
	};
}
