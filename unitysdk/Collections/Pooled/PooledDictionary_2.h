#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Collections/Pooled/ClearMode.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2_Entry.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2_Enumerator.h"
#include "unitysdk/Collections/Pooled/PooledDictionary_2_InsertionBehavior.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2_KeyCollection; }
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2_ValueCollection; }
namespace Collections::Pooled { template <typename T> class DefaultArrayPoolSource_1; }
namespace System { class Array; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Runtime::Serialization { class SerializationInfo; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_TypeDefinitionIndex = 5082;

	template <typename TKey, typename TValue>
	class PooledDictionary_2 : public ::System::Object
	{
	public:
		// static const ::System::String* s_versionName; // 0x0
		// static const ::System::String* s_hashSizeName; // 0x0
		// static const ::System::String* s_keyValuePairsName; // 0x0
		// static const ::System::String* s_comparerName; // 0x0
		// static const ::System::String* s_clearKeyName; // 0x0
		// static const ::System::String* s_clearValueName; // 0x0
		// static const ::System::Int32 s_startOfFreeList = 0xFFFFFFFD; // 0x0
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>** StaticGet_s_bucketPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PooledDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Collections::Pooled::DefaultArrayPoolSource_1<::Collections::Pooled::PooledDictionary_2_Entry<TKey, TValue>>** StaticGet_s_entryPool()
		{
			return (::Collections::Pooled::DefaultArrayPoolSource_1<::Collections::Pooled::PooledDictionary_2_Entry<TKey, TValue>>**)Il2CppClass::FromTypeDefinitionIndex(PooledDictionary_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<::System::Int32>* _buckets; // 0x0
		::Il2CppArray<::Collections::Pooled::PooledDictionary_2_Entry<TKey, TValue>>* _entries; // 0x0
		::System::Int32 _size; // 0x0
		::System::Int32 _count; // 0x0
		::System::Int32 _freeList; // 0x0
		::System::Int32 _freeCount; // 0x0
		::System::Int32 _version; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* _comparer; // 0x0
		::Collections::Pooled::PooledDictionary_2_KeyCollection<TKey, TValue>* _keys; // 0x0
		::Collections::Pooled::PooledDictionary_2_ValueCollection<TKey, TValue>* _values; // 0x0
		::System::Object* _syncRoot; // 0x0
		::System::Boolean _clearKeyOnFree; // 0x0
		::System::Boolean _clearValueOnFree; // 0x0
	};
}
