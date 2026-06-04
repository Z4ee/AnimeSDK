#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_COLLECTIONBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x185AB480)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185AC310)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185AB460)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_INNERLIST_OFFSET UNITYSDK_OFFSET(0x185AB3F0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_GET_LIST_OFFSET UNITYSDK_OFFSET(0x185AB450)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEARCOMPLETE_OFFSET UNITYSDK_OFFSET(0x185AC440)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x185AC3A0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x185AC430)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET UNITYSDK_OFFSET(0x185AC390)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVECOMPLETE_OFFSET UNITYSDK_OFFSET(0x185AC450)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x185AC3B0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x185AC420)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET UNITYSDK_OFFSET(0x185AC380)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x185AC3C0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x185AB500)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x185AB8F0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185AB810)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185AB880)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x185ABD40)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185ABCD0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x185AB7A0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x185AB730)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185AB970)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x185AC0E0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x185AC150)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x185ABEF0)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185ABA70)
#define SYSTEM_COLLECTIONS_COLLECTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x185AB3A0)

namespace System::Collections
{
	inline static constexpr unsigned int CollectionBase_TypeDefinitionIndex = 1456;

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

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_REMOVEAT_OFFSET))(this, a1);
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

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void OnSet(::System::Int32 a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInsert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERT_OFFSET))(this, a1, a2);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void OnValidate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONVALIDATE_OFFSET))(this, a1);
		}

		::System::Void OnSetComplete(::System::Int32 a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONSETCOMPLETE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInsertComplete(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONINSERTCOMPLETE_OFFSET))(this, a1, a2);
		}

		::System::Void OnClearComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONCLEARCOMPLETE_OFFSET))(this);
		}

		::System::Void OnRemoveComplete(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_COLLECTIONBASE_ONREMOVECOMPLETE_OFFSET))(this, a1, a2);
		}
	};
}
