#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_ValueCollection_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_ValueCollection_TypeDefinitionIndex = 3018;

	template <typename TKey, typename TValue>
	class SortedDictionary_2_ValueCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* _dictionary; // 0x0
	};
}
