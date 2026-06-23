#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_1_OFFSET UNITYSDK_OFFSET(0x1CC9C9A0)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_2_OFFSET UNITYSDK_OFFSET(0x1CC9CA70)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_3_OFFSET UNITYSDK_OFFSET(0x1CC9CAE0)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_4_OFFSET UNITYSDK_OFFSET(0x1CC9CBA0)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_5_OFFSET UNITYSDK_OFFSET(0x1CC9CC60)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_6_OFFSET UNITYSDK_OFFSET(0x1CC9D400)
#define STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1CC9C8D0)
#define STANDART_HASH_XXHASH_XXHASH64_UNSAFECOMPUTEHASH_OFFSET UNITYSDK_OFFSET(0x1CC9D540)
#define STANDART_HASH_XXHASH_XXHASH64_XXH64_AVALANCHE_OFFSET UNITYSDK_OFFSET(0x1CC9C590)
#define STANDART_HASH_XXHASH_XXHASH64_XXH64_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CC9C610)
#define STANDART_HASH_XXHASH_XXHASH64_XXH64_MERGEROUND_OFFSET UNITYSDK_OFFSET(0x1CC9C4C0)
#define STANDART_HASH_XXHASH_XXHASH64_XXH64_OFFSET UNITYSDK_OFFSET(0x1CC9BB60)
#define STANDART_HASH_XXHASH_XXHASH64_XXH64_ROUND_OFFSET UNITYSDK_OFFSET(0x1CC9C450)
#define STANDART_HASH_XXHASH_XXHASH64_XXH_ROTL64_OFFSET UNITYSDK_OFFSET(0x1CC9BB50)
#define STANDART_HASH_XXHASH_XXHASH64__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC9D5B0)
#define STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_OFFSET UNITYSDK_OFFSET(0x1CC9B0E0)
#define STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_STREAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CC9B750)
#define STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_STREAM_PROCESS_OFFSET UNITYSDK_OFFSET(0x1CC9B5D0)

namespace Standart::Hash::xxHash
{
	inline static constexpr unsigned int xxHash64_TypeDefinitionIndex = 8231;

	class xxHash64 : public ::System::Object
	{
	public:
		static ::System::UInt64* StaticGet_XXH_PRIME64_1()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash64_TypeDefinitionIndex)->GetStaticField(0x35C0);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_4()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash64_TypeDefinitionIndex)->GetStaticField(0x35C8);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_5()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash64_TypeDefinitionIndex)->GetStaticField(0x35D0);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_2()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash64_TypeDefinitionIndex)->GetStaticField(0x35D8);
		}
		static ::System::UInt64* StaticGet_XXH_PRIME64_3()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(xxHash64_TypeDefinitionIndex)->GetStaticField(0x35E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64__CCTOR_OFFSET))();
		}

		static ::System::UInt64 __inline__XXH64(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_OFFSET))(input, len, seed);
		}

		static ::System::Void __inline__XXH64_stream_process(::Il2CppArray<::System::Byte>* input, ::System::Int32 len, ::System::UInt64& v1, ::System::UInt64& v2, ::System::UInt64& v3, ::System::UInt64& v4)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_STREAM_PROCESS_OFFSET))(input, len, v1, v2, v3, v4);
		}

		static ::System::UInt64 __inline__XXH64_stream_finalize(::Il2CppArray<::System::Byte>* input, ::System::Int32 len, ::System::UInt64& v1, ::System::UInt64& v2, ::System::UInt64& v3, ::System::UInt64& v4, ::System::Int64 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::UInt64&, ::System::Int64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64___INLINE__XXH64_STREAM_FINALIZE_OFFSET))(input, len, v1, v2, v3, v4, length, seed);
		}

		static ::System::UInt64 XXH_rotl64(::System::UInt64 x, ::System::Int32 r)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH_ROTL64_OFFSET))(x, r);
		}

		static ::System::UInt64 XXH64(::System::Byte* input, ::System::Int32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH64_OFFSET))(input, len, seed);
		}

		static ::System::UInt64 XXH64_round(::System::UInt64 acc, ::System::UInt64 input)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH64_ROUND_OFFSET))(acc, input);
		}

		static ::System::UInt64 XXH64_mergeRound(::System::UInt64 acc, ::System::UInt64 val)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH64_MERGEROUND_OFFSET))(acc, val);
		}

		static ::System::UInt64 XXH64_avalanche(::System::UInt64 hash)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH64_AVALANCHE_OFFSET))(hash);
		}

		static ::System::UInt64 XXH64_finalize(::System::UInt64 hash, ::System::Byte* ptr, ::System::Int32 len)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_XXH64_FINALIZE_OFFSET))(hash, ptr, len);
		}

		static ::System::UInt64 ComputeHash(::Il2CppArray<::System::Byte>* data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_1(::Il2CppArray<::System::Byte>* data, ::System::Int32 offset, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_1_OFFSET))(data, offset, length, seed);
		}

		static ::System::UInt64 ComputeHash_2(::System::ArraySegment_1<::System::Byte> data, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ArraySegment_1<::System::Byte>, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_2_OFFSET))(data, seed);
		}

		static ::System::UInt64 ComputeHash_3(::System::Span_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Span_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_3_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_4(::System::ReadOnlySpan_1<::System::Byte> data, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_4_OFFSET))(data, length, seed);
		}

		static ::System::UInt64 ComputeHash_5(::System::IO::Stream* stream, ::System::Int32 bufferSize, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::IO::Stream*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_5_OFFSET))(stream, bufferSize, seed);
		}

		static ::System::UInt64 ComputeHash_6(::System::String* str, ::System::UInt32 seed)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_COMPUTEHASH_6_OFFSET))(str, seed);
		}

		static ::System::UInt64 UnsafeComputeHash(::System::Byte* ptr, ::System::Int32 length, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STANDART_HASH_XXHASH_XXHASH64_UNSAFECOMPUTEHASH_OFFSET))(ptr, length, seed);
		}
	};
}
