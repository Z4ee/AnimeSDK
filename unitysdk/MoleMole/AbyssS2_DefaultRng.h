#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }

#define MOLEMOLE_ABYSSS2_DEFAULTRNG_GET_RNGSEED_OFFSET UNITYSDK_OFFSET(0x123F5710)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0x123F5730)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x123F5800)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTINT_OFFSET UNITYSDK_OFFSET(0x123F57A0)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTLONG_OFFSET UNITYSDK_OFFSET(0x123F5860)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTUINT_OFFSET UNITYSDK_OFFSET(0x123F58E0)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTULONG_OFFSET UNITYSDK_OFFSET(0x123F5940)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_RANGEINT_OFFSET UNITYSDK_OFFSET(0x123F5990)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG_SET_RNGSEED_OFFSET UNITYSDK_OFFSET(0x123F5720)
#define MOLEMOLE_ABYSSS2_DEFAULTRNG__CTOR_OFFSET UNITYSDK_OFFSET(0x123F56B0)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_DefaultRng_TypeDefinitionIndex = 82322;

	class AbyssS2_DefaultRng : public ::System::Object
	{
	public:
		::System::Random* rnd; // 0x10
		::System::UInt64 _rngSeed_k__BackingField; // 0x18

		::System::Void _ctor(::System::Int64 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG__CTOR_OFFSET))(this, seed);
		}

		::System::UInt64 get_rngSeed()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_GET_RNGSEED_OFFSET))(this);
		}

		::System::Void set_rngSeed(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_SET_RNGSEED_OFFSET))(this, value);
		}

		::System::Boolean NextBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTBOOL_OFFSET))(this);
		}

		::System::Int32 NextInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTINT_OFFSET))(this);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTFLOAT_OFFSET))(this);
		}

		::System::Int64 NextLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTLONG_OFFSET))(this);
		}

		::System::UInt32 NextUint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTUINT_OFFSET))(this);
		}

		::System::UInt64 NextULong()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_NEXTULONG_OFFSET))(this);
		}

		::System::Int32 RangeInt(::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_DEFAULTRNG_RANGEINT_OFFSET))(this, start, end);
		}
	};
}
