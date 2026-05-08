#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/MessagePack/SequenceReader_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::IO { class EndOfStreamException; }

#define MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET UNITYSDK_OFFSET(0x9066C0)
#define MESSAGEPACK_MESSAGEPACKREADER_CREATEPEEKREADER_OFFSET UNITYSDK_OFFSET(0x906770)
#define MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x9069C0)
#define MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x906B00)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x7D51A0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CONSUMED_OFFSET UNITYSDK_OFFSET(0x6E78D0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x906570)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_END_OFFSET UNITYSDK_OFFSET(0x6E7690)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x906590)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTCODE_OFFSET UNITYSDK_OFFSET(0x906630)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x906620)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x6E7730)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x6E76A0)
#define MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x906860)
#define MESSAGEPACK_MESSAGEPACKREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9068A0)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x906920)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x906C90)
#define MESSAGEPACK_MESSAGEPACKREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x9068B0)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET UNITYSDK_OFFSET(0x906910)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_OFFSET UNITYSDK_OFFSET(0x9068E0)
#define MESSAGEPACK_MESSAGEPACKREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x9068D0)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x906980)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMAT_OFFSET UNITYSDK_OFFSET(0x9069A0)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x906CD0)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x906CE0)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x906CF0)
#define MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET UNITYSDK_OFFSET(0x906880)
#define MESSAGEPACK_MESSAGEPACKREADER_READNIL_OFFSET UNITYSDK_OFFSET(0x906800)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_1_OFFSET UNITYSDK_OFFSET(0x906840)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET UNITYSDK_OFFSET(0x906820)
#define MESSAGEPACK_MESSAGEPACKREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x906CC0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x9068C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x906940)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET UNITYSDK_OFFSET(0x906B20)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x906970)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x9068B0)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x906CA0)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x906CB0)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x906560)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x906580)
#define MESSAGEPACK_MESSAGEPACKREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x906790)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET UNITYSDK_OFFSET(0x1A851480)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET UNITYSDK_OFFSET(0x1A852120)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1A8526E0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A855EE0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x906A30)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTESSLOW_OFFSET UNITYSDK_OFFSET(0x906B10)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x906A40)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x906870)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x906990)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x906890)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADNIL_OFFSET UNITYSDK_OFFSET(0x906810)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADSTRINGSPAN_OFFSET UNITYSDK_OFFSET(0x906960)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET UNITYSDK_OFFSET(0x906B30)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET UNITYSDK_OFFSET(0x906BA0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET UNITYSDK_OFFSET(0x906C30)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x9067F0)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x906550)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x906420)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackReader_TypeDefinitionIndex = 26647;

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
