#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_SortedListKeyEnumerator_TypeDefinitionIndex = 3029;

	template <typename TKey, typename TValue>
	class SortedList_2_SortedListKeyEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		TKey _currentKey; // 0x0
	};
}
