#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_BITARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x161C4D60)
#define SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET UNITYSDK_OFFSET(0x161C47E0)
#define SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x161C4170)
#define SYSTEM_COLLECTIONS_BITARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x161C4E00)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x161C4D50)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x161C4DF0)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C4410)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x161C4650)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET UNITYSDK_OFFSET(0x161C4420)
#define SYSTEM_COLLECTIONS_BITARRAY_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x161C4DB0)
#define SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET UNITYSDK_OFFSET(0x161C4590)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x161C44B0)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x161C4660)
#define SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET UNITYSDK_OFFSET(0x161C44C0)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x161C4070)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x161C4080)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x161C4190)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_4_OFFSET UNITYSDK_OFFSET(0x161C4360)
#define SYSTEM_COLLECTIONS_BITARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x161C4060)

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

		::System::Void _ctor_1(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_1_OFFSET))(this, length);
		}

		::System::Void _ctor_2(::System::Int32 length, ::System::Boolean defaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_2_OFFSET))(this, length, defaultValue);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Int32>* values)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_3_OFFSET))(this, values);
		}

		::System::Void _ctor_4(::System::Collections::BitArray* bits)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::BitArray*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY__CTOR_4_OFFSET))(this, bits);
		}

		::System::Boolean get_Item(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean Get(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_OFFSET))(this, index);
		}

		::System::Void Set(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_OFFSET))(this, index, value);
		}

		::System::Void SetAll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SETALL_OFFSET))(this, value);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_COPYTO_OFFSET))(this, array, index);
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

		static ::System::Int32 GetArrayLength(::System::Int32 n, ::System::Int32 div)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_BITARRAY_GETARRAYLENGTH_OFFSET))(n, div);
		}
	};
}
