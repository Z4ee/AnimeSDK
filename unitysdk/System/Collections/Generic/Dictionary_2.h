#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Entry.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Collections/Generic/InsertionBehavior.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_KeyCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2_ValueCollection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int Dictionary_2_TypeDefinitionIndex = 1528;

	template <typename TKey, typename TValue>
	class Dictionary_2 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* buckets; // 0x0
		::Il2CppArray<::System::Collections::Generic::Dictionary_2_Entry<TKey, TValue>>* entries; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 version; // 0x0
		::System::Int32 freeList; // 0x0
		::System::Int32 freeCount; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Collections::Generic::Dictionary_2_KeyCollection<TKey, TValue>* keys; // 0x0
		::System::Collections::Generic::Dictionary_2_ValueCollection<TKey, TValue>* values; // 0x0
	};
}
