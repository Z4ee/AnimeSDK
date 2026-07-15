#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2_KeyList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2_ValueList; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedList_2_TypeDefinitionIndex = 3027;

	template <typename TKey, typename TValue>
	class SortedList_2 : public ::System::Object
	{
	public:
		::Il2CppArray<TKey>* keys; // 0x0
		::Il2CppArray<TValue>* values; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 version; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* keyList; // 0x0
		::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* valueList; // 0x0
		::System::Object* _syncRoot; // 0x0
	};
}
