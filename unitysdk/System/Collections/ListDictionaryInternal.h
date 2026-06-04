#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class ListDictionaryInternal_DictionaryNode; }

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_ADD_OFFSET UNITYSDK_OFFSET(0x185B3370)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CLEAR_OFFSET UNITYSDK_OFFSET(0x185B35E0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185B3600)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_COPYTO_OFFSET UNITYSDK_OFFSET(0x185B36C0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185B3860)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185B3260)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x185B32D0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x185B32C0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185B32E0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185B2FA0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x185B3270)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185B32F0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x185B3330)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_REMOVE_OFFSET UNITYSDK_OFFSET(0x185B3950)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185B3070)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185B38F0)
#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL__CTOR_OFFSET UNITYSDK_OFFSET(0x185B2F90)

namespace System::Collections
{
	inline static constexpr unsigned int ListDictionaryInternal_TypeDefinitionIndex = 1479;

	class ListDictionaryInternal : public ::System::Object
	{
	public:
		::System::Collections::ListDictionaryInternal_DictionaryNode* head; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Int32 count; // 0x20
		::System::Int32 version; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL__CTOR_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Object* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_KEYS_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GET_VALUES_OFFSET))(this);
		}

		::System::Void Add(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_ADD_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IDictionaryEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_REMOVE_OFFSET))(this, a1);
		}
	};
}
