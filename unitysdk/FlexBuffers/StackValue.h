#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/BitWidth.h"
#include "unitysdk/FlexBuffers/Type.h"
#include "unitysdk/System/ValueType.h"

#define FLEXBUFFERS_STACKVALUE_ELEMENTWIDTH_OFFSET UNITYSDK_OFFSET(0x955370)
#define FLEXBUFFERS_STACKVALUE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x312A10)
#define FLEXBUFFERS_STACKVALUE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define FLEXBUFFERS_STACKVALUE_GET_ASULONG_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define FLEXBUFFERS_STACKVALUE_GET_INTERNALWIDTH_OFFSET UNITYSDK_OFFSET(0x3AB220)
#define FLEXBUFFERS_STACKVALUE_GET_ISFLOAT32_OFFSET UNITYSDK_OFFSET(0x955380)
#define FLEXBUFFERS_STACKVALUE_GET_ISOFFSET_OFFSET UNITYSDK_OFFSET(0x9553A0)
#define FLEXBUFFERS_STACKVALUE_GET_TYPEOFVALUE_OFFSET UNITYSDK_OFFSET(0x73F270)
#define FLEXBUFFERS_STACKVALUE_NULL_OFFSET UNITYSDK_OFFSET(0x1B20F1A0)
#define FLEXBUFFERS_STACKVALUE_STOREDPACKEDTYPE_OFFSET UNITYSDK_OFFSET(0x955330)
#define FLEXBUFFERS_STACKVALUE_STOREDWIDTH_OFFSET UNITYSDK_OFFSET(0x955310)
#define FLEXBUFFERS_STACKVALUE_VALUE_1_OFFSET UNITYSDK_OFFSET(0x1B20F5D0)
#define FLEXBUFFERS_STACKVALUE_VALUE_2_OFFSET UNITYSDK_OFFSET(0x1B20F7B0)
#define FLEXBUFFERS_STACKVALUE_VALUE_3_OFFSET UNITYSDK_OFFSET(0x1B20F1B0)
#define FLEXBUFFERS_STACKVALUE_VALUE_4_OFFSET UNITYSDK_OFFSET(0x1B20F3E0)
#define FLEXBUFFERS_STACKVALUE_VALUE_5_OFFSET UNITYSDK_OFFSET(0x1B20F3C0)
#define FLEXBUFFERS_STACKVALUE_VALUE_6_OFFSET UNITYSDK_OFFSET(0x1B21C2C0)
#define FLEXBUFFERS_STACKVALUE_VALUE_OFFSET UNITYSDK_OFFSET(0x1B21C2A0)

namespace FlexBuffers
{
	inline static constexpr unsigned int StackValue_TypeDefinitionIndex = 8772;

	struct alignas(8) StackValue
	{
		::System::UInt64 UValue; // 0x10
		::System::Int64 LValue; // 0x10
		::System::Double DValue; // 0x10
		::FlexBuffers::BitWidth Width; // 0x18
		::FlexBuffers::Type ValueType; // 0x19

		static ::FlexBuffers::StackValue Null()
		{
			return ((::FlexBuffers::StackValue(*)())((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_NULL_OFFSET))();
		}

		static ::FlexBuffers::StackValue Value(::System::Single value)
		{
			return ((::FlexBuffers::StackValue(*)(::System::Single))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_OFFSET))(value);
		}

		static ::FlexBuffers::StackValue Value_1(::System::Double value)
		{
			return ((::FlexBuffers::StackValue(*)(::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_1_OFFSET))(value);
		}

		static ::FlexBuffers::StackValue Value_2(::System::Boolean value)
		{
			return ((::FlexBuffers::StackValue(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_2_OFFSET))(value);
		}

		static ::FlexBuffers::StackValue Value_3(::System::Int64 value)
		{
			return ((::FlexBuffers::StackValue(*)(::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_3_OFFSET))(value);
		}

		static ::FlexBuffers::StackValue Value_4(::System::UInt64 value)
		{
			return ((::FlexBuffers::StackValue(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_4_OFFSET))(value);
		}

		static ::FlexBuffers::StackValue Value_5(::System::UInt64 value, ::FlexBuffers::BitWidth width, ::FlexBuffers::Type type)
		{
			return ((::FlexBuffers::StackValue(*)(::System::UInt64, ::FlexBuffers::BitWidth, ::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_5_OFFSET))(value, width, type);
		}

		static ::FlexBuffers::StackValue Value_6(::System::Int64 value, ::FlexBuffers::BitWidth width, ::FlexBuffers::Type type)
		{
			return ((::FlexBuffers::StackValue(*)(::System::Int64, ::FlexBuffers::BitWidth, ::FlexBuffers::Type))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_VALUE_6_OFFSET))(value, width, type);
		}

		::FlexBuffers::BitWidth StoredWidth(::FlexBuffers::BitWidth bitWidth)
		{
			return ((::FlexBuffers::BitWidth(*)(::PVOID, ::FlexBuffers::BitWidth))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_STOREDWIDTH_OFFSET))(this, bitWidth);
		}

		::System::Byte StoredPackedType(::FlexBuffers::BitWidth bitWidth)
		{
			return ((::System::Byte(*)(::PVOID, ::FlexBuffers::BitWidth))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_STOREDPACKEDTYPE_OFFSET))(this, bitWidth);
		}

		::FlexBuffers::BitWidth ElementWidth(::System::UInt64 size, ::System::Int32 index)
		{
			return ((::FlexBuffers::BitWidth(*)(::PVOID, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_ELEMENTWIDTH_OFFSET))(this, size, index);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_ASLONG_OFFSET))(this);
		}

		::System::UInt64 get_AsULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_ASULONG_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_IsFloat32()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_ISFLOAT32_OFFSET))(this);
		}

		::System::Boolean get_IsOffset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_ISOFFSET_OFFSET))(this);
		}

		::FlexBuffers::Type get_TypeOfValue()
		{
			return ((::FlexBuffers::Type(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_TYPEOFVALUE_OFFSET))(this);
		}

		::FlexBuffers::BitWidth get_InternalWidth()
		{
			return ((::FlexBuffers::BitWidth(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_STACKVALUE_GET_INTERNALWIDTH_OFFSET))(this);
		}
	};
}
