#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define MESSAGEPACK_LZ4_LZ4CODEC_ASSERT_OFFSET UNITYSDK_OFFSET(0x1D05C560)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY32_OFFSET UNITYSDK_OFFSET(0x1D063D40)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY64_OFFSET UNITYSDK_OFFSET(0x1D063DA0)
#define MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1D05D090)
#define MESSAGEPACK_LZ4_LZ4CODEC_CHECKARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1D05D9D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_COPY4_OFFSET UNITYSDK_OFFSET(0x1D05CD20)
#define MESSAGEPACK_LZ4_LZ4CODEC_COPY8_OFFSET UNITYSDK_OFFSET(0x1D05CE40)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE32SAFE_OFFSET UNITYSDK_OFFSET(0x1D05C380)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE64SAFE_OFFSET UNITYSDK_OFFSET(0x1D05C470)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_1_OFFSET UNITYSDK_OFFSET(0x1D0634D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET UNITYSDK_OFFSET(0x1D05C310)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE32SAFE_OFFSET UNITYSDK_OFFSET(0x1D05C0B0)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE64SAFE_OFFSET UNITYSDK_OFFSET(0x1D05C1E0)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1D061900)
#define MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET UNITYSDK_OFFSET(0x1D05C040)
#define MESSAGEPACK_LZ4_LZ4CODEC_EQUAL2_OFFSET UNITYSDK_OFFSET(0x1D05CB40)
#define MESSAGEPACK_LZ4_LZ4CODEC_EQUAL4_OFFSET UNITYSDK_OFFSET(0x1D05CBE0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_32_OFFSET UNITYSDK_OFFSET(0x1D061AC0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_64_OFFSET UNITYSDK_OFFSET(0x1D0620D0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_SAFE32_OFFSET UNITYSDK_OFFSET(0x1D05DB60)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_SAFE64_OFFSET UNITYSDK_OFFSET(0x1D05F360)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_32_OFFSET UNITYSDK_OFFSET(0x1D062780)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_64_OFFSET UNITYSDK_OFFSET(0x1D062DF0)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_SAFE32_OFFSET UNITYSDK_OFFSET(0x1D05E700)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_SAFE64_OFFSET UNITYSDK_OFFSET(0x1D05FF20)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_32_OFFSET UNITYSDK_OFFSET(0x1D063610)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_64_OFFSET UNITYSDK_OFFSET(0x1D063960)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_SAFE32_OFFSET UNITYSDK_OFFSET(0x1D060B90)
#define MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_SAFE64_OFFSET UNITYSDK_OFFSET(0x1D061240)
#define MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET UNITYSDK_OFFSET(0x1D063E20)
#define MESSAGEPACK_LZ4_LZ4CODEC_PEEK2_OFFSET UNITYSDK_OFFSET(0x1D05C610)
#define MESSAGEPACK_LZ4_LZ4CODEC_PEEK4_OFFSET UNITYSDK_OFFSET(0x1D05C670)
#define MESSAGEPACK_LZ4_LZ4CODEC_POKE2_OFFSET UNITYSDK_OFFSET(0x1D05C5C0)
#define MESSAGEPACK_LZ4_LZ4CODEC_SECURECOPY_OFFSET UNITYSDK_OFFSET(0x1D05D730)
#define MESSAGEPACK_LZ4_LZ4CODEC_WILDCOPY_OFFSET UNITYSDK_OFFSET(0x1D05D4E0)
#define MESSAGEPACK_LZ4_LZ4CODEC_XOR4_OFFSET UNITYSDK_OFFSET(0x1D05C710)
#define MESSAGEPACK_LZ4_LZ4CODEC_XOR8_OFFSET UNITYSDK_OFFSET(0x1D05C860)
#define MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D063E40)

namespace MessagePack::LZ4
{
	inline static constexpr unsigned int LZ4Codec_TypeDefinitionIndex = 31328;

	class LZ4Codec : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x25A90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DEBRUIJN_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x25A98);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_64()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x25AA0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DECODER_TABLE_32()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LZ4Codec_TypeDefinitionIndex)->GetStaticField(0x25AA8);
		}
		// static const ::System::Int32 MEMORY_USAGE = 0xC; // 0x0
		// static const ::System::Int32 NOTCOMPRESSIBLE_DETECTIONLEVEL = 0x6; // 0x0
		// static const ::System::Int32 MINMATCH = 0x4; // 0x0
		// static const ::System::Int32 SKIPSTRENGTH = 0x6; // 0x0
		// static const ::System::Int32 COPYLENGTH = 0x8; // 0x0
		// static const ::System::Int32 LASTLITERALS = 0x5; // 0x0
		// static const ::System::Int32 MFLIMIT = 0xC; // 0x0
		// static const ::System::Int32 MINLENGTH = 0xD; // 0x0
		// static const ::System::Int32 MAXD_LOG = 0x10; // 0x0
		// static const ::System::Int32 MAXD = 0x10000; // 0x0
		// static const ::System::Int32 MAXD_MASK = 0xFFFF; // 0x0
		// static const ::System::Int32 MAX_DISTANCE = 0xFFFF; // 0x0
		// static const ::System::Int32 ML_BITS = 0x4; // 0x0
		// static const ::System::Int32 ML_MASK = 0xF; // 0x0
		// static const ::System::Int32 RUN_BITS = 0x4; // 0x0
		// static const ::System::Int32 RUN_MASK = 0xF; // 0x0
		// static const ::System::Int32 STEPSIZE_64 = 0x8; // 0x0
		// static const ::System::Int32 STEPSIZE_32 = 0x4; // 0x0
		// static const ::System::Int32 LZ4_64KLIMIT = 0x1000B; // 0x0
		// static const ::System::Int32 HASH_LOG = 0xA; // 0x0
		// static const ::System::Int32 HASH_TABLESIZE = 0x400; // 0x0
		// static const ::System::Int32 HASH_ADJUST = 0x16; // 0x0
		// static const ::System::Int32 HASH64K_LOG = 0xB; // 0x0
		// static const ::System::Int32 HASH64K_TABLESIZE = 0x800; // 0x0
		// static const ::System::Int32 HASH64K_ADJUST = 0x15; // 0x0
		// static const ::System::Int32 HASHHC_LOG = 0xF; // 0x0
		// static const ::System::Int32 HASHHC_TABLESIZE = 0x8000; // 0x0
		// static const ::System::Int32 HASHHC_ADJUST = 0x11; // 0x0
		// static const ::System::Int32 MAX_NB_ATTEMPTS = 0x100; // 0x0
		// static const ::System::Int32 OPTIMAL_ML = 0x12; // 0x0
		// static const ::System::Int32 BLOCK_COPY_LIMIT = 0x10; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC__CCTOR_OFFSET))();
		}

		static ::System::Int32 Encode(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Decode(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Void Assert(::System::Boolean condition, ::System::String* errorMessage)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ASSERT_OFFSET))(condition, errorMessage);
		}

		static ::System::Void Poke2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::UInt16 value)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_POKE2_OFFSET))(buffer, offset, value);
		}

		static ::System::UInt16 Peek2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_PEEK2_OFFSET))(buffer, offset);
		}

		static ::System::UInt32 Peek4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_PEEK4_OFFSET))(buffer, offset);
		}

		static ::System::UInt32 Xor4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset1, ::System::Int32 offset2)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_XOR4_OFFSET))(buffer, offset1, offset2);
		}

		static ::System::UInt64 Xor8(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset1, ::System::Int32 offset2)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_XOR8_OFFSET))(buffer, offset1, offset2);
		}

		static ::System::Boolean Equal2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset1, ::System::Int32 offset2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_EQUAL2_OFFSET))(buffer, offset1, offset2);
		}

		static ::System::Boolean Equal4(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset1, ::System::Int32 offset2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_EQUAL4_OFFSET))(buffer, offset1, offset2);
		}

		static ::System::Void Copy4(::Il2CppArray<::System::Byte>* buf, ::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_COPY4_OFFSET))(buf, src, dst);
		}

		static ::System::Void Copy8(::Il2CppArray<::System::Byte>* buf, ::System::Int32 src, ::System::Int32 dst)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_COPY8_OFFSET))(buf, src, dst);
		}

		static ::System::Void BlockCopy(::Il2CppArray<::System::Byte>* src, ::System::Int32 src_0, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dst_0, ::System::Int32 len)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_BLOCKCOPY_OFFSET))(src, src_0, dst, dst_0, len);
		}

		static ::System::Int32 WildCopy(::Il2CppArray<::System::Byte>* src, ::System::Int32 src_0, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 dst_0, ::System::Int32 dst_end)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_WILDCOPY_OFFSET))(src, src_0, dst, dst_0, dst_end);
		}

		static ::System::Int32 SecureCopy(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 src, ::System::Int32 dst, ::System::Int32 dst_end)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_SECURECOPY_OFFSET))(buffer, src, dst, dst_end);
		}

		static ::System::Int32 Encode32Safe(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE32SAFE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Encode64Safe(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE64SAFE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Decode32Safe(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE32SAFE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 Decode64Safe(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE64SAFE_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}

		static ::System::Int32 LZ4_compressCtx_safe32(::Il2CppArray<::System::Int32>* hash_table, ::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_SAFE32_OFFSET))(hash_table, src, dst, src_0, dst_0, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_safe32(::Il2CppArray<::System::UInt16>* hash_table, ::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt16>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_SAFE32_OFFSET))(hash_table, src, dst, src_0, dst_0, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_safe32(::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_SAFE32_OFFSET))(src, dst, src_0, dst_0, dst_len);
		}

		static ::System::Int32 LZ4_compressCtx_safe64(::Il2CppArray<::System::Int32>* hash_table, ::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESSCTX_SAFE64_OFFSET))(hash_table, src, dst, src_0, dst_0, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_compress64kCtx_safe64(::Il2CppArray<::System::UInt16>* hash_table, ::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 src_len, ::System::Int32 dst_maxlen)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::UInt16>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_COMPRESS64KCTX_SAFE64_OFFSET))(hash_table, src, dst, src_0, dst_0, src_len, dst_maxlen);
		}

		static ::System::Int32 LZ4_uncompress_safe64(::Il2CppArray<::System::Byte>* src, ::Il2CppArray<::System::Byte>* dst, ::System::Int32 src_0, ::System::Int32 dst_0, ::System::Int32 dst_len)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_LZ4_UNCOMPRESS_SAFE64_OFFSET))(src, dst, src_0, dst_0, dst_len);
		}

		static ::System::Int32 Encode_1(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_ENCODE_1_OFFSET))(input, output);
		}

		static ::System::Int32 Decode_1(::System::ReadOnlySpan_1<::System::Byte> input, ::System::Span_1<::System::Byte> output)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_DECODE_1_OFFSET))(input, output);
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

		static ::System::Int32 MaximumOutputLength(::System::Int32 inputLength)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_MAXIMUMOUTPUTLENGTH_OFFSET))(inputLength);
		}

		static ::System::Void CheckArguments(::Il2CppArray<::System::Byte>* input, ::System::Int32 inputOffset, ::System::Int32 inputLength, ::Il2CppArray<::System::Byte>* output, ::System::Int32 outputOffset, ::System::Int32 outputLength)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_LZ4_LZ4CODEC_CHECKARGUMENTS_OFFSET))(input, inputOffset, inputLength, output, outputOffset, outputLength);
		}
	};
}
