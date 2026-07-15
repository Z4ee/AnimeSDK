#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Comparer_1.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_KeyValuePairComparer_TypeDefinitionIndex = 3023;

	template <typename TKey, typename TValue>
	class SortedDictionary_2_KeyValuePairComparer : public ::System::Collections::Generic::Comparer_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
	{
	public:
		::System::Collections::Generic::IComparer_1<TKey>* keyComparer; // 0x0
	};
}
