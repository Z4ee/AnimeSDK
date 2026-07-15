#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Generic/SortedDictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2_KeyCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2_ValueCollection; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class TreeSet_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_TypeDefinitionIndex = 3011;

	template <typename TKey, typename TValue>
	class SortedDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>* _keys; // 0x0
		::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>* _values; // 0x0
		::System::Collections::Generic::TreeSet_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _set; // 0x0
	};
}
