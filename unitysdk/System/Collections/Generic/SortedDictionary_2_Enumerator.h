#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/SortedSet_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_Enumerator_TypeDefinitionIndex = 3012;

	template <typename TKey, typename TValue>
	struct SortedDictionary_2_Enumerator
	{
		::System::Collections::Generic::SortedSet_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> _treeEnum; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
	};
}
