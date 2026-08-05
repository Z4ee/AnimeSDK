#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define FLEXBUFFERS_NATIVEBYTEARRAY_ASSERT_OFFSET UNITYSDK_OFFSET(0x1E9E41D0)
#define FLEXBUFFERS_NATIVEBYTEARRAY_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1E9E4820)
#define FLEXBUFFERS_NATIVEBYTEARRAY_COMPUTEINDIRECTOFFSET_OFFSET UNITYSDK_OFFSET(0x1E9E4950)
#define FLEXBUFFERS_NATIVEBYTEARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E9E4970)
#define FLEXBUFFERS_NATIVEBYTEARRAY_GET_DATA_OFFSET UNITYSDK_OFFSET(0x1E9E41C0)
#define FLEXBUFFERS_NATIVEBYTEARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E9E40B0)
#define FLEXBUFFERS_NATIVEBYTEARRAY_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E9E41B0)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READBYTE_OFFSET UNITYSDK_OFFSET(0x1E9E4130)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E9E4500)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READLONG_OFFSET UNITYSDK_OFFSET(0x1E9E4380)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READSPANBYTES_OFFSET UNITYSDK_OFFSET(0x1E9E4740)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E45F0)
#define FLEXBUFFERS_NATIVEBYTEARRAY_READULONG_OFFSET UNITYSDK_OFFSET(0x1E9E4440)
#define FLEXBUFFERS_NATIVEBYTEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DECE0)

namespace FlexBuffers
{
	inline static constexpr unsigned int NativeByteArray_TypeDefinitionIndex = 6754;

	class NativeByteArray : public ::System::Object
	{
	public:
		::UnityEngine::TextAsset* _buffer; // 0x10
		::System::IntPtr _data; // 0x18
		::System::Boolean m_Disposed; // 0x20
		::System::Int32 _lenght; // 0x24

		::System::Void _ctor(::UnityEngine::TextAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY__CTOR_OFFSET))(this, asset);
		}

		::System::Byte get_Item(::System::Int32 index)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_GET_LENGTH_OFFSET))(this);
		}

		::System::IntPtr get_data()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_GET_DATA_OFFSET))(this);
		}

		::System::Void Assert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_ASSERT_OFFSET))(this);
		}

		::System::Byte ReadByte(::System::Int32 offset)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READBYTE_OFFSET))(this, offset);
		}

		::System::Int64 ReadLong(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READLONG_OFFSET))(this, offset, width);
		}

		::System::UInt64 ReadULong(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READULONG_OFFSET))(this, offset, width);
		}

		::System::Double ReadDouble(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READDOUBLE_OFFSET))(this, offset, width);
		}

		::System::String* ReadString(::System::Int32 offset, ::System::Int32 byteCount)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READSTRING_OFFSET))(this, offset, byteCount);
		}

		::System::Span_1<::System::Byte> ReadSpanBytes(::System::Int32 offset, ::System::Int32 byteCount)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_READSPANBYTES_OFFSET))(this, offset, byteCount);
		}

		::System::Void BlockCopy(::System::Int32 srcOffset, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_BLOCKCOPY_OFFSET))(this, srcOffset, dst, offset, count);
		}

		::System::Int32 ComputeIndirectOffset(::System::Int32 offset, ::System::Byte width)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_COMPUTEINDIRECTOFFSET_OFFSET))(this, offset, width);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_NATIVEBYTEARRAY_DISPOSE_OFFSET))(this);
		}
	};
}
