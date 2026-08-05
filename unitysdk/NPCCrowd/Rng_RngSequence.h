#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Rng_muint2.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_RNG_RNGSEQUENCE_NEXTBOOL_OFFSET UNITYSDK_OFFSET(0x7F5C40)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTFLOAT_1_OFFSET UNITYSDK_OFFSET(0x7F5CA0)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTFLOAT_OFFSET UNITYSDK_OFFSET(0x7F5C90)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTINT_1_OFFSET UNITYSDK_OFFSET(0x7F5C80)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTINT_OFFSET UNITYSDK_OFFSET(0x7F5C70)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTSTATE_OFFSET UNITYSDK_OFFSET(0x7F5BB0)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTUINT_1_OFFSET UNITYSDK_OFFSET(0x7F5C60)
#define NPCCROWD_RNG_RNGSEQUENCE_NEXTUINT_OFFSET UNITYSDK_OFFSET(0x7F5C50)
#define NPCCROWD_RNG_RNGSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace NPCCrowd
{
	inline static constexpr unsigned int Rng_RngSequence_TypeDefinitionIndex = 40926;

	struct alignas(4) Rng_RngSequence
	{
		::NPCCrowd::Rng_muint2 m_state; // 0x10

		::System::Void _ctor(::NPCCrowd::Rng_muint2 initialState)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Rng_muint2))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE__CTOR_OFFSET))(this, initialState);
		}

		::System::UInt32 NextState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTSTATE_OFFSET))(this);
		}

		::System::Boolean NextBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTBOOL_OFFSET))(this);
		}

		::System::UInt32 NextUInt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTUINT_OFFSET))(this);
		}

		::System::UInt32 NextUInt_1(::System::UInt32 min, ::System::UInt32 max)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTUINT_1_OFFSET))(this, min, max);
		}

		::System::Int32 NextInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTINT_OFFSET))(this);
		}

		::System::Int32 NextInt_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTINT_1_OFFSET))(this, min, max);
		}

		::System::Single NextFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTFLOAT_OFFSET))(this);
		}

		::System::Single NextFloat_1(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_RNGSEQUENCE_NEXTFLOAT_1_OFFSET))(this, min, max);
		}
	};
}
