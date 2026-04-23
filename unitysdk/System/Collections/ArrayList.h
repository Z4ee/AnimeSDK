#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET UNITYSDK_OFFSET(0x177EB4B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x177EB730)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x177EB5D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x177EB750)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x177EB780)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x177EB7E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x177EB8F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x177EB9E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x177EB8D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x177EB6D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177EBAD0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x177EB2A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x177EB2B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x177EB2C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x177EB2D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x177EB320)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x177EB2E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x177EBC10)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x177EBDE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x177EBC30)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET UNITYSDK_OFFSET(0x177EC120)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET UNITYSDK_OFFSET(0x177EC0A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x177EC280)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x177EC350)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x177EC240)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x177EB1F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x177EB3A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET UNITYSDK_OFFSET(0x177EC510)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x177EC4D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x177EC660)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x177EC620)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x177EC710)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x177EAFB0)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x177EB080)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177EAF70)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_TypeDefinitionIndex = 1448;

	class ArrayList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_emptyArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayList_TypeDefinitionIndex)->GetStaticField(0x4360);
		}
		::System::Object* _syncRoot; // 0x10
		::Il2CppArray<::System::Object*>* _items; // 0x18
		::System::Int32 _size; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET))(this, capacity);
		}

		::System::Void _ctor_2(::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET))(this, c);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET))();
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::System::Collections::ArrayList* Adapter(::System::Collections::IList* list)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET))(list);
		}

		::System::Int32 Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET))(this, c);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET))(this, item);
		}

		::System::Void CopyTo(::System::Array* array)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(this, array);
		}

		::System::Void CopyTo_1(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET))(this, array, arrayIndex);
		}

		::System::Void CopyTo_2(::System::Int32 index, ::System::Array* array, ::System::Int32 arrayIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET))(this, index, array, arrayIndex, count);
		}

		::System::Void EnsureCapacity(::System::Int32 min)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET))(this, min);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void InsertRange(::System::Int32 index, ::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET))(this, index, c);
		}

		static ::System::Collections::IList* ReadOnly(::System::Collections::IList* list)
		{
			return ((::System::Collections::IList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET))(list);
		}

		static ::System::Collections::ArrayList* ReadOnly_1(::System::Collections::ArrayList* list)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET))(list);
		}

		::System::Void Remove(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET))(this, obj);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void RemoveRange(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET))(this, index, count);
		}

		::System::Void Sort(::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET))(this, comparer);
		}

		::System::Void Sort_1(::System::Int32 index, ::System::Int32 count, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET))(this, index, count, comparer);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* type)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET))(this, type);
		}
	};
}
