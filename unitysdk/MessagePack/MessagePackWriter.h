#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/BufferWriter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class SequencePool; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }

#define MESSAGEPACK_MESSAGEPACKWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x229A600)
#define MESSAGEPACK_MESSAGEPACKWRITER_ASSUMESTRUE_OFFSET UNITYSDK_OFFSET(0x1737EE30)
#define MESSAGEPACK_MESSAGEPACKWRITER_CLONE_OFFSET UNITYSDK_OFFSET(0x229A0E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_FLUSHANDGETARRAY_OFFSET UNITYSDK_OFFSET(0x229A680)
#define MESSAGEPACK_MESSAGEPACKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x22989A0)
#define MESSAGEPACK_MESSAGEPACKWRITER_GETENCODEDLENGTH_OFFSET UNITYSDK_OFFSET(0x173818B0)
#define MESSAGEPACK_MESSAGEPACKWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x2298950)
#define MESSAGEPACK_MESSAGEPACKWRITER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0xD0E90)
#define MESSAGEPACK_MESSAGEPACKWRITER_GET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x229A0C0)
#define MESSAGEPACK_MESSAGEPACKWRITER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x5B9F0)
#define MESSAGEPACK_MESSAGEPACKWRITER_SET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x229A0D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_1_OFFSET UNITYSDK_OFFSET(0x229A310)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x229A2D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x173814F0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x173814E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBINHEADER_OFFSET UNITYSDK_OFFSET(0x229A590)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x229A5F0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x229A3E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x229A420)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x229A460)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT8_OFFSET UNITYSDK_OFFSET(0x229A3A0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_1_OFFSET UNITYSDK_OFFSET(0x229A360)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_OFFSET UNITYSDK_OFFSET(0x229A320)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITENIL_OFFSET UNITYSDK_OFFSET(0x229A180)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x229A190)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x2298A30)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x229A5D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x229A5A0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_POSTENCODING_OFFSET UNITYSDK_OFFSET(0x229A7A0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_PREPARESPAN_OFFSET UNITYSDK_OFFSET(0x229A690)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x229A3C0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x229A400)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x229A440)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT8_OFFSET UNITYSDK_OFFSET(0x229A380)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x229A490)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x229A4A0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x229A4B0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x229A4C0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x229A560)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_15_OFFSET UNITYSDK_OFFSET(0x229A5E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x229A390)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x229A3B0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x229A3D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x229A3F0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x229A410)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x229A430)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x229A450)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x229A470)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x229A480)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x229A370)
#define MESSAGEPACK_MESSAGEPACKWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x229A020)
#define MESSAGEPACK_MESSAGEPACKWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x2299F80)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackWriter_TypeDefinitionIndex = 9283;

	struct alignas(8) MessagePackWriter
	{
		::MessagePack::BufferWriter writer; // 0x10
		::System::Threading::CancellationToken _CancellationToken_k__BackingField; // 0x68
		::System::Boolean _OldSpec_k__BackingField; // 0x70

		::System::Void _ctor(::System::Buffers::IBufferWriter_1<::System::Byte>* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER__CTOR_OFFSET))(this, writer);
		}

		::System::Void _ctor_1(::MessagePack::SequencePool* sequencePool, ::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::SequencePool*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER__CTOR_1_OFFSET))(this, sequencePool, array);
		}

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_SET_CANCELLATIONTOKEN_OFFSET))(this, value);
		}

		::System::Boolean get_OldSpec()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GET_OLDSPEC_OFFSET))(this);
		}

		::System::Void set_OldSpec(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_SET_OLDSPEC_OFFSET))(this, value);
		}

		::MessagePack::MessagePackWriter Clone(::System::Buffers::IBufferWriter_1<::System::Byte>* writer)
		{
			return ((::MessagePack::MessagePackWriter(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_CLONE_OFFSET))(this, writer);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void WriteNil()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITENIL_OFFSET))(this);
		}

		/*
		::System::Void WriteRaw(::System::ReadOnlySpan_1<::System::Byte> rawMessagePackBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_OFFSET))(this, rawMessagePackBlock);
		}
		*/

		/*
		::System::Void WriteRaw_1(::System::Buffers::ReadOnlySequence_1<::System::Byte>& rawMessagePackBlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_1_OFFSET))(this, rawMessagePackBlock);
		}
		*/

		::System::Void WriteArrayHeader(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_OFFSET))(this, count);
		}

		::System::Void WriteArrayHeader_1(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_1_OFFSET))(this, count);
		}

		::System::Void WriteMapHeader(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_OFFSET))(this, count);
		}

		::System::Void WriteMapHeader_1(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_1_OFFSET))(this, count);
		}

		::System::Void Write(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_OFFSET))(this, value);
		}

		::System::Void WriteUInt8(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT8_OFFSET))(this, value);
		}

		::System::Void Write_1(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_1_OFFSET))(this, value);
		}

		::System::Void WriteInt8(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT8_OFFSET))(this, value);
		}

		::System::Void Write_2(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_2_OFFSET))(this, value);
		}

		::System::Void WriteUInt16(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT16_OFFSET))(this, value);
		}

		::System::Void Write_3(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_3_OFFSET))(this, value);
		}

		::System::Void WriteInt16(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT16_OFFSET))(this, value);
		}

		::System::Void Write_4(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_4_OFFSET))(this, value);
		}

		::System::Void WriteUInt32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT32_OFFSET))(this, value);
		}

		::System::Void Write_5(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_5_OFFSET))(this, value);
		}

		::System::Void WriteInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT32_OFFSET))(this, value);
		}

		::System::Void Write_6(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_6_OFFSET))(this, value);
		}

		::System::Void WriteUInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT64_OFFSET))(this, value);
		}

		::System::Void Write_7(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_7_OFFSET))(this, value);
		}

		::System::Void WriteInt64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT64_OFFSET))(this, value);
		}

		::System::Void Write_8(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_8_OFFSET))(this, value);
		}

		::System::Void Write_9(::System::Char value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_9_OFFSET))(this, value);
		}

		::System::Void Write_10(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_10_OFFSET))(this, value);
		}

		::System::Void Write_11(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_11_OFFSET))(this, value);
		}

		/*
		::System::Void Write_12(::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_12_OFFSET))(this, dateTime);
		}
		*/

		::System::Void Write_13(::Il2CppArray<::System::Byte>* src)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_13_OFFSET))(this, src);
		}

		/*
		::System::Void Write_14(::System::ReadOnlySpan_1<::System::Byte> src)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_14_OFFSET))(this, src);
		}
		*/

		::System::Void WriteBinHeader(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBINHEADER_OFFSET))(this, length);
		}

		/*
		::System::Void WriteString(::System::ReadOnlySpan_1<::System::Byte> utf8stringBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_OFFSET))(this, utf8stringBytes);
		}
		*/

		::System::Void WriteStringHeader(::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRINGHEADER_OFFSET))(this, byteCount);
		}

		::System::Void Write_15(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_15_OFFSET))(this, value);
		}

		/*
		::System::Void WriteExtensionFormatHeader(::MessagePack::ExtensionHeader extensionHeader)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMATHEADER_OFFSET))(this, extensionHeader);
		}
		*/

		/*
		::System::Span_1<::System::Byte> GetSpan(::System::Int32 length)
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GETSPAN_OFFSET))(this, length);
		}
		*/

		::System::Void Advance(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_ADVANCE_OFFSET))(this, length);
		}

		::Il2CppArray<::System::Byte>* FlushAndGetArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_FLUSHANDGETARRAY_OFFSET))(this);
		}

		static ::System::Void WriteBigEndian(::System::UInt16 value, ::System::Byte* span)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_OFFSET))(value, span);
		}

		static ::System::Void WriteBigEndian_1(::System::UInt32 value, ::System::Byte* span)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_1_OFFSET))(value, span);
		}

		::System::Byte& WriteString_PrepareSpan(::System::Int32 characterLength, ::System::Int32& bufferSize, ::System::Int32& encodedBytesOffset)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_PREPARESPAN_OFFSET))(this, characterLength, bufferSize, encodedBytesOffset);
		}

		::System::Void WriteString_PostEncoding(::System::Byte* pBuffer, ::System::Int32 estimatedOffset, ::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_POSTENCODING_OFFSET))(this, pBuffer, estimatedOffset, byteCount);
		}

		static ::System::Int32 GetEncodedLength(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GETENCODEDLENGTH_OFFSET))(value);
		}

		static ::System::Void AssumesTrue(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_ASSUMESTRUE_OFFSET))(condition);
		}
	};
}
