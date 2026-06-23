#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/MessagePack/SequenceReader_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::IO { class EndOfStreamException; }

#define MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET UNITYSDK_OFFSET(0x9AEE60)
#define MESSAGEPACK_MESSAGEPACKREADER_CREATEPEEKREADER_OFFSET UNITYSDK_OFFSET(0x9AEF10)
#define MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x9AF160)
#define MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x9AF2A0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x8287E0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CONSUMED_OFFSET UNITYSDK_OFFSET(0x7E4550)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9AED10)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_END_OFFSET UNITYSDK_OFFSET(0x7E4310)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x9AED30)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTCODE_OFFSET UNITYSDK_OFFSET(0x9AEDD0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x9AEDC0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x7E43B0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x7E4320)
#define MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x9AF000)
#define MESSAGEPACK_MESSAGEPACKREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9AF040)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x9AF0C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x9AF430)
#define MESSAGEPACK_MESSAGEPACKREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x9AF050)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET UNITYSDK_OFFSET(0x9AF0B0)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_OFFSET UNITYSDK_OFFSET(0x9AF080)
#define MESSAGEPACK_MESSAGEPACKREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9AF070)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x9AF120)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMAT_OFFSET UNITYSDK_OFFSET(0x9AF140)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x9AF470)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x9AF480)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x9AF490)
#define MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET UNITYSDK_OFFSET(0x9AF020)
#define MESSAGEPACK_MESSAGEPACKREADER_READNIL_OFFSET UNITYSDK_OFFSET(0x9AEFA0)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_1_OFFSET UNITYSDK_OFFSET(0x9AEFE0)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET UNITYSDK_OFFSET(0x9AEFC0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x9AF460)
#define MESSAGEPACK_MESSAGEPACKREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x9AF060)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9AF0E0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET UNITYSDK_OFFSET(0x9AF2C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x9AF110)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x9AF050)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x9AF440)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x9AF450)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x9AED00)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9AED20)
#define MESSAGEPACK_MESSAGEPACKREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x9AEF30)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET UNITYSDK_OFFSET(0x1CC3FFA0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET UNITYSDK_OFFSET(0x1CC40C40)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1CC41200)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1CC44A00)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x9AF1D0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTESSLOW_OFFSET UNITYSDK_OFFSET(0x9AF2B0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x9AF1E0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x9AF010)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x9AF130)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x9AF030)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADNIL_OFFSET UNITYSDK_OFFSET(0x9AEFB0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADSTRINGSPAN_OFFSET UNITYSDK_OFFSET(0x9AF100)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET UNITYSDK_OFFSET(0x9AF2D0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET UNITYSDK_OFFSET(0x9AF340)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET UNITYSDK_OFFSET(0x9AF3D0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x9AEF90)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9AECF0)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x9AEBC0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackReader_TypeDefinitionIndex = 30366;

	struct alignas(8) MessagePackReader
	{
		::MessagePack::SequenceReader_1<::System::Byte> reader; // 0x10
		::System::Threading::CancellationToken _CancellationToken_k__BackingField; // 0xA0
		::System::Int32 _Depth_k__BackingField; // 0xA8

		/*
		::System::Void _ctor(::System::ReadOnlyMemory_1<::System::Byte> memory)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET))(this, memory);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Buffers::ReadOnlySequence_1<::System::Byte>& readOnlySequence)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET))(this, readOnlySequence);
		}
		*/

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET))(this, value);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_Depth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET))(this, value);
		}

		/*
		::System::Buffers::ReadOnlySequence_1<::System::Byte> get_Sequence()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_SEQUENCE_OFFSET))(this);
		}
		*/

		/*
		::System::SequencePosition get_Position()
		{
			return ((::System::SequencePosition(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_POSITION_OFFSET))(this);
		}
		*/

		::System::Int64 get_Consumed()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_CONSUMED_OFFSET))(this);
		}

		::System::Boolean get_End()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_END_OFFSET))(this);
		}

		::System::Boolean get_IsNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_ISNIL_OFFSET))(this);
		}

		::MessagePack::MessagePackType get_NextMessagePackType()
		{
			return ((::MessagePack::MessagePackType(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTMESSAGEPACKTYPE_OFFSET))(this);
		}

		::System::Byte get_NextCode()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTCODE_OFFSET))(this);
		}

		/*
		::MessagePack::MessagePackReader Clone(::System::Buffers::ReadOnlySequence_1<::System::Byte>& readOnlySequence)
		{
			return ((::MessagePack::MessagePackReader(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET))(this, readOnlySequence);
		}
		*/

		::MessagePack::MessagePackReader CreatePeekReader()
		{
			return ((::MessagePack::MessagePackReader(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_CREATEPEEKREADER_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_SKIP_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_OFFSET))(this);
		}

		/*
		::MessagePack::Nil ReadNil()
		{
			return ((::MessagePack::Nil(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READNIL_OFFSET))(this);
		}
		*/

		::System::Boolean TryReadNil()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADNIL_OFFSET))(this);
		}

		/*
		::System::Buffers::ReadOnlySequence_1<::System::Byte> ReadRaw(::System::Int64 length)
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET))(this, length);
		}
		*/

		/*
		::System::Buffers::ReadOnlySequence_1<::System::Byte> ReadRaw_1()
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READRAW_1_OFFSET))(this);
		}
		*/

		::System::Int32 ReadArrayHeader()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET))(this);
		}

		::System::Boolean TryReadArrayHeader(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET))(this, count);
		}

		::System::Int32 ReadMapHeader()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET))(this);
		}

		::System::Boolean TryReadMapHeader(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET))(this, count);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READBOOLEAN_OFFSET))(this);
		}

		::System::Char ReadChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READCHAR_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READDOUBLE_OFFSET))(this);
		}

		/*
		::System::DateTime ReadDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_OFFSET))(this);
		}
		*/

		/*
		::System::DateTime ReadDateTime_1(::MessagePack::ExtensionHeader header)
		{
			return ((::System::DateTime(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET))(this, header);
		}
		*/

		/*
		::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>> ReadBytes()
		{
			return ((::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READBYTES_OFFSET))(this);
		}
		*/

		/*
		::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>> ReadStringSequence()
		{
			return ((::System::Nullable_1<::System::Buffers::ReadOnlySequence_1<::System::Byte>>(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSEQUENCE_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean TryReadStringSpan(::System::ReadOnlySpan_1<::System::Byte>& span)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ReadOnlySpan_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADSTRINGSPAN_OFFSET))(this, span);
		}
		*/

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSTRING_OFFSET))(this);
		}

		/*
		::MessagePack::ExtensionHeader ReadExtensionFormatHeader()
		{
			return ((::MessagePack::ExtensionHeader(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMATHEADER_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean TryReadExtensionFormatHeader(::MessagePack::ExtensionHeader& extensionHeader)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::ExtensionHeader&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET))(this, extensionHeader);
		}
		*/

		/*
		::MessagePack::ExtensionResult ReadExtensionFormat()
		{
			return ((::MessagePack::ExtensionResult(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMAT_OFFSET))(this);
		}
		*/

		static ::System::IO::EndOfStreamException* ThrowNotEnoughBytesException()
		{
			return ((::System::IO::EndOfStreamException*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_OFFSET))();
		}

		static ::System::IO::EndOfStreamException* ThrowNotEnoughBytesException_1(::System::Exception* innerException)
		{
			return ((::System::IO::EndOfStreamException*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET))(innerException);
		}

		static ::System::Exception* ThrowInvalidCode(::System::Byte code)
		{
			return ((::System::Exception*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET))(code);
		}

		static ::System::Void ThrowInsufficientBufferUnless(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET))(condition);
		}

		::System::Int32 GetBytesLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET))(this);
		}

		::System::Boolean TryGetBytesLength(::System::Int32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET))(this, length);
		}

		::System::Boolean TryGetStringLengthInBytes(::System::Int32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET))(this, length);
		}

		::System::Int32 GetStringLengthInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET))(this);
		}

		::System::Boolean TryGetStringLengthInBytesSlow(::System::Byte code, ::System::Int32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTESSLOW_OFFSET))(this, code, length);
		}

		::System::String* ReadStringSlow(::System::Int32 byteLength)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET))(this, byteLength);
		}

		::System::Boolean TrySkipNextArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET))(this);
		}

		::System::Boolean TrySkipNextMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET))(this);
		}

		::System::Boolean TrySkip_1(::System::Int32 count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET))(this, count);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READBYTE_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READUINT16_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READUINT32_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READUINT64_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSBYTE_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READINT64_OFFSET))(this);
		}
	};
}
