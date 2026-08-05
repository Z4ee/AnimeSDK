#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_DICTIONARYBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DDD6230)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1DDD5C40)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDD6550)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DDD57A0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_GET_INNERHASHTABLE_OFFSET UNITYSDK_OFFSET(0x1DDD56F0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_ONGET_OFFSET UNITYSDK_OFFSET(0x1DDD66D0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1DDD5940)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1DDD5AC0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x1DDD6150)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1DDD6080)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1DDD5880)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1DDD57C0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DDD5D20)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1DDD5A00)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1DDD5B80)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1DDD62F0)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1DDD5E10)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DDD6610)
#define SYSTEM_COLLECTIONS_DICTIONARYBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD66E0)

namespace System::Collections
{
	inline static constexpr unsigned int DictionaryBase_TypeDefinitionIndex = 1457;

	class DictionaryBase : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* hashtable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::Hashtable* get_InnerHashtable()
		{
			return ((::System::Collections::Hashtable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_GET_INNERHASHTABLE_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Boolean System_Collections_IDictionary_Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_CLEAR_OFFSET))(this);
		}

		::System::Void System_Collections_IDictionary_Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* OnGet(::System::Object* key, ::System::Object* currentValue)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_DICTIONARYBASE_ONGET_OFFSET))(this, key, currentValue);
		}
	};
}
