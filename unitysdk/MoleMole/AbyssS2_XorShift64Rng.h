#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Zor/RandomGenerators/RandomEngines/XorShift64.h"

#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_GET_RNGSEED_OFFSET UNITYSDK_OFFSET(0xECE09C0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0xECE09E0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0xECE0AC0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTINT_OFFSET UNITYSDK_OFFSET(0xECE0A50)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTLONG_OFFSET UNITYSDK_OFFSET(0xECE0B40)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTUINT_OFFSET UNITYSDK_OFFSET(0xECE0BB0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_NEXTULONG_OFFSET UNITYSDK_OFFSET(0xECE0C20)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_RANGEINT_OFFSET UNITYSDK_OFFSET(0xECE0C90)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG_SET_RNGSEED_OFFSET UNITYSDK_OFFSET(0xECE09D0)
#define MOLEMOLE_ABYSSS2_XORSHIFT64RNG__CTOR_OFFSET UNITYSDK_OFFSET(0xECE09B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_XorShift64Rng_TypeDefinitionIndex = 82310;

	class AbyssS2_XorShift64Rng : public ::System::Object
	{
	public:
		::System::UInt64 _rngSeed_k__BackingField; // 0x10
		::Zor::RandomGenerators::RandomEngines::XorShift64 _shift64; // 0x18

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
