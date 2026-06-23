#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Zor/RandomGenerators/RandomEngines/XorShift64.h"

#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_GET_RNGSEED_OFFSET UNITYSDK_OFFSET(0x10CCB530)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0x10CCB550)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x10CCB630)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTINT_OFFSET UNITYSDK_OFFSET(0x10CCB5C0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTLONG_OFFSET UNITYSDK_OFFSET(0x10CCB6B0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTUINT_OFFSET UNITYSDK_OFFSET(0x10CCB720)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTULONG_OFFSET UNITYSDK_OFFSET(0x10CCB790)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_RANGEINT_OFFSET UNITYSDK_OFFSET(0x10CCB800)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_SET_RNGSEED_OFFSET UNITYSDK_OFFSET(0x10CCB540)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCB520)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_XorShift64Rng_TypeDefinitionIndex = 85682;

	class AbyssS2_XorShift64Rng : public ::System::Object
	{
	public:
		::Zor::RandomGenerators::RandomEngines::XorShift64 _shift64; // 0x10
		::System::UInt64 _rngSeed_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG__CTOR_OFFSET))(this, seed);
		}

		::System::UInt64 get_rngSeed()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_GET_RNGSEED_OFFSET))(this);
		}

		::System::Void set_rngSeed(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_SET_RNGSEED_OFFSET))(this, value);
		}

		::System::Boolean NextBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTBOOL_OFFSET))(this);
		}

		::System::Int32 NextInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTINT_OFFSET))(this);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTFLOAT_OFFSET))(this);
		}

		::System::Int64 NextLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTLONG_OFFSET))(this);
		}

		::System::UInt32 NextUint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTUINT_OFFSET))(this);
		}

		::System::UInt64 NextULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTULONG_OFFSET))(this);
		}

		::System::Int32 RangeInt(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_XORSHIFT64RNG_RANGEINT_OFFSET))(this, start, end);
		}
	};
}
