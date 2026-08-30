#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/ExtensionHeader.h"
#include "unitysdk/MessagePack/MessagePackPrimitives_DecodeResult.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class Exception; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_ASSUMESTRUE_OFFSET UNITYSDK_OFFSET(0x166B0CC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_THROWUNREACHABLE_OFFSET UNITYSDK_OFFSET(0x166B4A40)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x166B0140)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x166B10A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x166B02F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x166B10F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x166B0D20)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x166B0D60)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x166B02B0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBINHEADER_OFFSET UNITYSDK_OFFSET(0x166B0DB0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBYTE_OFFSET UNITYSDK_OFFSET(0x166B1130)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_1_OFFSET UNITYSDK_OFFSET(0x166B07F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_OFFSET UNITYSDK_OFFSET(0x166B04A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDOUBLE_OFFSET UNITYSDK_OFFSET(0x166B23F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADEXTENSIONHEADER_OFFSET UNITYSDK_OFFSET(0x166B0590)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT16_OFFSET UNITYSDK_OFFSET(0x166B1BC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT32_OFFSET UNITYSDK_OFFSET(0x166B1DE0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT64_OFFSET UNITYSDK_OFFSET(0x166B2000)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADMAPHEADER_OFFSET UNITYSDK_OFFSET(0x166B0330)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSBYTE_OFFSET UNITYSDK_OFFSET(0x166B19A0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSINGLE_OFFSET UNITYSDK_OFFSET(0x166B2210)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x166B0F00)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT16_OFFSET UNITYSDK_OFFSET(0x166B1350)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT32_OFFSET UNITYSDK_OFFSET(0x166B1570)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT64_OFFSET UNITYSDK_OFFSET(0x166B1790)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEARRAYHEADER_OFFSET UNITYSDK_OFFSET(0x166B25F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEBINHEADER_OFFSET UNITYSDK_OFFSET(0x166B4270)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEEXTENSIONFORMATHEADER_OFFSET UNITYSDK_OFFSET(0x166B4690)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEFIXINTUNSAFE_OFFSET UNITYSDK_OFFSET(0x166B3740)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT16_OFFSET UNITYSDK_OFFSET(0x166B2E40)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT32_OFFSET UNITYSDK_OFFSET(0x166B3230)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT64_OFFSET UNITYSDK_OFFSET(0x166B3690)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT8_OFFSET UNITYSDK_OFFSET(0x166B2BC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEMAPHEADER_OFFSET UNITYSDK_OFFSET(0x166B28D0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENEGATIVEFIXINTUNSAFE_OFFSET UNITYSDK_OFFSET(0x166B2B90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENIL_OFFSET UNITYSDK_OFFSET(0x166B25C0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITESTRINGHEADER_OFFSET UNITYSDK_OFFSET(0x166B4460)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT16_OFFSET UNITYSDK_OFFSET(0x166B37E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT32_OFFSET UNITYSDK_OFFSET(0x166B3870)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT64_OFFSET UNITYSDK_OFFSET(0x166B3A80)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT8_OFFSET UNITYSDK_OFFSET(0x166B3770)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_10_OFFSET UNITYSDK_OFFSET(0x166B3DE0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_11_OFFSET UNITYSDK_OFFSET(0x166B3E20)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_12_OFFSET UNITYSDK_OFFSET(0x166B3EC0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_1_OFFSET UNITYSDK_OFFSET(0x166B2C30)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_2_OFFSET UNITYSDK_OFFSET(0x166B2ED0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_3_OFFSET UNITYSDK_OFFSET(0x166B32F0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_4_OFFSET UNITYSDK_OFFSET(0x166B2B20)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_5_OFFSET UNITYSDK_OFFSET(0x166B2D90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_6_OFFSET UNITYSDK_OFFSET(0x166B3110)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_7_OFFSET UNITYSDK_OFFSET(0x166B3380)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_8_OFFSET UNITYSDK_OFFSET(0x166B3C90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_9_OFFSET UNITYSDK_OFFSET(0x166B3D60)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_OFFSET UNITYSDK_OFFSET(0x166B2A90)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x166B2810)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x166B3B00)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x166B35E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x166B3620)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x166B3710)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x166B27B0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_35_0_OFFSET UNITYSDK_OFFSET(0x166B33E0)
#define MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_43_0_OFFSET UNITYSDK_OFFSET(0x166B3930)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_TypeDefinitionIndex = 7118;

	class MessagePackPrimitives : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadArrayHeader(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADARRAYHEADER_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadMapHeader(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADMAPHEADER_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDateTime(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::DateTime& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::DateTime&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDateTime_1(::System::ReadOnlySpan_1<::System::Byte> a1, ::MessagePack::ExtensionHeader a2, ::System::DateTime& a3, ::System::Int32& a4)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::MessagePack::ExtensionHeader, ::System::DateTime&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDATETIME_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadExtensionHeader(::System::ReadOnlySpan_1<::System::Byte> a1, ::MessagePack::ExtensionHeader& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::MessagePack::ExtensionHeader&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADEXTENSIONHEADER_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadBinHeader(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBINHEADER_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadStringHeader(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSTRINGHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryReadBigEndian(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt16& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryReadBigEndian_1(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int16& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryReadBigEndian_2(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryReadBigEndian_3(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryReadBigEndian_4(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt64& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryReadBigEndian_5(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int64& a2)
		{
			return ((::System::Boolean(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBIGENDIAN_5_OFFSET))(a1, a2);
		}

		static ::System::Void AssumesTrue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_ASSUMESTRUE_OFFSET))(a1);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadByte(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Byte& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Byte&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADBYTE_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt16(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt16& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt16&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT16_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt32(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT32_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadUInt64(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::UInt64& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::UInt64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADUINT64_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadSByte(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::SByte& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::SByte&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSBYTE_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt16(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int16& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int16&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT16_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt32(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int32& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT32_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadInt64(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Int64& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int64&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADINT64_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadSingle(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Single& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Single&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADSINGLE_OFFSET))(a1, a2, a3);
		}

		static ::MessagePack::MessagePackPrimitives_DecodeResult TryReadDouble(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Double& a2, ::System::Int32& a3)
		{
			return ((::MessagePack::MessagePackPrimitives_DecodeResult(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Double&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYREADDOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteNil(::System::Span_1<::System::Byte> a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENIL_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryWriteArrayHeader(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEARRAYHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteMapHeader(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEMAPHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite(::System::Span_1<::System::Byte> a1, ::System::SByte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_1(::System::Span_1<::System::Byte> a1, ::System::Int16 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_2(::System::Span_1<::System::Byte> a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_3(::System::Span_1<::System::Byte> a1, ::System::Int64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_3_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteInt8(::System::Span_1<::System::Byte> a1, ::System::SByte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT8_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteInt16(::System::Span_1<::System::Byte> a1, ::System::Int16 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT16_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteInt32(::System::Span_1<::System::Byte> a1, ::System::Int32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteInt64(::System::Span_1<::System::Byte> a1, ::System::Int64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_4(::System::Span_1<::System::Byte> a1, ::System::Byte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_4_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_5(::System::Span_1<::System::Byte> a1, ::System::UInt16 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_5_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_6(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_6_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_7(::System::Span_1<::System::Byte> a1, ::System::UInt64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_7_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteUInt8(::System::Span_1<::System::Byte> a1, ::System::Byte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT8_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteUInt16(::System::Span_1<::System::Byte> a1, ::System::UInt16 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt16, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT16_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteUInt32(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT32_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteUInt64(::System::Span_1<::System::Byte> a1, ::System::UInt64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEUINT64_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_8(::System::Span_1<::System::Byte> a1, ::System::Single a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_8_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_9(::System::Span_1<::System::Byte> a1, ::System::Double a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Double, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_9_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_10(::System::Span_1<::System::Byte> a1, ::System::Boolean a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Boolean, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_10_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_11(::System::Span_1<::System::Byte> a1, ::System::Char a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Char, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_11_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWrite_12(::System::Span_1<::System::Byte> a1, ::System::DateTime a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::DateTime, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITE_12_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteBinHeader(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEBINHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteStringHeader(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITESTRINGHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteExtensionFormatHeader(::System::Span_1<::System::Byte> a1, ::MessagePack::ExtensionHeader a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::MessagePack::ExtensionHeader, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEEXTENSIONFORMATHEADER_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteFixIntUnsafe(::System::Span_1<::System::Byte> a1, ::System::Byte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Byte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITEFIXINTUNSAFE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryWriteNegativeFixIntUnsafe(::System::Span_1<::System::Byte> a1, ::System::SByte a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::SByte, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_TRYWRITENEGATIVEFIXINTUNSAFE_OFFSET))(a1, a2, a3);
		}

		static ::System::Exception* ThrowUnreachable()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_THROWUNREACHABLE_OFFSET))();
		}

		static ::System::Void WriteBigEndian(::System::Span_1<::System::Byte> a1, ::System::UInt16 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_OFFSET))(a1, a2);
		}

		static ::System::Void WriteBigEndian_1(::System::Span_1<::System::Byte> a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_1_OFFSET))(a1, a2);
		}

		static ::System::Void WriteBigEndian_2(::System::Span_1<::System::Byte> a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_2_OFFSET))(a1, a2);
		}

		static ::System::Void WriteBigEndian_3(::System::Span_1<::System::Byte> a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_3_OFFSET))(a1, a2);
		}

		static ::System::Void WriteBigEndian_4(::System::Span_1<::System::Byte> a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_4_OFFSET))(a1, a2);
		}

		static ::System::Void WriteBigEndian_5(::System::Span_1<::System::Byte> a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::Span_1<::System::Byte>, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_WRITEBIGENDIAN_5_OFFSET))(a1, a2);
		}

		static ::System::Boolean _TryWrite_g__SlowPath_35_0(::System::Span_1<::System::Byte> a1, ::System::Int64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::Int64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_35_0_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _TryWrite_g__SlowPath_43_0(::System::Span_1<::System::Byte> a1, ::System::UInt64 a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::System::Span_1<::System::Byte>, ::System::UInt64, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES__TRYWRITE_G__SLOWPATH_43_0_OFFSET))(a1, a2, a3);
		}
	};
}
