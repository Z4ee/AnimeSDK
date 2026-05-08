#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define FLEXBUFFERS_BYTEARRAY_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1B20BAC0)
#define FLEXBUFFERS_BYTEARRAY_COMPUTEINDIRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1B20BAD0)
#define FLEXBUFFERS_BYTEARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B20BAF0)
#define FLEXBUFFERS_BYTEARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B20B3C0)
#define FLEXBUFFERS_BYTEARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1B20B400)
#define FLEXBUFFERS_BYTEARRAY_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1B20B760)
#define FLEXBUFFERS_BYTEARRAY_READLONG_OFFSET UNITYSDK_OFFSET(0x1B20B430)
#define FLEXBUFFERS_BYTEARRAY_READSPANBYTES_OFFSET UNITYSDK_OFFSET(0x1B20B9C0)
#define FLEXBUFFERS_BYTEARRAY_READSTRING_OFFSET UNITYSDK_OFFSET(0x1B20B8C0)
#define FLEXBUFFERS_BYTEARRAY_READULONG_OFFSET UNITYSDK_OFFSET(0x1B20B5B0)
#define FLEXBUFFERS_BYTEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B20B420)

namespace FlexBuffers
{
	inline static constexpr unsigned int ByteArray_TypeDefinitionIndex = 8762;

	class ByteArray : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* data; // 0x10

		::System::Void _ctor(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY__CTOR_OFFSET))(this, bytes);
		}

		::System::Byte get_Item(::System::Int32 index)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 ReadLong(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_READLONG_OFFSET))(this, offset, width);
		}

		::System::UInt64 ReadULong(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_READULONG_OFFSET))(this, offset, width);
		}

		::System::Double ReadDouble(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_READDOUBLE_OFFSET))(this, offset, width);
		}

		::System::String* ReadString(::System::Int32 offset, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_READSTRING_OFFSET))(this, offset, byteCount);
		}

		::System::Span_1<::System::Byte> ReadSpanBytes(::System::Int32 offset, ::System::Int32 byteCount)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_READSPANBYTES_OFFSET))(this, offset, byteCount);
		}

		::System::Void BlockCopy(::System::Int32 srcOffset, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dstOffset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_BLOCKCOPY_OFFSET))(this, srcOffset, dst, dstOffset, count);
		}

		::System::Int32 ComputeIndirectOffset(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_COMPUTEINDIRECTOFFSET_OFFSET))(this, offset, width);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BYTEARRAY_DISPOSE_OFFSET))(this);
		}
	};
}
