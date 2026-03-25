#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Hashtable_bucket.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections { class IHashCodeProvider; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_HASHTABLE_ADD_OFFSET UNITYSDK_OFFSET(0x161C8C70)
#define SYSTEM_COLLECTIONS_HASHTABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x161C91B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x161C9310)
#define SYSTEM_COLLECTIONS_HASHTABLE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x161C9400)
#define SYSTEM_COLLECTIONS_HASHTABLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x161C93F0)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYENTRIES_OFFSET UNITYSDK_OFFSET(0x161C9610)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYKEYS_OFFSET UNITYSDK_OFFSET(0x161C9540)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYTO_OFFSET UNITYSDK_OFFSET(0x161C9760)
#define SYSTEM_COLLECTIONS_HASHTABLE_COPYVALUES_OFFSET UNITYSDK_OFFSET(0x161C98C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_EXPAND_OFFSET UNITYSDK_OFFSET(0x161C9BA0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161C9FD0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETHASH_OFFSET UNITYSDK_OFFSET(0x161CA030)
#define SYSTEM_COLLECTIONS_HASHTABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x161CA5C0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161CA540)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x161CA120)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x161CA110)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161CA130)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C99A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x161CA230)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161CA500)
#define SYSTEM_COLLECTIONS_HASHTABLE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x161CA2A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_INITHASH_OFFSET UNITYSDK_OFFSET(0x161C8C30)
#define SYSTEM_COLLECTIONS_HASHTABLE_INSERT_OFFSET UNITYSDK_OFFSET(0x161C8C80)
#define SYSTEM_COLLECTIONS_HASHTABLE_KEYEQUALS_OFFSET UNITYSDK_OFFSET(0x161CA140)
#define SYSTEM_COLLECTIONS_HASHTABLE_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x161CAA70)
#define SYSTEM_COLLECTIONS_HASHTABLE_PUTENTRY_OFFSET UNITYSDK_OFFSET(0x161C9E70)
#define SYSTEM_COLLECTIONS_HASHTABLE_REHASH_1_OFFSET UNITYSDK_OFFSET(0x161C9BF0)
#define SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET UNITYSDK_OFFSET(0x161C9E40)
#define SYSTEM_COLLECTIONS_HASHTABLE_REMOVE_OFFSET UNITYSDK_OFFSET(0x161CA310)
#define SYSTEM_COLLECTIONS_HASHTABLE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C9B90)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161CA550)
#define SYSTEM_COLLECTIONS_HASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161C9F30)
#define SYSTEM_COLLECTIONS_HASHTABLE_UPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x161C9300)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161BBEF0)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x161C8950)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x161C8760)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x161C8960)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x161C89E0)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x161C8A00)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x161C8A90)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x161C8AE0)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_9_OFFSET UNITYSDK_OFFSET(0x161C8B10)
#define SYSTEM_COLLECTIONS_HASHTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x161C8750)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_TypeDefinitionIndex = 1461;

	class Hashtable : public ::System::Object
	{
	public:
		::System::Object* _syncRoot; // 0x10
		::System::Collections::ICollection* values; // 0x18
		::System::Collections::ICollection* keys; // 0x20
		::System::Collections::IEqualityComparer* _keycomparer; // 0x28
		::Il2CppArray<::System::Collections::Hashtable_bucket>* buckets; // 0x30
		::System::Int32 version; // 0x38
		::System::Int32 count; // 0x3C
		::System::Single loadFactor; // 0x40
		::System::Boolean isWriterInProgress; // 0x44
		::System::Int32 occupancy; // 0x48
		::System::Int32 loadsize; // 0x4C

		::System::Void _ctor(::System::Boolean trash)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_OFFSET))(this, trash);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_2_OFFSET))(this, capacity);
		}

		::System::Void _ctor_3(::System::Int32 capacity, ::System::Single loadFactor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_3_OFFSET))(this, capacity, loadFactor);
		}

		::System::Void _ctor_4(::System::Int32 capacity, ::System::Single loadFactor, ::System::Collections::IHashCodeProvider* hcp, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_4_OFFSET))(this, capacity, loadFactor, hcp, comparer);
		}

		::System::Void _ctor_5(::System::Int32 capacity, ::System::Single loadFactor, ::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_5_OFFSET))(this, capacity, loadFactor, equalityComparer);
		}

		::System::Void _ctor_6(::System::Collections::IHashCodeProvider* hcp, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IHashCodeProvider*, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_6_OFFSET))(this, hcp, comparer);
		}

		::System::Void _ctor_7(::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_7_OFFSET))(this, equalityComparer);
		}

		::System::Void _ctor_8(::System::Int32 capacity, ::System::Collections::IEqualityComparer* equalityComparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::IEqualityComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_8_OFFSET))(this, capacity, equalityComparer);
		}

		::System::Void _ctor_9(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE__CTOR_9_OFFSET))(this, info, context);
		}

		::System::UInt32 InitHash(::System::Object* key, ::System::Int32 hashsize, ::System::UInt32& seed, ::System::UInt32& incr)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_INITHASH_OFFSET))(this, key, hashsize, seed, incr);
		}

		::System::Void Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CONTAINS_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Void CopyKeys(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYKEYS_OFFSET))(this, array, arrayIndex);
		}

		::System::Void CopyEntries(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYENTRIES_OFFSET))(this, array, arrayIndex);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Void CopyValues(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_COPYVALUES_OFFSET))(this, array, arrayIndex);
		}

		::System::Object* get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void expand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_EXPAND_OFFSET))(this);
		}

		::System::Void rehash()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REHASH_OFFSET))(this);
		}

		::System::Void UpdateVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_UPDATEVERSION_OFFSET))(this);
		}

		::System::Void rehash_1(::System::Int32 newsize, ::System::Boolean forceNewHashCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REHASH_1_OFFSET))(this, newsize, forceNewHashCode);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 GetHash(::System::Object* key)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETHASH_OFFSET))(this, key);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Boolean KeyEquals(::System::Object* item, ::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_KEYEQUALS_OFFSET))(this, item, key);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_VALUES_OFFSET))(this);
		}

		::System::Void Insert(::System::Object* key, ::System::Object* nvalue, ::System::Boolean add)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_INSERT_OFFSET))(this, key, nvalue, add);
		}

		::System::Void putEntry(::Il2CppArray<::System::Collections::Hashtable_bucket>* newBuckets, ::System::Object* key, ::System::Object* nvalue, ::System::Int32 hashcode)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Hashtable_bucket>*, ::System::Object*, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_PUTENTRY_OFFSET))(this, newBuckets, key, nvalue, hashcode);
		}

		::System::Void Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_REMOVE_OFFSET))(this, key);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GET_COUNT_OFFSET))(this);
		}

		static ::System::Collections::Hashtable* Synchronized(::System::Collections::Hashtable* table)
		{
			return ((::System::Collections::Hashtable*(*)(::System::Collections::Hashtable*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_SYNCHRONIZED_OFFSET))(table);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}

		::System::Void OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_ONDESERIALIZATION_OFFSET))(this, sender);
		}
	};
}
