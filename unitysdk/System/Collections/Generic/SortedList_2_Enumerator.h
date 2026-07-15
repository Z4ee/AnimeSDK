#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_Enumerator_TypeDefinitionIndex = 3028;

	template <typename TKey, typename TValue>
	struct SortedList_2_Enumerator
	{
		::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList; // 0x0
		TKey _key; // 0x0
		TValue _value; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
	};
}
