#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2___c__DisplayClass34_0; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class SortedSet_1_Node; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2___c__DisplayClass34_1_TypeDefinitionIndex = 3025;

	template <typename TKey, typename TValue>
	class SortedDictionary_2___c__DisplayClass34_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::EqualityComparer_1<TValue>* valueComparer; // 0x0
		::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>* CS___8__locals1; // 0x0
	};
}
