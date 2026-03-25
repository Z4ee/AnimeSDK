#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x161C3BA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x161C3C00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x161C3C60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x161C3D20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161C3DD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161C3860)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x161C3920)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x161C3910)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161C3930)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C39E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161C3AF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x161C3E80)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x161C3F40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x161C4000)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x161C3FA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C3A90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x161C0560)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ReadOnlyList_TypeDefinitionIndex = 1449;

	class ArrayList_ReadOnlyList : public ::System::Object
	{
	public:
		::System::Collections::IList* _list; // 0x10

		::System::Void _ctor(::System::Collections::IList* l)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST__CTOR_OFFSET))(this, l);
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

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_ADD_OFFSET))(this, obj);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_CONTAINS_OFFSET))(this, obj);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_INSERT_OFFSET))(this, index, obj);
		}

		::System::Void Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYLIST_REMOVEAT_OFFSET))(this, index);
		}
	};
}
