#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ArrayList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x185A7030)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADD_OFFSET UNITYSDK_OFFSET(0x185A6F70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x185A7630)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLONE_OFFSET UNITYSDK_OFFSET(0x185A7800)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x185A7890)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x185A7A00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_OFFSET UNITYSDK_OFFSET(0x185A7950)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185A7E60)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185A6A80)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x185A6BE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x185A6B30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185A6C90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A6D40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185A6EC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x185A7F10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x185A70F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERT_OFFSET UNITYSDK_OFFSET(0x185A7FD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x185A8200)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x185A82C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVE_OFFSET UNITYSDK_OFFSET(0x185A80A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x185A6960)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A6DF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SORT_OFFSET UNITYSDK_OFFSET(0x185A8500)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x185A8950)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x185A87F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x185A5450)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_IListWrapper_TypeDefinitionIndex = 1448;

	class ArrayList_IListWrapper : public ::System::Collections::ArrayList
	{
	public:
		::System::Collections::IList* _list; // 0x28

		::System::Void _ctor(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_CAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADD_OFFSET))(this, a1);
		}

		::System::Void AddRange(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTo_1(::System::Int32 a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void InsertRange(::System::Int32 a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERTRANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void RemoveRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SORT_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* a1)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_1_OFFSET))(this, a1);
		}
	};
}
