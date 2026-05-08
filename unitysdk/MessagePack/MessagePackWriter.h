#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/GraphBufferWriter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace System { class String; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }

#define MESSAGEPACK_MESSAGEPACKWRITER_ADVANCE_OFFSET UNITYSDK_OFFSET(0x8870D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_CLONE_OFFSET UNITYSDK_OFFSET(0x886A30)
#define MESSAGEPACK_MESSAGEPACKWRITER_DIRECTSET_1_OFFSET UNITYSDK_OFFSET(0x886B30)
#define MESSAGEPACK_MESSAGEPACKWRITER_DIRECTSET_OFFSET UNITYSDK_OFFSET(0x886AB0)
#define MESSAGEPACK_MESSAGEPACKWRITER_FLUSHANDGETARRAY_OFFSET UNITYSDK_OFFSET(0x304470)
#define MESSAGEPACK_MESSAGEPACKWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x2661E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_GETRAWSPAN_OFFSET UNITYSDK_OFFSET(0x886BF0)
#define MESSAGEPACK_MESSAGEPACKWRITER_GETSPAN_OFFSET UNITYSDK_OFFSET(0x887060)
#define MESSAGEPACK_MESSAGEPACKWRITER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x6E78D0)
#define MESSAGEPACK_MESSAGEPACKWRITER_GET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x886A10)
#define MESSAGEPACK_MESSAGEPACKWRITER_GET_WRITEPOSITION_OFFSET UNITYSDK_OFFSET(0x886A90)
#define MESSAGEPACK_MESSAGEPACKWRITER_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x19859170)
#define MESSAGEPACK_MESSAGEPACKWRITER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x6E78E0)
#define MESSAGEPACK_MESSAGEPACKWRITER_SET_OLDSPEC_OFFSET UNITYSDK_OFFSET(0x886A20)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_1_OFFSET UNITYSDK_OFFSET(0x886DC0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x886DC0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_10_OFFSET UNITYSDK_OFFSET(0x19856850)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_11_OFFSET UNITYSDK_OFFSET(0x19856EA0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_12_OFFSET UNITYSDK_OFFSET(0x19857000)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x887130)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x887140)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x19855C50)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x19854B50)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x19856E60)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_6_OFFSET UNITYSDK_OFFSET(0x19855020)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_7_OFFSET UNITYSDK_OFFSET(0x19858E10)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_8_OFFSET UNITYSDK_OFFSET(0x19855080)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_9_OFFSET UNITYSDK_OFFSET(0x19858E20)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x887120)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEBINHEADER_OFFSET UNITYSDK_OFFSET(0x886F70)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x887010)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMAT_OFFSET UNITYSDK_OFFSET(0x887020)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT16_OFFSET UNITYSDK_OFFSET(0x886E50)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x886E90)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x886ED0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEINT8_OFFSET UNITYSDK_OFFSET(0x886E10)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_1_OFFSET UNITYSDK_OFFSET(0x886DD0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEMAPHEADER_OFFSET UNITYSDK_OFFSET(0x886DD0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITENIL_OFFSET UNITYSDK_OFFSET(0x886C40)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x886C80)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x886C50)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x886FC0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_1_OFFSET UNITYSDK_OFFSET(0x886F90)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x886F80)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_POSTENCODING_OFFSET UNITYSDK_OFFSET(0x887160)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_PREPARESPAN_OFFSET UNITYSDK_OFFSET(0x887150)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT16_OFFSET UNITYSDK_OFFSET(0x886E30)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x886E70)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x886EB0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITEUINT8_OFFSET UNITYSDK_OFFSET(0x886DF0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_10_OFFSET UNITYSDK_OFFSET(0x886EF0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_11_OFFSET UNITYSDK_OFFSET(0x886F00)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_12_OFFSET UNITYSDK_OFFSET(0x886F10)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_13_OFFSET UNITYSDK_OFFSET(0x886F20)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_14_OFFSET UNITYSDK_OFFSET(0x886F30)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_15_OFFSET UNITYSDK_OFFSET(0x886F60)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_16_OFFSET UNITYSDK_OFFSET(0x886FD0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_17_OFFSET UNITYSDK_OFFSET(0x886FE0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x886E00)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x886E20)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_3_OFFSET UNITYSDK_OFFSET(0x886E40)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_4_OFFSET UNITYSDK_OFFSET(0x886E60)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_5_OFFSET UNITYSDK_OFFSET(0x886E80)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_6_OFFSET UNITYSDK_OFFSET(0x886EA0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_7_OFFSET UNITYSDK_OFFSET(0x886EC0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_8_OFFSET UNITYSDK_OFFSET(0x886EE0)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_9_OFFSET UNITYSDK_OFFSET(0x886E20)
#define MESSAGEPACK_MESSAGEPACKWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x886DE0)
#define MESSAGEPACK_MESSAGEPACKWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x886940)
#define MESSAGEPACK_MESSAGEPACKWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x886900)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackWriter_TypeDefinitionIndex = 27430;

	struct alignas(8) MessagePackWriter
	{
		::MessagePack::GraphBufferWriter writer; // 0x10
		::System::Threading::CancellationToken _CancellationToken_k__BackingField; // 0x98
		::System::Boolean _OldSpec_k__BackingField; // 0xA0

		::System::Void _ctor(::System::Buffers::IBufferWriter_1<::System::Byte>* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER__CTOR_OFFSET))(this, writer);
		}

		::System::Void _ctor_1(::MessagePack::GraphMemoryStreamBufferWriter* msWriter)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::GraphMemoryStreamBufferWriter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER__CTOR_1_OFFSET))(this, msWriter);
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

		::System::Int64 get_WritePosition()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GET_WRITEPOSITION_OFFSET))(this);
		}

		::System::Boolean DirectSet(::System::Int32 position, ::System::Byte val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_DIRECTSET_OFFSET))(this, position, val);
		}

		::System::Void DirectSet_1(::System::Int32 position, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_DIRECTSET_1_OFFSET))(this, position, value);
		}

		/*
		::System::Span_1<::System::Byte> GetRawSpan()
		{
			return ((::System::Span_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_GETRAWSPAN_OFFSET))(this);
		}
		*/

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

		/*
		::System::Void Write_15(::System::Buffers::ReadOnlySequence_1<::System::Byte>& src)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_15_OFFSET))(this, src);
		}
		*/

		::System::Void WriteBinHeader(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBINHEADER_OFFSET))(this, length);
		}

		/*
		::System::Void WriteString(::System::Buffers::ReadOnlySequence_1<::System::Byte>& utf8stringBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_OFFSET))(this, utf8stringBytes);
		}
		*/

		/*
		::System::Void WriteString_1(::System::ReadOnlySpan_1<::System::Byte> utf8stringBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_1_OFFSET))(this, utf8stringBytes);
		}
		*/

		::System::Void WriteStringHeader(::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRINGHEADER_OFFSET))(this, byteCount);
		}

		::System::Void Write_16(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_16_OFFSET))(this, value);
		}

		/*
		::System::Void Write_17(::System::ReadOnlySpan_1<::System::Char> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Char>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITE_17_OFFSET))(this, value);
		}
		*/

		/*
		::System::Void WriteExtensionFormatHeader(::MessagePack::ExtensionHeader extensionHeader)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMATHEADER_OFFSET))(this, extensionHeader);
		}
		*/

		/*
		::System::Void WriteExtensionFormat(::MessagePack::ExtensionResult extensionData)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::ExtensionResult))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEEXTENSIONFORMAT_OFFSET))(this, extensionData);
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

		::System::Void WriteBigEndian(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_OFFSET))(this, value);
		}

		::System::Void WriteBigEndian_1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_1_OFFSET))(this, value);
		}

		::System::Void WriteBigEndian_2(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_2_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* FlushAndGetArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_FLUSHANDGETARRAY_OFFSET))(this);
		}

		/*
		static ::System::Void WriteBigEndian_3(::System::Int16 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::Int16, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_3_OFFSET))(value, span);
		}
		*/

		/*
		static ::System::Void WriteBigEndian_4(::System::Int32 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_4_OFFSET))(value, span);
		}
		*/

		/*
		static ::System::Void WriteBigEndian_5(::System::Int64 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_5_OFFSET))(value, span);
		}
		*/

		/*
		static ::System::Void WriteBigEndian_6(::System::UInt16 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_6_OFFSET))(value, span);
		}
		*/

		static ::System::Void WriteBigEndian_7(::System::UInt16 value, ::System::Byte* span)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_7_OFFSET))(value, span);
		}

		/*
		static ::System::Void WriteBigEndian_8(::System::UInt32 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_8_OFFSET))(value, span);
		}
		*/

		static ::System::Void WriteBigEndian_9(::System::UInt32 value, ::System::Byte* span)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_9_OFFSET))(value, span);
		}

		/*
		static ::System::Void WriteBigEndian_10(::System::UInt64 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_10_OFFSET))(value, span);
		}
		*/

		/*
		static ::System::Void WriteBigEndian_11(::System::Single value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::Single, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_11_OFFSET))(value, span);
		}
		*/

		/*
		static ::System::Void WriteBigEndian_12(::System::Double value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::Double, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITEBIGENDIAN_12_OFFSET))(value, span);
		}
		*/

		::System::Byte& WriteString_PrepareSpan(::System::Int32 characterLength, ::System::Int32& bufferSize, ::System::Int32& encodedBytesOffset)
		{
			return ((::System::Byte&(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_PREPARESPAN_OFFSET))(this, characterLength, bufferSize, encodedBytesOffset);
		}

		::System::Void WriteString_PostEncoding(::System::Byte* pBuffer, ::System::Int32 estimatedOffset, ::System::Int32 byteCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_WRITESTRING_POSTENCODING_OFFSET))(this, pBuffer, estimatedOffset, byteCount);
		}

		static ::System::Void MemoryCopy(::System::Void* source, ::System::Void* destination, ::System::Int64 destinationSizeInBytes, ::System::Int64 sourceBytesToCopy)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKWRITER_MEMORYCOPY_OFFSET))(source, destination, destinationSizeInBytes, sourceBytesToCopy);
		}
	};
}
