#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/MessagePack/MessagePackType.h"
#include "unitysdk/MessagePack/SequenceReader_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::IO { class EndOfStreamException; }

#define MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET UNITYSDK_OFFSET(0x20C74D0)
#define MESSAGEPACK_MESSAGEPACKREADER_CREATEPEEKREADER_OFFSET UNITYSDK_OFFSET(0x20C7580)
#define MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x20C7B20)
#define MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x20C7D50)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x14EB6A0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CONSUMED_OFFSET UNITYSDK_OFFSET(0x14EB680)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA8E950)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_END_OFFSET UNITYSDK_OFFSET(0x1517190)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x20C73A0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTCODE_OFFSET UNITYSDK_OFFSET(0x20C7440)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x20C7430)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1517230)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x15171A0)
#define MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x20C76E0)
#define MESSAGEPACK_MESSAGEPACKREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x20C7720)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x20C7A00)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x20C7E80)
#define MESSAGEPACK_MESSAGEPACKREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x20C7730)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET UNITYSDK_OFFSET(0x20C79F0)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_OFFSET UNITYSDK_OFFSET(0x20C7940)
#define MESSAGEPACK_MESSAGEPACKREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x20C7890)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x20C7A50)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMAT_OFFSET UNITYSDK_OFFSET(0x20C7B00)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x20C8110)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x20C81C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x20C8260)
#define MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET UNITYSDK_OFFSET(0x20C7700)
#define MESSAGEPACK_MESSAGEPACKREADER_READNIL_OFFSET UNITYSDK_OFFSET(0x20C7610)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET UNITYSDK_OFFSET(0x20C76C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x20C8070)
#define MESSAGEPACK_MESSAGEPACKREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x20C77E0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x20C7A20)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET UNITYSDK_OFFSET(0x20C7D60)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x20C7A40)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x20C7730)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x20C7F20)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x20C7FC0)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x14EB6B0)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xA8E960)
#define MESSAGEPACK_MESSAGEPACKREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x20C75A0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET UNITYSDK_OFFSET(0x15D6EB10)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET UNITYSDK_OFFSET(0x15D6F3A0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x15D6F7D0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_OFFSET UNITYSDK_OFFSET(0x15D72E10)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWUNREACHABLE_OFFSET UNITYSDK_OFFSET(0x15D72EC0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x20C7C10)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x20C7CB0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x20C76F0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x20C7A60)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x20C7710)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADNIL_OFFSET UNITYSDK_OFFSET(0x20C7620)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET UNITYSDK_OFFSET(0x20C7D70)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET UNITYSDK_OFFSET(0x20C7E00)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET UNITYSDK_OFFSET(0x20C7E10)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x20C7600)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20C7390)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x20C7260)
#define MESSAGEPACK_MESSAGEPACKREADER__READBYTE_G__SLOWPATH_63_0_OFFSET UNITYSDK_OFFSET(0x15D73920)
#define MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_41_0_OFFSET UNITYSDK_OFFSET(0x15D70FA0)
#define MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_42_0_OFFSET UNITYSDK_OFFSET(0x15D71420)
#define MESSAGEPACK_MESSAGEPACKREADER__READDOUBLE_G__SLOWPATH_40_0_OFFSET UNITYSDK_OFFSET(0x15D70B20)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT16_G__SLOWPATH_68_0_OFFSET UNITYSDK_OFFSET(0x15D74EB0)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT32_G__SLOWPATH_69_0_OFFSET UNITYSDK_OFFSET(0x15D75320)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT64_G__SLOWPATH_70_0_OFFSET UNITYSDK_OFFSET(0x15D75790)
#define MESSAGEPACK_MESSAGEPACKREADER__READSBYTE_G__SLOWPATH_67_0_OFFSET UNITYSDK_OFFSET(0x15D74A40)
#define MESSAGEPACK_MESSAGEPACKREADER__READSINGLE_G__SLOWPATH_39_0_OFFSET UNITYSDK_OFFSET(0x15D706A0)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT16_G__SLOWPATH_64_0_OFFSET UNITYSDK_OFFSET(0x15D73CF0)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT32_G__SLOWPATH_65_0_OFFSET UNITYSDK_OFFSET(0x15D74160)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT64_G__SLOWPATH_66_0_OFFSET UNITYSDK_OFFSET(0x15D745D0)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYGETBYTESLENGTH_G__SLOWPATH_56_0_OFFSET UNITYSDK_OFFSET(0x15D72F10)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYGETSTRINGLENGTHINBYTES_G__SLOWPATH_57_0_OFFSET UNITYSDK_OFFSET(0x15D73430)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADARRAYHEADER_G__SLOWPATH_34_0_OFFSET UNITYSDK_OFFSET(0x15D6F9F0)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADEXTENSIONFORMATHEADER_G__SLOWPATH_48_0_OFFSET UNITYSDK_OFFSET(0x15D72770)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADMAPHEADER_G__SLOWPATH_36_0_OFFSET UNITYSDK_OFFSET(0x15D70000)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackReader_TypeDefinitionIndex = 9053;

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

		static ::System::Exception* ThrowUnreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWUNREACHABLE_OFFSET))();
		}

		::System::UInt32 GetBytesLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET))(this);
		}

		::System::Boolean TryGetBytesLength(::System::UInt32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET))(this, length);
		}

		::System::Boolean TryGetStringLengthInBytes(::System::UInt32& length)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET))(this, length);
		}

		::System::UInt32 GetStringLengthInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET))(this);
		}

		::System::String* ReadStringSlow(::System::UInt32 byteLength)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET))(this, byteLength);
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

		static ::System::Boolean _TryReadArrayHeader_g__SlowPath_34_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Int32& count, ::System::Int32& tokenSize)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADARRAYHEADER_G__SLOWPATH_34_0_OFFSET))(self, readResult, count, tokenSize);
		}

		static ::System::Boolean _TryReadMapHeader_g__SlowPath_36_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Int32& count, ::System::Int32& tokenSize)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADMAPHEADER_G__SLOWPATH_36_0_OFFSET))(self, readResult, count, tokenSize);
		}

		static ::System::Single _ReadSingle_g__SlowPath_39_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Single value, ::System::Int32& tokenSize)
		{
			return ((::System::Single(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READSINGLE_G__SLOWPATH_39_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::Double _ReadDouble_g__SlowPath_40_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Double value, ::System::Int32& tokenSize)
		{
			return ((::System::Double(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Double, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDOUBLE_G__SLOWPATH_40_0_OFFSET))(self, readResult, value, tokenSize);
		}

		/*
		static ::System::DateTime _ReadDateTime_g__SlowPath_41_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::DateTime value, ::System::Int32& tokenSize)
		{
			return ((::System::DateTime(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_41_0_OFFSET))(self, readResult, value, tokenSize);
		}
		*/

		/*
		static ::System::DateTime _ReadDateTime_g__SlowPath_42_0(::MessagePack::MessagePackReader& self, ::MessagePack::ExtensionHeader header, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::DateTime value, ::System::Int32& tokenSize)
		{
			return ((::System::DateTime(*)(::MessagePack::MessagePackReader&, ::MessagePack::ExtensionHeader, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_42_0_OFFSET))(self, header, readResult, value, tokenSize);
		}
		*/

		/*
		static ::System::Boolean _TryReadExtensionFormatHeader_g__SlowPath_48_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::MessagePack::ExtensionHeader& extensionHeader, ::System::Int32& tokenSize)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::MessagePack::ExtensionHeader&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADEXTENSIONFORMATHEADER_G__SLOWPATH_48_0_OFFSET))(self, readResult, extensionHeader, tokenSize);
		}
		*/

		static ::System::Boolean _TryGetBytesLength_g__SlowPath_56_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Boolean usingBinaryHeader, ::System::UInt32& length, ::System::Int32& tokenSize)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Boolean, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYGETBYTESLENGTH_G__SLOWPATH_56_0_OFFSET))(self, readResult, usingBinaryHeader, length, tokenSize);
		}

		static ::System::Boolean _TryGetStringLengthInBytes_g__SlowPath_57_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::UInt32& length, ::System::Int32& tokenSize)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYGETSTRINGLENGTHINBYTES_G__SLOWPATH_57_0_OFFSET))(self, readResult, length, tokenSize);
		}

		static ::System::Byte _ReadByte_g__SlowPath_63_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Byte value, ::System::Int32& tokenSize)
		{
			return ((::System::Byte(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READBYTE_G__SLOWPATH_63_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::UInt16 _ReadUInt16_g__SlowPath_64_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::UInt16 value, ::System::Int32& tokenSize)
		{
			return ((::System::UInt16(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT16_G__SLOWPATH_64_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::UInt32 _ReadUInt32_g__SlowPath_65_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::UInt32 value, ::System::Int32& tokenSize)
		{
			return ((::System::UInt32(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT32_G__SLOWPATH_65_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::UInt64 _ReadUInt64_g__SlowPath_66_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::UInt64 value, ::System::Int32& tokenSize)
		{
			return ((::System::UInt64(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT64_G__SLOWPATH_66_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::SByte _ReadSByte_g__SlowPath_67_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::SByte value, ::System::Int32& tokenSize)
		{
			return ((::System::SByte(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READSBYTE_G__SLOWPATH_67_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::Int16 _ReadInt16_g__SlowPath_68_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Int16 value, ::System::Int32& tokenSize)
		{
			return ((::System::Int16(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT16_G__SLOWPATH_68_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::Int32 _ReadInt32_g__SlowPath_69_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Int32 value, ::System::Int32& tokenSize)
		{
			return ((::System::Int32(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT32_G__SLOWPATH_69_0_OFFSET))(self, readResult, value, tokenSize);
		}

		static ::System::Int64 _ReadInt64_g__SlowPath_70_0(::MessagePack::MessagePackReader& self, ::MessagePack::MessagePackPrimitives_DecodeResult readResult, ::System::Int64 value, ::System::Int32& tokenSize)
		{
			return ((::System::Int64(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT64_G__SLOWPATH_70_0_OFFSET))(self, readResult, value, tokenSize);
		}
	};
}
