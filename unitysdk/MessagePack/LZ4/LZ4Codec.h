#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET UNITYSDK_OFFSET(0x1B6B2380)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET UNITYSDK_OFFSET(0x1B6B2400)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET UNITYSDK_OFFSET(0x1B6B1B00)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B6AFAA0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET UNITYSDK_OFFSET(0x1B6AFDE0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET UNITYSDK_OFFSET(0x1B6B0490)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET UNITYSDK_OFFSET(0x1B6B0D20)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET UNITYSDK_OFFSET(0x1B6B13E0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET UNITYSDK_OFFSET(0x1B6B1C40)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET UNITYSDK_OFFSET(0x1B6B1FB0)
#define MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x1B6AFA30)
#define MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6B24A0)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4Codec_TypeDefinitionIndex = 7225;

	class LZ4Codec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x2CB50);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x2CB58);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x2CB60);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x2CB68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET))();
		}

		static ::System::Int32 MaximumOutputLength(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET))(a1);
		}

		static ::System::Int32 Encode(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Span_1<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 Decode(::System::ReadOnlySpan_1<::System::Byte> a1, ::System::Span_1<::System::Byte> a2)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET))(a1, a2);
		}

		static ::System::Int32 LZ4_compressCtx_32(::System::UInt32* a1, ::System::Byte* a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_compress64kCtx_32(::System::UInt16* a1, ::System::Byte* a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_uncompress_32(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BlockCopy32(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 LZ4_compressCtx_64(::System::UInt32* a1, ::System::Byte* a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_compress64kCtx_64(::System::UInt16* a1, ::System::Byte* a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 LZ4_uncompress_64(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BlockCopy64(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET))(a1, a2, a3);
		}
	};
}
