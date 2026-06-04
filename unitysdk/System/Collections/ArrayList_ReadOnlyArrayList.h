#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ArrayList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x185A8D00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x185A8CA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x185A8DC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x185A8E20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185A8F10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x185A8F70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x185A8F40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185A8FB0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185A8B60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x185A8BA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x185A8B90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185A8BB0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A8BE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185A8C70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x185A8FE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x185A9070)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x185A9010)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x185A9130)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x185A9190)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x185A90D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x185A8D60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A8C10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x185A91F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x185A9280)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x185A9250)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x185A6060)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ReadOnlyArrayList_TypeDefinitionIndex = 1450;

	class ArrayList_ReadOnlyArrayList : public ::System::Collections::ArrayList
	{
	public:
		::System::Collections::ArrayList* _list; // 0x28

		::System::Void _ctor(::System::Collections::ArrayList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void AddRange(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTo_1(::System::Int32 a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void InsertRange(::System::Int32 a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERTRANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void RemoveRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SORT_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* a1)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_1_OFFSET))(this, a1);
		}
	};
}
