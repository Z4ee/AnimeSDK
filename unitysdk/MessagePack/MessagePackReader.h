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

#define MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET UNITYSDK_OFFSET(0x3BD2E10)
#define MESSAGEPACK_MESSAGEPACKREADER_CREATEPEEKREADER_OFFSET UNITYSDK_OFFSET(0x3BD2EC0)
#define MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x3BD3460)
#define MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x3BD3690)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x3A4C4A0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_CONSUMED_OFFSET UNITYSDK_OFFSET(0x38F0F70)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x3BD2CC0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_END_OFFSET UNITYSDK_OFFSET(0x38F0D30)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_ISNIL_OFFSET UNITYSDK_OFFSET(0x3BD2CE0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTCODE_OFFSET UNITYSDK_OFFSET(0x3BD2D80)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_NEXTMESSAGEPACKTYPE_OFFSET UNITYSDK_OFFSET(0x3BD2D70)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x38F0DD0)
#define MESSAGEPACK_MESSAGEPACKREADER_GET_SEQUENCE_OFFSET UNITYSDK_OFFSET(0x38F0D40)
#define MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x3BD3020)
#define MESSAGEPACK_MESSAGEPACKREADER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3BD3060)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTES_OFFSET UNITYSDK_OFFSET(0x3BD3340)
#define MESSAGEPACK_MESSAGEPACKREADER_READBYTE_OFFSET UNITYSDK_OFFSET(0x3BD37C0)
#define MESSAGEPACK_MESSAGEPACKREADER_READCHAR_OFFSET UNITYSDK_OFFSET(0x3BD3070)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET UNITYSDK_OFFSET(0x3BD3330)
#define MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_OFFSET UNITYSDK_OFFSET(0x3BD3280)
#define MESSAGEPACK_MESSAGEPACKREADER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x3BD31D0)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x3BD3390)
#define MESSAGEPACK_MESSAGEPACKREADER_READEXTENSIONFORMAT_OFFSET UNITYSDK_OFFSET(0x3BD3440)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT16_OFFSET UNITYSDK_OFFSET(0x3BD3A50)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT32_OFFSET UNITYSDK_OFFSET(0x3BD3B00)
#define MESSAGEPACK_MESSAGEPACKREADER_READINT64_OFFSET UNITYSDK_OFFSET(0x3BD3BA0)
#define MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET UNITYSDK_OFFSET(0x3BD3040)
#define MESSAGEPACK_MESSAGEPACKREADER_READNIL_OFFSET UNITYSDK_OFFSET(0x3BD2F50)
#define MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET UNITYSDK_OFFSET(0x3BD3000)
#define MESSAGEPACK_MESSAGEPACKREADER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x3BD39B0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x3BD3120)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSEQUENCE_OFFSET UNITYSDK_OFFSET(0x3BD3360)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET UNITYSDK_OFFSET(0x3BD36A0)
#define MESSAGEPACK_MESSAGEPACKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x3BD3380)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT16_OFFSET UNITYSDK_OFFSET(0x3BD3070)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT32_OFFSET UNITYSDK_OFFSET(0x3BD3860)
#define MESSAGEPACK_MESSAGEPACKREADER_READUINT64_OFFSET UNITYSDK_OFFSET(0x3BD3900)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET UNITYSDK_OFFSET(0x3A4C4B0)
#define MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0x3BD2CD0)
#define MESSAGEPACK_MESSAGEPACKREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x3BD2EE0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET UNITYSDK_OFFSET(0x1D555DF0)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET UNITYSDK_OFFSET(0x1D556670)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1D556B60)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D55A440)
#define MESSAGEPACK_MESSAGEPACKREADER_THROWUNREACHABLE_OFFSET UNITYSDK_OFFSET(0x1D55A4F0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET UNITYSDK_OFFSET(0x3BD3550)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET UNITYSDK_OFFSET(0x3BD35F0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x3BD3030)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x3BD33A0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x3BD3050)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYREADNIL_OFFSET UNITYSDK_OFFSET(0x3BD2F60)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET UNITYSDK_OFFSET(0x3BD36B0)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET UNITYSDK_OFFSET(0x3BD3740)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET UNITYSDK_OFFSET(0x3BD3750)
#define MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x3BD2F40)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3BD2CB0)
#define MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x3BD2B80)
#define MESSAGEPACK_MESSAGEPACKREADER__READBYTE_G__SLOWPATH_63_0_OFFSET UNITYSDK_OFFSET(0x1D55AF60)
#define MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_41_0_OFFSET UNITYSDK_OFFSET(0x1D5583E0)
#define MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_42_0_OFFSET UNITYSDK_OFFSET(0x1D558860)
#define MESSAGEPACK_MESSAGEPACKREADER__READDOUBLE_G__SLOWPATH_40_0_OFFSET UNITYSDK_OFFSET(0x1D557F40)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT16_G__SLOWPATH_68_0_OFFSET UNITYSDK_OFFSET(0x1D55C4F0)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT32_G__SLOWPATH_69_0_OFFSET UNITYSDK_OFFSET(0x1D55C960)
#define MESSAGEPACK_MESSAGEPACKREADER__READINT64_G__SLOWPATH_70_0_OFFSET UNITYSDK_OFFSET(0x1D55CDD0)
#define MESSAGEPACK_MESSAGEPACKREADER__READSBYTE_G__SLOWPATH_67_0_OFFSET UNITYSDK_OFFSET(0x1D55C080)
#define MESSAGEPACK_MESSAGEPACKREADER__READSINGLE_G__SLOWPATH_39_0_OFFSET UNITYSDK_OFFSET(0x1D557AA0)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT16_G__SLOWPATH_64_0_OFFSET UNITYSDK_OFFSET(0x1D55B330)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT32_G__SLOWPATH_65_0_OFFSET UNITYSDK_OFFSET(0x1D55B7A0)
#define MESSAGEPACK_MESSAGEPACKREADER__READUINT64_G__SLOWPATH_66_0_OFFSET UNITYSDK_OFFSET(0x1D55BC10)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYGETBYTESLENGTH_G__SLOWPATH_56_0_OFFSET UNITYSDK_OFFSET(0x1D55A540)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYGETSTRINGLENGTHINBYTES_G__SLOWPATH_57_0_OFFSET UNITYSDK_OFFSET(0x1D55AA60)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADARRAYHEADER_G__SLOWPATH_34_0_OFFSET UNITYSDK_OFFSET(0x1D556D80)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADEXTENSIONFORMATHEADER_G__SLOWPATH_48_0_OFFSET UNITYSDK_OFFSET(0x1D559D90)
#define MESSAGEPACK_MESSAGEPACKREADER__TRYREADMAPHEADER_G__SLOWPATH_36_0_OFFSET UNITYSDK_OFFSET(0x1D557360)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackReader_TypeDefinitionIndex = 7145;

	struct alignas(8) MessagePackReader
	{
		::MessagePack::SequenceReader_1<::System::Byte> reader; // 0x10
		::System::Threading::CancellationToken _CancellationToken_k__BackingField; // 0xA0
		::System::Int32 _Depth_k__BackingField; // 0xA8

		/*
		::System::Void _ctor(::System::ReadOnlyMemory_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__CTOR_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void _ctor_1(::System::Buffers::ReadOnlySequence_1<::System::Byte>& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__CTOR_1_OFFSET))(this, a1);
		}
		*/

		::System::Threading::CancellationToken get_CancellationToken()
		{
			return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_CANCELLATIONTOKEN_OFFSET))(this);
		}

		::System::Void set_CancellationToken(::System::Threading::CancellationToken a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_SET_CANCELLATIONTOKEN_OFFSET))(this, a1);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_Depth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_SET_DEPTH_OFFSET))(this, a1);
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
		::MessagePack::MessagePackReader Clone(::System::Buffers::ReadOnlySequence_1<::System::Byte>& a1)
		{
			return ((::MessagePack::MessagePackReader(*)(::PVOID, ::System::Buffers::ReadOnlySequence_1<::System::Byte>&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_CLONE_OFFSET))(this, a1);
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
		::System::Buffers::ReadOnlySequence_1<::System::Byte> ReadRaw(::System::Int64 a1)
		{
			return ((::System::Buffers::ReadOnlySequence_1<::System::Byte>(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READRAW_OFFSET))(this, a1);
		}
		*/

		::System::Int32 ReadArrayHeader()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READARRAYHEADER_OFFSET))(this);
		}

		::System::Boolean TryReadArrayHeader(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADARRAYHEADER_OFFSET))(this, a1);
		}

		::System::Int32 ReadMapHeader()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READMAPHEADER_OFFSET))(this);
		}

		::System::Boolean TryReadMapHeader(::System::Int32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADMAPHEADER_OFFSET))(this, a1);
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
		::System::DateTime ReadDateTime_1(::MessagePack::ExtensionHeader a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::MessagePack::ExtensionHeader))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READDATETIME_1_OFFSET))(this, a1);
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
		::System::Boolean TryReadExtensionFormatHeader(::MessagePack::ExtensionHeader& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MessagePack::ExtensionHeader&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYREADEXTENSIONFORMATHEADER_OFFSET))(this, a1);
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

		static ::System::IO::EndOfStreamException* ThrowNotEnoughBytesException_1(::System::Exception* a1)
		{
			return ((::System::IO::EndOfStreamException*(*)(::System::Exception*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWNOTENOUGHBYTESEXCEPTION_1_OFFSET))(a1);
		}

		static ::System::Exception* ThrowInvalidCode(::System::Byte a1)
		{
			return ((::System::Exception*(*)(::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWINVALIDCODE_OFFSET))(a1);
		}

		static ::System::Void ThrowInsufficientBufferUnless(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWINSUFFICIENTBUFFERUNLESS_OFFSET))(a1);
		}

		static ::System::Exception* ThrowUnreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_THROWUNREACHABLE_OFFSET))();
		}

		::System::UInt32 GetBytesLength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETBYTESLENGTH_OFFSET))(this);
		}

		::System::Boolean TryGetBytesLength(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETBYTESLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean TryGetStringLengthInBytes(::System::UInt32& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYGETSTRINGLENGTHINBYTES_OFFSET))(this, a1);
		}

		::System::UInt32 GetStringLengthInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_GETSTRINGLENGTHINBYTES_OFFSET))(this);
		}

		::System::String* ReadStringSlow(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_READSTRINGSLOW_OFFSET))(this, a1);
		}

		::System::Boolean TrySkipNextArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTARRAY_OFFSET))(this);
		}

		::System::Boolean TrySkipNextMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIPNEXTMAP_OFFSET))(this);
		}

		::System::Boolean TrySkip_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER_TRYSKIP_1_OFFSET))(this, a1);
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

		static ::System::Boolean _TryReadArrayHeader_g__SlowPath_34_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADARRAYHEADER_G__SLOWPATH_34_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean _TryReadMapHeader_g__SlowPath_36_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Int32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADMAPHEADER_G__SLOWPATH_36_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single _ReadSingle_g__SlowPath_39_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Single a3, ::System::Int32& a4)
		{
			return ((::System::Single(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READSINGLE_G__SLOWPATH_39_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Double _ReadDouble_g__SlowPath_40_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Double a3, ::System::Int32& a4)
		{
			return ((::System::Double(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Double, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDOUBLE_G__SLOWPATH_40_0_OFFSET))(a1, a2, a3, a4);
		}

		/*
		static ::System::DateTime _ReadDateTime_g__SlowPath_41_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::DateTime a3, ::System::Int32& a4)
		{
			return ((::System::DateTime(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_41_0_OFFSET))(a1, a2, a3, a4);
		}
		*/

		/*
		static ::System::DateTime _ReadDateTime_g__SlowPath_42_0(::MessagePack::MessagePackReader& a1, ::MessagePack::ExtensionHeader a2, ::MessagePack::MessagePackPrimitives_DecodeResult a3, ::System::DateTime a4, ::System::Int32& a5)
		{
			return ((::System::DateTime(*)(::MessagePack::MessagePackReader&, ::MessagePack::ExtensionHeader, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READDATETIME_G__SLOWPATH_42_0_OFFSET))(a1, a2, a3, a4, a5);
		}
		*/

		/*
		static ::System::Boolean _TryReadExtensionFormatHeader_g__SlowPath_48_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::MessagePack::ExtensionHeader& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::MessagePack::ExtensionHeader&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYREADEXTENSIONFORMATHEADER_G__SLOWPATH_48_0_OFFSET))(a1, a2, a3, a4);
		}
		*/

		static ::System::Boolean _TryGetBytesLength_g__SlowPath_56_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Boolean a3, ::System::UInt32& a4, ::System::Int32& a5)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Boolean, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYGETBYTESLENGTH_G__SLOWPATH_56_0_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean _TryGetStringLengthInBytes_g__SlowPath_57_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::UInt32& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__TRYGETSTRINGLENGTHINBYTES_G__SLOWPATH_57_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Byte _ReadByte_g__SlowPath_63_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Byte a3, ::System::Int32& a4)
		{
			return ((::System::Byte(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READBYTE_G__SLOWPATH_63_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt16 _ReadUInt16_g__SlowPath_64_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::UInt16 a3, ::System::Int32& a4)
		{
			return ((::System::UInt16(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT16_G__SLOWPATH_64_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt32 _ReadUInt32_g__SlowPath_65_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::UInt32 a3, ::System::Int32& a4)
		{
			return ((::System::UInt32(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT32_G__SLOWPATH_65_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 _ReadUInt64_g__SlowPath_66_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::UInt64 a3, ::System::Int32& a4)
		{
			return ((::System::UInt64(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READUINT64_G__SLOWPATH_66_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::SByte _ReadSByte_g__SlowPath_67_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::SByte a3, ::System::Int32& a4)
		{
			return ((::System::SByte(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READSBYTE_G__SLOWPATH_67_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int16 _ReadInt16_g__SlowPath_68_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Int16 a3, ::System::Int32& a4)
		{
			return ((::System::Int16(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT16_G__SLOWPATH_68_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 _ReadInt32_g__SlowPath_69_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Int32 a3, ::System::Int32& a4)
		{
			return ((::System::Int32(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT32_G__SLOWPATH_69_0_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 _ReadInt64_g__SlowPath_70_0(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackPrimitives_DecodeResult a2, ::System::Int64 a3, ::System::Int32& a4)
		{
			return ((::System::Int64(*)(::MessagePack::MessagePackReader&, ::MessagePack::MessagePackPrimitives_DecodeResult, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKREADER__READINT64_G__SLOWPATH_70_0_OFFSET))(a1, a2, a3, a4);
		}
	};
}
