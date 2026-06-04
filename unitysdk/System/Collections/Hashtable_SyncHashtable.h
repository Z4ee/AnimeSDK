#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x185B24D0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x185B25C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x185B2850)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x185B26D0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185B26A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x185B2760)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185B29F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x185B2180)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185B22E0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x185B2340)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x185B2310)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185B2370)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185B2380)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x185B2A20)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185B24A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x185B2B00)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x185B2CC0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x185B2BE0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185B23B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185B29C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185B2090)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x185B0A70)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_SyncHashtable_TypeDefinitionIndex = 1465;

	class Hashtable_SyncHashtable : public ::System::Collections::Hashtable
	{
	public:
		::System::Collections::Hashtable* _table; // 0x50

		::System::Void _ctor(::System::Collections::Hashtable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINS_OFFSET))(this, a1);
		}

		::System::Boolean ContainsKey(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSKEY_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLONE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_VALUES_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_REMOVE_OFFSET))(this, a1);
		}

		::System::Void OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ONDESERIALIZATION_OFFSET))(this, a1);
		}
	};
}
