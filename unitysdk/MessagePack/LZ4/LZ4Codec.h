#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET UNITYSDK_OFFSET(0x15D65E40)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET UNITYSDK_OFFSET(0x15D65EC0)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET UNITYSDK_OFFSET(0x15D655A0)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x15D634D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET UNITYSDK_OFFSET(0x15D63830)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET UNITYSDK_OFFSET(0x15D63EF0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET UNITYSDK_OFFSET(0x15D647A0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET UNITYSDK_OFFSET(0x15D64E70)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET UNITYSDK_OFFSET(0x15D656E0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET UNITYSDK_OFFSET(0x15D65A50)
#define MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x15D63440)
#define MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D65F60)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4Codec_TypeDefinitionIndex = 9133;

	class LZ4Codec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x22210);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x22218);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x22220);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x22228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET))();
		}

		static ::System::Int32 MaximumOutputLength(::System::Int32 inputLength)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET))(inputLength);
		}

		static ::System::Int32 Encode(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET))(input, output);
		}

		static ::System::Int32 Decode(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET))(input, output);
		}

		static ::System::Int32 LZ4_compressCtx_32(::System::UInt32* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_32(::System::UInt16* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_32(::System::Byte* src, ::System::Byte* dst, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET))(src, dst, dst_len);
		}

		static ::System::Void BlockCopy32(::System::Byte* src, ::System::Byte* dst, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET))(src, dst, len);
		}

		static ::System::Int32 LZ4_compressCtx_64(::System::UInt32* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt32*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_64(::System::UInt16* hash_table, ::System::Byte* src, ::System::Byte* dst, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::System::UInt16*, ::System::Byte*, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET))(hash_table, src, dst, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_64(::System::Byte* src, ::System::Byte* dst, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET))(src, dst, dst_len);
		}

		static ::System::Void BlockCopy64(::System::Byte* src, ::System::Byte* dst, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET))(src, dst, len);
		}
	};
}
