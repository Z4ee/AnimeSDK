#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDBYTES_OFFSET UNITYSDK_OFFSET(0x887060)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDBYTE_OFFSET UNITYSDK_OFFSET(0x886EE0)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDINT_OFFSET UNITYSDK_OFFSET(0x886E10)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDSHORT_OFFSET UNITYSDK_OFFSET(0x886E80)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_CLEAR_OFFSET UNITYSDK_OFFSET(0x886DB0)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x886A50)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GETCONTINUEHASHCODE_OFFSET UNITYSDK_OFFSET(0x886C70)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GETHASHCODESLICE_OFFSET UNITYSDK_OFFSET(0x886B60)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x886B50)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_DATASPAN_OFFSET UNITYSDK_OFFSET(0x886A30)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_DATA_OFFSET UNITYSDK_OFFSET(0x886A10)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_HEADERSIZE_OFFSET UNITYSDK_OFFSET(0x18C17AB0)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_LAZYCLEAR_OFFSET UNITYSDK_OFFSET(0x886DC0)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_READINT_OFFSET UNITYSDK_OFFSET(0x887000)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_SETINT_OFFSET UNITYSDK_OFFSET(0x886FA0)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_SETSHORT_OFFSET UNITYSDK_OFFSET(0x886F40)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE_SET_DATA_OFFSET UNITYSDK_OFFSET(0x886A20)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE__GETTOTAL_OFFSET UNITYSDK_OFFSET(0x886A80)
#define OCTREE_NATIVE_DNATIVESIZEAREANODE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x887070)

namespace Octree::Native
{
	inline static constexpr unsigned int DNativeSizeAreaNode_TypeDefinitionIndex = 49881;

	struct alignas(8) DNativeSizeAreaNode
	{
		::System::Int32 dataSize; // 0x10
		::System::Int32 areaOffset; // 0x14
		::System::Int16 nodeOffset; // 0x18
		::System::Byte* data; // 0x1A

		static ::System::Int32 get_HeaderSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_HEADERSIZE_OFFSET))();
		}

		::System::Byte* get_Data()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_DATA_OFFSET))(this);
		}

		::System::Void set_Data(::System::Byte* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_SET_DATA_OFFSET))(this, value);
		}

		/*
		::System::ReadOnlySpan_1<::System::Byte> get_DataSpan()
		{
			return ((::System::ReadOnlySpan_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GET_DATASPAN_OFFSET))(this);
		}
		*/

		::System::Boolean Equals(::Octree::Native::DNativeSizeAreaNode other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Octree::Native::DNativeSizeAreaNode))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 _GetTotal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE__GETTOTAL_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCodeSlice(::System::Int32 seed, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GETHASHCODESLICE_OFFSET))(this, seed, count);
		}

		::System::Int32 GetContinueHashCode(::System::Int32 seed)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_GETCONTINUEHASHCODE_OFFSET))(this, seed);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_CLEAR_OFFSET))(this);
		}

		::System::Void LazyClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_LAZYCLEAR_OFFSET))(this);
		}

		::System::Void AddInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDINT_OFFSET))(this, value);
		}

		::System::Void AddShort(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDSHORT_OFFSET))(this, value);
		}

		::System::Void AddByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDBYTE_OFFSET))(this, value);
		}

		::System::Void SetShort(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_SETSHORT_OFFSET))(this, value);
		}

		::System::Void SetInt(::System::Int32 val, ::System::Int16 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int16))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_SETINT_OFFSET))(this, val, offset);
		}

		::System::Int32 ReadInt(::System::Int16 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_READINT_OFFSET))(this, offset);
		}

		/*
		::System::Void AddBytes(::System::ReadOnlySpan_1<::System::Byte>& values)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE_ADDBYTES_OFFSET))(this, values);
		}
		*/

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCTREE_NATIVE_DNATIVESIZEAREANODE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
