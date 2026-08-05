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

#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1DBF1D40)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBF1E30)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBF21C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1DBF1F40)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSVALUE_OFFSET UNITYSDK_OFFSET(0x1DBF1FD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DBF1F10)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DBF20D0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBF23B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1DBF19F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DBF1B50)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1DBF1BB0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1DBF1B80)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1DBF1BE0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DBF1BF0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1DBF23E0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1DBF1D10)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1DBF24C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x1DBF2680)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DBF25A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DBF1C20)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DBF2380)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBF1870)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBF1860)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_SyncHashtable_TypeDefinitionIndex = 1462;

	class Hashtable_SyncHashtable : public ::System::Collections::Hashtable
	{
	public:
		::System::Collections::Hashtable* _table; // 0x50

		::System::Void _ctor(::System::Collections::Hashtable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_OFFSET))(this, table);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETOBJECTDATA_OFFSET))(this, info, context);
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

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINS_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsValue(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSVALUE_OFFSET))(this, key);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_COPYTO_OFFSET))(this, array, arrayIndex);
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

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_REMOVE_OFFSET))(this, key);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ONDESERIALIZATION_OFFSET))(this, sender);
		}
	};
}
