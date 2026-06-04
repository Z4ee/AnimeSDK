#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x185AA7A0)
#define SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x185AA210)
#define SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x185A9BC0)
#define SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x185AA840)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x185AA790)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x185AA830)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A9E60)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185AA090)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET UNITYSDK_OFFSET(0x185A9E70)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x185AA7F0)
#define SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET UNITYSDK_OFFSET(0x185A9FD0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x185A9F10)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x185AA0A0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET UNITYSDK_OFFSET(0x185A9F20)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185A9AC0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x185A9AD0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x185A9BE0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x185A9DB0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x185A9AB0)

namespace System::Collections
{
	inline static constexpr unsigned int BitArray_TypeDefinitionIndex = 1452;

	class BitArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_array; // 0x10
		::System::Object* _syncRoot; // 0x18
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
