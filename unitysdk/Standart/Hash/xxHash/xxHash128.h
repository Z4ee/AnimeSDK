#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Standart/Hash/xxHash/uint128.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_1_OFFSET UNITYSDK_OFFSET(0x1B06D1D0)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_2_OFFSET UNITYSDK_OFFSET(0x1B06D350)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_3_OFFSET UNITYSDK_OFFSET(0x1B06D4D0)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_OFFSET UNITYSDK_OFFSET(0x1B06D070)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x1B06CC10)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x1B06CD90)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_3_OFFSET UNITYSDK_OFFSET(0x1B06CF10)
#define STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1B06CAB0)
#define STANDART_HASH_XXHASH_XXHASH128_UNSAFECOMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1B06D620)
#define STANDART_HASH_XXHASH_XXHASH128_XXH128_MIX32B_OFFSET UNITYSDK_OFFSET(0x1B069950)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_128BITS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B0668A0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_512_OFFSET UNITYSDK_OFFSET(0x1B06C000)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_512_SCALAR_OFFSET UNITYSDK_OFFSET(0x1B06C1A0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_OFFSET UNITYSDK_OFFSET(0x1B06BF10)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x1B0698D0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_128B_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B06A380)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_128B_WITHSEED_OFFSET UNITYSDK_OFFSET(0x1B069E30)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_INTERNAL_LOOP_OFFSET UNITYSDK_OFFSET(0x1B06B250)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_INITCUSTOMSECRET_OFFSET UNITYSDK_OFFSET(0x1B06C690)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_INITCUSTOMSECRET_SCALAR_OFFSET UNITYSDK_OFFSET(0x1B06C890)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_0TO16_128B_OFFSET UNITYSDK_OFFSET(0x1B0677C0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_129TO240_128B_OFFSET UNITYSDK_OFFSET(0x1B069390)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_17TO128_128B_OFFSET UNITYSDK_OFFSET(0x1B068450)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_1TO3_128B_OFFSET UNITYSDK_OFFSET(0x1B068ED0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_4TO8_128B_OFFSET UNITYSDK_OFFSET(0x1B069120)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_9TO16_128B_OFFSET UNITYSDK_OFFSET(0x1B068920)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_MERGEACCS_OFFSET UNITYSDK_OFFSET(0x1B06BB50)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_MIX16B_OFFSET UNITYSDK_OFFSET(0x1B069AF0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_MIX2ACCS_OFFSET UNITYSDK_OFFSET(0x1B06BEA0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_MUL128_FOLD64_OFFSET UNITYSDK_OFFSET(0x1B069CD0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_SCALARROUND_OFFSET UNITYSDK_OFFSET(0x1B06C2D0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_SCALARSCRAMBLEROUND_OFFSET UNITYSDK_OFFSET(0x1B06C610)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_SCRAMBLEACC_OFFSET UNITYSDK_OFFSET(0x1B06C360)
#define STANDART_HASH_XXHASH_XXHASH128_XXH3_SCRAMBLEACC_SCALAR_OFFSET UNITYSDK_OFFSET(0x1B06C4E0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH64_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x1B06CA30)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_MULT32TO64_OFFSET UNITYSDK_OFFSET(0x1B0666B0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_MULT64TO128_OFFSET UNITYSDK_OFFSET(0x1B0666C0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_MULT64TO128_SCALAR_OFFSET UNITYSDK_OFFSET(0x1B0667E0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_READLE32_OFFSET UNITYSDK_OFFSET(0x1B066660)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_READLE64_OFFSET UNITYSDK_OFFSET(0x1B066650)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_ROTL32_OFFSET UNITYSDK_OFFSET(0x1B066630)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_ROTL64_OFFSET UNITYSDK_OFFSET(0x1B066640)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_SWAP32_OFFSET UNITYSDK_OFFSET(0x1B066690)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_SWAP64_OFFSET UNITYSDK_OFFSET(0x1B0666A0)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_WRITELE64_OFFSET UNITYSDK_OFFSET(0x1B066890)
#define STANDART_HASH_XXHASH_XXHASH128_XXH_XORSHIFT64_OFFSET UNITYSDK_OFFSET(0x1B066670)
#define STANDART_HASH_XXHASH_XXHASH128__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B06D870)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int xxHash128_TypeDefinitionIndex = 7826;

	class xxHash128 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_XXH3_SECRET()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x7220);
		}
		static ::Il2CppArray<::System::UInt64>** StaticGet_XXH3_INIT_ACC()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x7228);
		}
		static ::System::Int32* StaticGet_XXH_STRIPE_LEN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3770);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_STARTOFFSET()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3774);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_MERGEACCS_START()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3778);
		}
		static ::System::Byte* StaticGet_MM_SHUFFLE_1_0_3_2()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x377C);
		}
		static ::System::Byte* StaticGet_MM_SHUFFLE_0_3_0_1()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x377D);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3780);
		}
		static ::System::Int32* StaticGet_XXH_ACC_NB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3784);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_3()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3788);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_2()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3790);
		}
		static ::System::Int32* StaticGet_XXH3_SECRET_DEFAULT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3794);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_1()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x3798);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_CONSUME_RATE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37A0);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_DEFAULT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37A4);
		}
		static ::System::Int32* StaticGet_XXH3_SECRET_SIZE_MIN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37A8);
		}
		static ::System::Int32* StaticGet_XXH3_ACC_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37AC);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_4()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37B0);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_3()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37B4);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_4()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37B8);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_5()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37C0);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_LASTOFFSET()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37C8);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37CC);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_2()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37D0);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37D8);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_LASTACC_START()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash128_TypeDefinitionIndex)->GetStaticField(0x37DC);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128__CCTOR_OFFSET))();
		}

		static ::System::UInt32 XXH_rotl32(::System::UInt32 x, ::System::Int32 r)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_ROTL32_OFFSET))(x, r);
		}

		static ::System::UInt64 XXH_rotl64(::System::UInt64 x, ::System::Int32 r)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_ROTL64_OFFSET))(x, r);
		}

		static ::System::UInt64 XXH_readLE64(::System::Byte* ptr)
		{
			return ((::System::UInt64(*)(::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_READLE64_OFFSET))(ptr);
		}

		static ::System::UInt32 XXH_readLE32(::System::Byte* ptr)
		{
			return ((::System::UInt32(*)(::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_READLE32_OFFSET))(ptr);
		}

		static ::System::UInt64 XXH_xorshift64(::System::UInt64 v64, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_XORSHIFT64_OFFSET))(v64, shift);
		}

		static ::System::UInt32 XXH_swap32(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_SWAP32_OFFSET))(x);
		}

		static ::System::UInt64 XXH_swap64(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_SWAP64_OFFSET))(x);
		}

		static ::System::UInt64 XXH_mult32to64(::System::UInt64 x, ::System::UInt64 y)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_MULT32TO64_OFFSET))(x, y);
		}

		static ::Standart::Hash::xxHash::uint128 XXH_mult64to128(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_MULT64TO128_OFFSET))(lhs, rhs);
		}

		static ::Standart::Hash::xxHash::uint128 XXH_mult64to128_scalar(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_MULT64TO128_SCALAR_OFFSET))(lhs, rhs);
		}

		static ::System::Void XXH_writeLE64(::System::Byte* dst, ::System::UInt64 v64)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH_WRITELE64_OFFSET))(dst, v64);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_128bits_internal(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed, ::System::Byte* secret, ::System::Int32 secretLen)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::UInt64, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_128BITS_INTERNAL_OFFSET))(input, len, seed, secret, secretLen);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_0to16_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_0TO16_128B_OFFSET))(input, len, secret, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_17to128_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_17TO128_128B_OFFSET))(input, len, secret, secretSize, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_9to16_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_9TO16_128B_OFFSET))(input, len, secret, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_1to3_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_1TO3_128B_OFFSET))(input, len, secret, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_4to8_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_4TO8_128B_OFFSET))(input, len, secret, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_len_129to240_128b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_LEN_129TO240_128B_OFFSET))(input, len, secret, secretSize, seed);
		}

		static ::System::UInt64 XXH3_avalanche(::System::UInt64 h64)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_AVALANCHE_OFFSET))(h64);
		}

		static ::Standart::Hash::xxHash::uint128 XXH128_mix32B(::Standart::Hash::xxHash::uint128 acc, ::System::Byte* input_1, ::System::Byte* input_2, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::Standart::Hash::xxHash::uint128, ::System::Byte*, ::System::Byte*, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH128_MIX32B_OFFSET))(acc, input_1, input_2, secret, seed);
		}

		static ::System::UInt64 XXH3_mix16B(::System::Byte* input, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_MIX16B_OFFSET))(input, secret, seed);
		}

		static ::System::UInt64 XXH3_mul128_fold64(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_MUL128_FOLD64_OFFSET))(lhs, rhs);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_hashLong_128b_withSeed(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_128B_WITHSEED_OFFSET))(input, len, secret, secretSize, seed);
		}

		static ::Standart::Hash::xxHash::uint128 XXH3_hashLong_128b_internal(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_128B_INTERNAL_OFFSET))(input, len, secret, secretSize);
		}

		static ::System::Void XXH3_hashLong_internal_loop(::System::UInt64* acc, ::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_HASHLONG_INTERNAL_LOOP_OFFSET))(acc, input, len, secret, secretSize);
		}

		static ::System::UInt64 XXH3_mergeAccs(::System::UInt64* acc, ::System::Byte* secret, ::System::UInt64 start)
		{
			return ((::System::UInt64(*)(::System::UInt64*, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_MERGEACCS_OFFSET))(acc, secret, start);
		}

		static ::System::UInt64 XXH3_mix2Accs(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::UInt64(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_MIX2ACCS_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_accumulate(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret, ::System::Int32 nbStripes)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_OFFSET))(acc, input, secret, nbStripes);
		}

		static ::System::Void XXH3_accumulate_512(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_512_OFFSET))(acc, input, secret);
		}

		static ::System::Void XXH3_accumulate_512_scalar(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_ACCUMULATE_512_SCALAR_OFFSET))(acc, input, secret);
		}

		static ::System::Void XXH3_scalarRound(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret, ::System::Int32 lane)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_SCALARROUND_OFFSET))(acc, input, secret, lane);
		}

		static ::System::Void XXH3_scrambleAcc(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_SCRAMBLEACC_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_scrambleAcc_scalar(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_SCRAMBLEACC_SCALAR_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_scalarScrambleRound(::System::UInt64* acc, ::System::Byte* secret, ::System::Int32 lane)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_SCALARSCRAMBLEROUND_OFFSET))(acc, secret, lane);
		}

		static ::System::Void XXH3_initCustomSecret(::System::Byte* customSecret, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_INITCUSTOMSECRET_OFFSET))(customSecret, seed);
		}

		static ::System::Void XXH3_initCustomSecret_scalar(::System::Byte* customSecret, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH3_INITCUSTOMSECRET_SCALAR_OFFSET))(customSecret, seed);
		}

		static ::System::UInt64 XXH64_avalanche(::System::UInt64 hash)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_XXH64_AVALANCHE_OFFSET))(hash);
		}

		static ::Standart::Hash::xxHash::uint128 ComputeHash(::Il2CppArray<::System::Byte>* data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_OFFSET))(data, length, seed);
		}

		static ::Standart::Hash::xxHash::uint128 ComputeHash_1(::System::Span_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_1_OFFSET))(data, length, seed);
		}

		static ::Standart::Hash::xxHash::uint128 ComputeHash_2(::System::ReadOnlySpan_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_2_OFFSET))(data, length, seed);
		}

		static ::Standart::Hash::xxHash::uint128 ComputeHash_3(::System::String* str, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASH_3_OFFSET))(str, seed);
		}

		static ::Il2CppArray<::System::Byte>* ComputeHashBytes(::Il2CppArray<::System::Byte>* data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_OFFSET))(data, length, seed);
		}

		static ::Il2CppArray<::System::Byte>* ComputeHashBytes_1(::System::Span_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_1_OFFSET))(data, length, seed);
		}

		static ::Il2CppArray<::System::Byte>* ComputeHashBytes_2(::System::ReadOnlySpan_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_2_OFFSET))(data, length, seed);
		}

		static ::Il2CppArray<::System::Byte>* ComputeHashBytes_3(::System::String* str, ::System::UInt64 seed)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_COMPUTEHASHBYTES_3_OFFSET))(str, seed);
		}

		static ::Standart::Hash::xxHash::uint128 UnsafeComputeHash(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH128_UNSAFECOMPUTEHASH_OFFSET))(input, len, seed);
		}
	};
}
