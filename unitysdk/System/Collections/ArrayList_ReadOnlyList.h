#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1C9CCEA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9CCF00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C9CCF60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C9CD070)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9CD1B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C9CC990)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1C9CCAD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C9CCAC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C9CCAE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9CCC10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C9CCD70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C9CD2B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1C9CD3C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1C9CD480)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C9CD420)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9CCD10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C86B0)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ReadOnlyList_TypeDefinitionIndex = 1460;

	class ArrayList_ReadOnlyList : public ::System::Object
	{
	public:
		::System::Collections::IList* _list; // 0x10

		::System::Void _ctor(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVEAT_OFFSET))(this, a1);
		}
	};
}
