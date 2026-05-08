#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Standart/Hash/xxHash/uint128.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x19DC3D80)
#define STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x19DC3ED0)
#define STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_3_OFFSET UNITYSDK_OFFSET(0x19DC4020)
#define STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x19DC3C30)
#define STANDART_HASH_XXHASH_XXHASH3_UNSAFECOMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x19DC4150)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_64BITS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19DBEA90)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_512_OFFSET UNITYSDK_OFFSET(0x19DC3520)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_512_SCALAR_OFFSET UNITYSDK_OFFSET(0x19DC36C0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_OFFSET UNITYSDK_OFFSET(0x19DC3430)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x19DC0370)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_64B_INTERNAL_OFFSET UNITYSDK_OFFSET(0x19DC1910)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_64B_WITHSEED_OFFSET UNITYSDK_OFFSET(0x19DC10C0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_INTERNAL_LOOP_OFFSET UNITYSDK_OFFSET(0x19DC2B30)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_INITCUSTOMSECRET_OFFSET UNITYSDK_OFFSET(0x19DC1570)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_INITCUSTOMSECRET_SCALAR_OFFSET UNITYSDK_OFFSET(0x19DC1770)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_0TO16_64B_OFFSET UNITYSDK_OFFSET(0x19DBFA80)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_129TO240_64B_OFFSET UNITYSDK_OFFSET(0x19DC0D00)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_17TO128_64B_OFFSET UNITYSDK_OFFSET(0x19DC06F0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_1TO3_64B_OFFSET UNITYSDK_OFFSET(0x19DC05C0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_4TO8_64B_OFFSET UNITYSDK_OFFSET(0x19DC03F0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_9TO16_64B_OFFSET UNITYSDK_OFFSET(0x19DBFF90)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_MERGEACCS_OFFSET UNITYSDK_OFFSET(0x19DC2770)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_MIX16B_OFFSET UNITYSDK_OFFSET(0x19DC0C80)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_MIX2ACCS_OFFSET UNITYSDK_OFFSET(0x19DC2AC0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_MUL128_FOLD64_OFFSET UNITYSDK_OFFSET(0x19DC0210)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_RRMXMX_OFFSET UNITYSDK_OFFSET(0x19DC0520)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_SCALARROUND_OFFSET UNITYSDK_OFFSET(0x19DC37F0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_SCALARSCRAMBLEROUND_OFFSET UNITYSDK_OFFSET(0x19DC3B30)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_SCRAMBLEACC_OFFSET UNITYSDK_OFFSET(0x19DC3880)
#define STANDART_HASH_XXHASH_XXHASH3_XXH3_SCRAMBLEACC_SCALAR_OFFSET UNITYSDK_OFFSET(0x19DC3A00)
#define STANDART_HASH_XXHASH_XXHASH3_XXH64_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x19DC3BB0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_MULT32TO64_OFFSET UNITYSDK_OFFSET(0x19DBE860)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_MULT64TO128_OFFSET UNITYSDK_OFFSET(0x19DBE8C0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_MULT64TO128_SCALAR_OFFSET UNITYSDK_OFFSET(0x19DBE9E0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_READLE32_OFFSET UNITYSDK_OFFSET(0x19DBE840)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_READLE64_OFFSET UNITYSDK_OFFSET(0x19DBE830)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_ROTL64_OFFSET UNITYSDK_OFFSET(0x19DBE8A0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_SWAP32_OFFSET UNITYSDK_OFFSET(0x19DBE890)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_SWAP64_OFFSET UNITYSDK_OFFSET(0x19DBE850)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_WRITELE64_OFFSET UNITYSDK_OFFSET(0x19DBE8B0)
#define STANDART_HASH_XXHASH_XXHASH3_XXH_XORSHIFT64_OFFSET UNITYSDK_OFFSET(0x19DBE870)
#define STANDART_HASH_XXHASH_XXHASH3__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DC4360)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int xxHash3_TypeDefinitionIndex = 7695;

	class xxHash3 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt64>** StaticGet_XXH3_INIT_ACC()
		{
			return (::Il2CppArray<::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x72F0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_XXH3_SECRET()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x72F8);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_2()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_5()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3918);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_2()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x391C);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_3()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3920);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_1()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3928);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_1()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_MERGEACCS_START()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3934);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_CONSUME_RATE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3938);
		}
		static ::System::Byte* StaticGet_MM_SHUFFLE_1_0_3_2()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x393C);
		}
		static ::System::Byte* StaticGet_MM_SHUFFLE_0_3_0_1()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x393D);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_DEFAULT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_MAX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3944);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_4()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3948);
		}
		static ::System::Int32* StaticGet_XXH_SECRET_LASTACC_START()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x394C);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_STARTOFFSET()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		static ::System::Int32* StaticGet_XXH_STRIPE_LEN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3954);
		}
		static ::System::Int32* StaticGet_XXH_ACC_NB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3958);
		}
		static ::System::Int32* StaticGet_XXH3_MIDSIZE_LASTOFFSET()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x395C);
		}
		static ::System::UInt32* StaticGet_XXH_PRIME32_3()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::System::Int32* StaticGet_XXH3_SECRET_SIZE_MIN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3964);
		}
		static ::System::Int32* StaticGet_XXH3_SECRET_DEFAULT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_4()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3970);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_5()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash3_TypeDefinitionIndex)->GetStaticField(0x3978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3__CCTOR_OFFSET))();
		}

		static ::System::UInt64 XXH_readLE64(::System::Byte* ptr)
		{
			return ((::System::UInt64(*)(::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_READLE64_OFFSET))(ptr);
		}

		static ::System::UInt32 XXH_readLE32(::System::Byte* ptr)
		{
			return ((::System::UInt32(*)(::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_READLE32_OFFSET))(ptr);
		}

		static ::System::UInt64 XXH_swap64(::System::UInt64 x)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_SWAP64_OFFSET))(x);
		}

		static ::System::UInt64 XXH_mult32to64(::System::UInt64 x, ::System::UInt64 y)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_MULT32TO64_OFFSET))(x, y);
		}

		static ::System::UInt64 XXH_xorshift64(::System::UInt64 v64, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_XORSHIFT64_OFFSET))(v64, shift);
		}

		static ::System::UInt32 XXH_swap32(::System::UInt32 x)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_SWAP32_OFFSET))(x);
		}

		static ::System::UInt64 XXH_rotl64(::System::UInt64 x, ::System::Int32 r)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_ROTL64_OFFSET))(x, r);
		}

		static ::System::Void XXH_writeLE64(::System::Byte* dst, ::System::UInt64 v64)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_WRITELE64_OFFSET))(dst, v64);
		}

		static ::Standart::Hash::xxHash::uint128 XXH_mult64to128(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_MULT64TO128_OFFSET))(lhs, rhs);
		}

		static ::Standart::Hash::xxHash::uint128 XXH_mult64to128_scalar(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::Standart::Hash::xxHash::uint128(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH_MULT64TO128_SCALAR_OFFSET))(lhs, rhs);
		}

		static ::System::UInt64 XXH3_64bits_internal(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed64, ::System::Byte* secret, ::System::Int32 secretLen)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_64BITS_INTERNAL_OFFSET))(input, len, seed64, secret, secretLen);
		}

		static ::System::UInt64 XXH3_len_0to16_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_0TO16_64B_OFFSET))(input, len, secret, seed);
		}

		static ::System::UInt64 XXH3_len_9to16_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_9TO16_64B_OFFSET))(input, len, secret, seed);
		}

		static ::System::UInt64 XXH3_mul128_fold64(::System::UInt64 lhs, ::System::UInt64 rhs)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_MUL128_FOLD64_OFFSET))(lhs, rhs);
		}

		static ::System::UInt64 XXH3_avalanche(::System::UInt64 h64)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_AVALANCHE_OFFSET))(h64);
		}

		static ::System::UInt64 XXH3_len_4to8_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_4TO8_64B_OFFSET))(input, len, secret, seed);
		}

		static ::System::UInt64 XXH3_rrmxmx(::System::UInt64 h64, ::System::Int32 len)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_RRMXMX_OFFSET))(h64, len);
		}

		static ::System::UInt64 XXH3_len_1to3_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_1TO3_64B_OFFSET))(input, len, secret, seed);
		}

		static ::System::UInt64 XXH3_len_17to128_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_17TO128_64B_OFFSET))(input, len, secret, secretSize, seed);
		}

		static ::System::UInt64 XXH3_mix16B(::System::Byte* input, ::System::Byte* secret, ::System::UInt64 seed64)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_MIX16B_OFFSET))(input, secret, seed64);
		}

		static ::System::UInt64 XXH3_len_129to240_64b(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_LEN_129TO240_64B_OFFSET))(input, len, secret, secretSize, seed);
		}

		static ::System::UInt64 XXH3_hashLong_64b_withSeed(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed, ::System::Byte* secret, ::System::Int32 secretSize)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_64B_WITHSEED_OFFSET))(input, len, seed, secret, secretSize);
		}

		static ::System::Void XXH3_initCustomSecret(::System::Byte* customSecret, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_INITCUSTOMSECRET_OFFSET))(customSecret, seed);
		}

		static ::System::Void XXH3_initCustomSecret_scalar(::System::Byte* customSecret, ::System::UInt64 seed)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_INITCUSTOMSECRET_SCALAR_OFFSET))(customSecret, seed);
		}

		static ::System::UInt64 XXH3_hashLong_64b_internal(::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_64B_INTERNAL_OFFSET))(input, len, secret, secretSize);
		}

		static ::System::UInt64 XXH3_mergeAccs(::System::UInt64* acc, ::System::Byte* secret, ::System::UInt64 start)
		{
			return ((::System::UInt64(*)(::System::UInt64*, ::System::Byte*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_MERGEACCS_OFFSET))(acc, secret, start);
		}

		static ::System::UInt64 XXH3_mix2Accs(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::UInt64(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_MIX2ACCS_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_hashLong_internal_loop(::System::UInt64* acc, ::System::Byte* input, ::System::Int32 len, ::System::Byte* secret, ::System::Int32 secretSize)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Int32, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_HASHLONG_INTERNAL_LOOP_OFFSET))(acc, input, len, secret, secretSize);
		}

		static ::System::Void XXH3_accumulate(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret, ::System::Int32 nbStripes)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_OFFSET))(acc, input, secret, nbStripes);
		}

		static ::System::Void XXH3_accumulate_512(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_512_OFFSET))(acc, input, secret);
		}

		static ::System::Void XXH3_accumulate_512_scalar(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_ACCUMULATE_512_SCALAR_OFFSET))(acc, input, secret);
		}

		static ::System::Void XXH3_scalarRound(::System::UInt64* acc, ::System::Byte* input, ::System::Byte* secret, ::System::Int32 lane)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_SCALARROUND_OFFSET))(acc, input, secret, lane);
		}

		static ::System::Void XXH3_scrambleAcc(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_SCRAMBLEACC_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_scrambleAcc_scalar(::System::UInt64* acc, ::System::Byte* secret)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_SCRAMBLEACC_SCALAR_OFFSET))(acc, secret);
		}

		static ::System::Void XXH3_scalarScrambleRound(::System::UInt64* acc, ::System::Byte* secret, ::System::Int32 lane)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH3_SCALARSCRAMBLEROUND_OFFSET))(acc, secret, lane);
		}

		static ::System::UInt64 XXH64_avalanche(::System::UInt64 hash)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_XXH64_AVALANCHE_OFFSET))(hash);
		}

		static ::System::UInt64 ComputeHash(::Il2CppArray<::System::Byte>* data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_1(::System::Span_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_1_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_2(::System::ReadOnlySpan_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_2_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_3(::System::String* unicode, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_COMPUTEHASH_3_OFFSET))(unicode, seed);
		}

		static ::System::UInt64 UnsafeComputeHash(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH3_UNSAFECOMPUTEHASH_OFFSET))(input, len, seed);
		}
	};
}
