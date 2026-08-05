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

#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1CD325E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADD_OFFSET UNITYSDK_OFFSET(0x1CD324F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CD32A80)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLONE_OFFSET UNITYSDK_OFFSET(0x1CD32C50)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CD32D50)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1CD32F20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_OFFSET UNITYSDK_OFFSET(0x1CD32E40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD33350)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CD31EC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1CD32080)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1CD31FA0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1CD32160)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD32240)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1CD32410)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1CD33430)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x1CD32610)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERT_OFFSET UNITYSDK_OFFSET(0x1CD33520)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1CD33640)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1CD33730)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CD33610)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1CD31E40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD32320)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SORT_OFFSET UNITYSDK_OFFSET(0x1CD33970)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x1CD33D30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1CD33C40)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD31D80)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_IListWrapper_TypeDefinitionIndex = 1446;

	class ArrayList_IListWrapper : public ::System::Collections::ArrayList
	{
	public:
		::System::Collections::IList* _list; // 0x28

		::System::Void _ctor(::System::Collections::IList* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER__CTOR_OFFSET))(this, list);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_CAPACITY_OFFSET))(this, value);
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

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADD_OFFSET))(this, obj);
		}

		::System::Void AddRange(::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_ADDRANGE_OFFSET))(this, c);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_CONTAINS_OFFSET))(this, obj);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void CopyTo_1(::System::Int32 index, ::System::Array* array, ::System::Int32 arrayIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_COPYTO_1_OFFSET))(this, index, array, arrayIndex, count);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERT_OFFSET))(this, index, obj);
		}

		::System::Void InsertRange(::System::Int32 index, ::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_INSERTRANGE_OFFSET))(this, index, c);
		}

		::System::Void Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void RemoveRange(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_REMOVERANGE_OFFSET))(this, index, count);
		}

		::System::Void Sort(::System::Int32 index, ::System::Int32 count, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_SORT_OFFSET))(this, index, count, comparer);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* type)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ILISTWRAPPER_TOARRAY_1_OFFSET))(this, type);
		}
	};
}
