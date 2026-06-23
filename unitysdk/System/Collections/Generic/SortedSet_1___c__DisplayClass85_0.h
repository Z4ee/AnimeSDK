#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedSet_1___c__DisplayClass85_0_TypeDefinitionIndex = 3989;

	template <typename T>
	class SortedSet_1___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<T>* match; // 0x0
		::System::Collections::Generic::List_1<T>* matches; // 0x0
	};
}
