#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/CityHash_Uint128.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_CITYHASH_CITYHASH128TO64_OFFSET UNITYSDK_OFFSET(0x1C136470)
#define FOUNDATION_CITYHASH_CITYHASH64WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1C136400)
#define FOUNDATION_CITYHASH_CITYHASH64WITHSEED_OFFSET UNITYSDK_OFFSET(0x1C1363B0)
#define FOUNDATION_CITYHASH_CITYHASH64_OFFSET UNITYSDK_OFFSET(0x1C135EF0)
#define FOUNDATION_CITYHASH_FETCH32_OFFSET UNITYSDK_OFFSET(0x1C136460)
#define FOUNDATION_CITYHASH_FETCH64_OFFSET UNITYSDK_OFFSET(0x1C136450)
#define FOUNDATION_CITYHASH_HASHLEN0TO16_OFFSET UNITYSDK_OFFSET(0x1C135C10)
#define FOUNDATION_CITYHASH_HASHLEN16_1_OFFSET UNITYSDK_OFFSET(0x1C135BE0)
#define FOUNDATION_CITYHASH_HASHLEN16_OFFSET UNITYSDK_OFFSET(0x1C135BA0)
#define FOUNDATION_CITYHASH_HASHLEN17TO32_OFFSET UNITYSDK_OFFSET(0x1C135D10)
#define FOUNDATION_CITYHASH_HASHLEN33TO64_OFFSET UNITYSDK_OFFSET(0x1C135E10)
#define FOUNDATION_CITYHASH_ROTATE_OFFSET UNITYSDK_OFFSET(0x1C135B70)
#define FOUNDATION_CITYHASH_SHIFTMIX_OFFSET UNITYSDK_OFFSET(0x1C135B90)
#define FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET UNITYSDK_OFFSET(0x1C135DD0)
#define FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_OFFSET UNITYSDK_OFFSET(0x1C135D90)

namespace Foundation
{
	inline static constexpr unsigned int CityHash_TypeDefinitionIndex = 8809;

	class CityHash : public ::System::Object
	{
	public:
		static ::System::UInt64 Rotate(::System::UInt64 val, ::System::Int32 shift)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_ROTATE_OFFSET))(val, shift);
		}

		static ::System::UInt64 ShiftMix(::System::UInt64 val)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_SHIFTMIX_OFFSET))(val);
		}

		static ::System::UInt64 HashLen16(::System::UInt64 u, ::System::UInt64 v)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN16_OFFSET))(u, v);
		}

		static ::System::UInt64 HashLen16_1(::System::UInt64 u, ::System::UInt64 v, ::System::UInt64 mul)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN16_1_OFFSET))(u, v, mul);
		}

		static ::System::UInt64 HashLen0To16(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN0TO16_OFFSET))(s, len);
		}

		static ::System::UInt64 HashLen17To32(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN17TO32_OFFSET))(s, len);
		}

		static ::Foundation::CityHash_Uint128 WeakHashLen32WithSeeds(::System::UInt64 w, ::System::UInt64 x, ::System::UInt64 y, ::System::UInt64 z, ::System::UInt64 a, ::System::UInt64 b)
		{
			return ((::Foundation::CityHash_Uint128(*)(::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_OFFSET))(w, x, y, z, a, b);
		}

		static ::Foundation::CityHash_Uint128 WeakHashLen32WithSeeds_1(::System::Byte* s, ::System::UInt64 a, ::System::UInt64 b)
		{
			return ((::Foundation::CityHash_Uint128(*)(::System::Byte*, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_WEAKHASHLEN32WITHSEEDS_1_OFFSET))(s, a, b);
		}

		static ::System::UInt64 HashLen33To64(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_HASHLEN33TO64_OFFSET))(s, len);
		}

		static ::System::UInt64 CityHash64(::System::Byte* s, ::System::UInt32 len)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64_OFFSET))(s, len);
		}

		static ::System::UInt64 CityHash64WithSeed(::System::Byte* s, ::System::UInt32 len, ::System::UInt64 seed)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64WITHSEED_OFFSET))(s, len, seed);
		}

		static ::System::UInt64 CityHash64WithSeeds(::System::Byte* s, ::System::UInt32 len, ::System::UInt64 seed0, ::System::UInt64 seed1)
		{
			return ((::System::UInt64(*)(::System::Byte*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH64WITHSEEDS_OFFSET))(s, len, seed0, seed1);
		}

		static ::System::UInt64 Fetch64(::System::Byte* p)
		{
			return ((::System::UInt64(*)(::System::Byte*))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_FETCH64_OFFSET))(p);
		}

		static ::System::UInt32 Fetch32(::System::Byte* p)
		{
			return ((::System::UInt32(*)(::System::Byte*))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_FETCH32_OFFSET))(p);
		}

		static ::System::UInt64 CityHash128To64(::Foundation::CityHash_Uint128& x)
		{
			return ((::System::UInt64(*)(::Foundation::CityHash_Uint128&))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_CITYHASH128TO64_OFFSET))(x);
		}
	};
}
