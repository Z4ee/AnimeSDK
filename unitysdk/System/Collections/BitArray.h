#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x1AD3BCC0)
#define SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x1AD3B730)
#define SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1AD3B090)
#define SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AD3BD80)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AD3BCB0)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1AD3BD70)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD3B330)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AD3B5B0)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET UNITYSDK_OFFSET(0x1AD3B3B0)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1AD3BD30)
#define SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET UNITYSDK_OFFSET(0x1AD3B4F0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AD3B430)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1AD3B5C0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET UNITYSDK_OFFSET(0x1AD3B440)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AD3AF90)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AD3AFA0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AD3B0B0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AD3B280)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3AF80)

namespace System::Collections
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 1456;

	class BitArray : public ::System::Object
	{
	public:
		::System::Object* _syncRoot; // 0x10
		::Il2CppArray<::System::Int32>* m_array; // 0x18
		::System::Int32 m_length; // 0x20
		::System::Int32 _version; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::Collections::BitArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_4_OFFSET))(this, a1);
		}

		::System::Boolean get_Item(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean Get(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET))(this, a1);
		}

		::System::Void Set(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET))(this, a1, a2);
		}

		::System::Void SetAll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET))(this, a1);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET))(this);
		}

		static ::System::Int32 GetArrayLength(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET))(a1, a2);
		}
	};
}
