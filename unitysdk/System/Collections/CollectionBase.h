#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_COLLECTIONBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AE3AEC0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE3C060)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AE3AEA0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_INNERLIST_OFFSET UNITYSDK_OFFSET(0x1AE3ADE0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1AE3AE90)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1AE3C140)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET UNITYSDK_OFFSET(0x1AE3C130)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1AE3C150)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET UNITYSDK_OFFSET(0x1AE3C120)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1AE3C160)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1AE3AF80)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AE3B4D0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AE3B350)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AE3B410)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1AE3BA30)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1AE3B970)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1AE3B290)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1AE3B1D0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE3B5A0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1AE3BE00)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1AE3BEC0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AE3BBE0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE3B710)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE3AD40)

namespace System::Collections
{
	inline static constexpr unsigned int CollectionBase_TypeDefinitionIndex = 1454;

	class CollectionBase : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* list; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE__CTOR_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_InnerList()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_INNERLIST_OFFSET))(this);
		}

		::System::Collections::IList* get_List()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_LIST_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_COUNT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_CLEAR_OFFSET))(this);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET))(this, index);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void OnSet(::System::Int32 index, ::System::Object* oldValue, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET))(this, index, oldValue, newValue);
		}

		::System::Void OnInsert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET))(this, index, value);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET))(this, index, value);
		}

		::System::Void OnValidate(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET))(this, value);
		}
	};
}
