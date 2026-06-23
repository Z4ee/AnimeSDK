#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define MESSAGEPACK_INTERNAL_FARMHASH_FETCH32_OFFSET UNITYSDK_OFFSET(0x1BC54390)
#define MESSAGEPACK_INTERNAL_FARMHASH_FETCH64_OFFSET UNITYSDK_OFFSET(0x1BC54A50)
#define MESSAGEPACK_INTERNAL_FARMHASH_FMIX_OFFSET UNITYSDK_OFFSET(0x1BC543B0)
#define MESSAGEPACK_INTERNAL_FARMHASH_H32_OFFSET UNITYSDK_OFFSET(0x1BC55060)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN0TO4_OFFSET UNITYSDK_OFFSET(0x1BC54400)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN13TO24_OFFSET UNITYSDK_OFFSET(0x1BC54650)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN5TO12_OFFSET UNITYSDK_OFFSET(0x1BC545B0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32_1_OFFSET UNITYSDK_OFFSET(0x1BC54710)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH32_OFFSET UNITYSDK_OFFSET(0x1BC54290)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64NA_OFFSET UNITYSDK_OFFSET(0x1BC553D0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64UO_OFFSET UNITYSDK_OFFSET(0x1BC55690)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64_1_OFFSET UNITYSDK_OFFSET(0x1BC54AC0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASH64_OFFSET UNITYSDK_OFFSET(0x1BC54A10)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN0TO16_OFFSET UNITYSDK_OFFSET(0x1BC54EE0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN16_OFFSET UNITYSDK_OFFSET(0x1BC54A90)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN17TO32_OFFSET UNITYSDK_OFFSET(0x1BC54FE0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN33TO64_OFFSET UNITYSDK_OFFSET(0x1BC550E0)
#define MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN65TO96_OFFSET UNITYSDK_OFFSET(0x1BC551E0)
#define MESSAGEPACK_INTERNAL_FARMHASH_H_OFFSET UNITYSDK_OFFSET(0x1BC55660)
#define MESSAGEPACK_INTERNAL_FARMHASH_MUR_OFFSET UNITYSDK_OFFSET(0x1BC543E0)
#define MESSAGEPACK_INTERNAL_FARMHASH_ROTATE32_OFFSET UNITYSDK_OFFSET(0x1BC543A0)
#define MESSAGEPACK_INTERNAL_FARMHASH_ROTATE64_OFFSET UNITYSDK_OFFSET(0x1BC54A60)
#define MESSAGEPACK_INTERNAL_FARMHASH_SHIFTMIX_OFFSET UNITYSDK_OFFSET(0x1BC54A80)
#define MESSAGEPACK_INTERNAL_FARMHASH_SWAP_OFFSET UNITYSDK_OFFSET(0x1BC54A40)
#define MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET UNITYSDK_OFFSET(0x1BC55390)
#define MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1BC55350)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int FarmHash_TypeDefinitionIndex = 30710;

	class FarmHash : public ::System::Object
	{
	public:
		// static const ::System::UInt32 c1 = 0xCC9E2D51; // 0x0
		// static const ::System::UInt32 c2 = 0x1B873593; // 0x0
		// static const ::System::UInt64 k0 = 0xC3A5C85C97CB3127; // 0x0
		// static const ::System::UInt64 k1 = 0xB492B66FBE98F273; // 0x0
		// static const ::System::UInt64 k2 = 0x9AE16A3B2F90404F; // 0x0

		static ::System::UInt32 Hash32(::System::ReadOnlySpan_1<::System::Byte> bytes)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32_OFFSET))(bytes);
		}

		static ::System::UInt32 Fetch32(::System::Byte* p)
		{
			return ((::System::UInt32(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FETCH32_OFFSET))(p);
		}

		static ::System::UInt32 Rotate32(::System::UInt32 val, ::System::Int32 shift)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_ROTATE32_OFFSET))(val, shift);
		}

		static ::System::UInt32 fmix(::System::UInt32 h)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FMIX_OFFSET))(h);
		}

		static ::System::UInt32 Mur(::System::UInt32 a, ::System::UInt32 h)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_MUR_OFFSET))(a, h);
		}

		static ::System::UInt32 Hash32Len0to4(::System::ReadOnlySpan_1<::System::Byte> s)
		{
			return ((::System::UInt32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN0TO4_OFFSET))(s);
		}

		static ::System::UInt32 Hash32Len5to12(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN5TO12_OFFSET))(s, len);
		}

		static ::System::UInt32 Hash32Len13to24(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32LEN13TO24_OFFSET))(s, len);
		}

		static ::System::UInt32 Hash32_1(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt32(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH32_1_OFFSET))(s, len);
		}

		static ::System::UInt64 Hash64(::System::ReadOnlySpan_1<::System::Byte> bytes)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64_OFFSET))(bytes);
		}

		static ::System::Void swap(::System::UInt64& x, ::System::UInt64& z)
		{
			return ((::System::Void(*)(::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_SWAP_OFFSET))(x, z);
		}

		static ::System::UInt64 Fetch64(::System::Byte* p)
		{
			return ((::System::UInt64(*)(::System::Byte*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_FETCH64_OFFSET))(p);
		}

		static ::System::UInt64 Rotate64(::System::UInt64 val, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_ROTATE64_OFFSET))(val, shift);
		}

		static ::System::UInt64 ShiftMix(::System::UInt64 val)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_SHIFTMIX_OFFSET))(val);
		}

		static ::System::UInt64 HashLen16(::System::UInt64 u, ::System::UInt64 v, ::System::UInt64 mul)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN16_OFFSET))(u, v, mul);
		}

		static ::System::UInt64 Hash64_1(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64_1_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen0to16(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN0TO16_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen17to32(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN17TO32_OFFSET))(s, len);
		}

		static ::System::UInt64 H32(::System::Byte* s, ::System::UInt32 len, ::System::UInt64 mul, ::System::UInt64 seed0, ::System::UInt64 seed1)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_H32_OFFSET))(s, len, mul, seed0, seed1);
		}

		static ::System::UInt64 HashLen33to64(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN33TO64_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen65to96(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASHLEN65TO96_OFFSET))(s, len);
		}

		static ::System::Void WeakHashLen32WithSeeds(::System::UInt64 w, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 a, ::System::UInt64 b, ::System::UInt64& first, ::System::UInt64& second)
		{
			return ((::System::Void(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_OFFSET))(w, x, y, z, a, b, first, second);
		}

		static ::System::Void WeakHashLen32WithSeeds_1(::System::Byte* s, ::System::UInt64 a, ::System::UInt64 b, ::System::UInt64& first, ::System::UInt64& second)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::UInt64, ::System::UInt64, ::System::UInt64&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET))(s, a, b, first, second);
		}

		static ::System::UInt64 Hash64NA(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64NA_OFFSET))(s, len);
		}

		static ::System::UInt64 H(::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 mul, ::System::Int32 r)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_H_OFFSET))(x, y, mul, r);
		}

		static ::System::UInt64 Hash64UO(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_FARMHASH_HASH64UO_OFFSET))(s, len);
		}
	};
}
