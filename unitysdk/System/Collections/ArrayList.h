#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET UNITYSDK_OFFSET(0x1C9C76C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x1C9C7A00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x1C9C77E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9C7A90)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1C9C7AC0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1C9C7B20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x1C9C7D00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET UNITYSDK_OFFSET(0x1C9C7DF0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C9C7C70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x1C9C7930)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C9C7EE0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C9C74F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1C9C7500)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C9C7510)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1C9C7520)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9C7570)
#define SYSTEM_COLLECTIONS_ARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1C9C7530)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C9C8010)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x1C9C8240)
#define SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1C9C8030)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET UNITYSDK_OFFSET(0x1C9C86C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET UNITYSDK_OFFSET(0x1C9C8650)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1C9C88F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x1C9C89B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1C9C87E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x1C9C7440)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1C9C75E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET UNITYSDK_OFFSET(0x1C9C8C20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x1C9C8B20)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C9C8D70)
#define SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1C9C8D30)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9C8E10)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9C7140)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C9C7210)
#define SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C7100)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_TypeDefinitionIndex = 1458;

	class ArrayList : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_emptyArray()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ArrayList_TypeDefinitionIndex)->GetStaticField(0x7980);
		}
		::Il2CppArray<::System::Object*>* _items; // 0x10
		::System::Object* _syncRoot; // 0x18
		::System::Int32 _size; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST__CCTOR_OFFSET))();
		}

		::System::Void set_Capacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_CAPACITY_OFFSET))(this, a1);
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

		::System::Object* get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::ArrayList* Adapter(::System::Collections::IList* a1)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADAPTER_OFFSET))(a1);
		}

		::System::Int32 Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADD_OFFSET))(this, a1);
		}

		::System::Void AddRange(::System::Collections::ICollection* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ADDRANGE_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyTo_1(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_1_OFFSET))(this, a1, a2);
		}

		::System::Void CopyTo_2(::System::Int32 a1, ::System::Array* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_COPYTO_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnsureCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_ENSURECAPACITY_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void InsertRange(::System::Int32 a1, ::System::Collections::ICollection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_INSERTRANGE_OFFSET))(this, a1, a2);
		}

		static ::System::Collections::IList* ReadOnly(::System::Collections::IList* a1)
		{
			return ((::System::Collections::IList*(*)(::System::Collections::IList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_OFFSET))(a1);
		}

		static ::System::Collections::ArrayList* ReadOnly_1(::System::Collections::ArrayList* a1)
		{
			return ((::System::Collections::ArrayList*(*)(::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLY_1_OFFSET))(a1);
		}

		::System::Void Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void RemoveRange(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_REMOVERANGE_OFFSET))(this, a1, a2);
		}

		::System::Void Sort(::System::Collections::IComparer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_OFFSET))(this, a1);
		}

		::System::Void Sort_1(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::IComparer* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_SORT_1_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* a1)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_TOARRAY_1_OFFSET))(this, a1);
		}
	};
}
