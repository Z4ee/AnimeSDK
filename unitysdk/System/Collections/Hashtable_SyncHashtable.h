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

#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x161CC020)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x161CC110)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x161CC3A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x161CC220)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x161CC1F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x161CC2B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161CC530)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x161CBCD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161CBE30)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x161CBE90)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x161CBE60)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161CBEC0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161CBED0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x161CC560)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161CBFF0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x161CC640)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x161CC800)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x161CC720)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161CBF00)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161CC500)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161CBBE0)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x161CA5B0)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_SyncHashtable_TypeDefinitionIndex = 1465;

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
