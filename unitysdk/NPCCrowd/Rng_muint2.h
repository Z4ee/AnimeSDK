#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_RNG_MUINT2__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace NPCCrowd
{
	inline static constexpr unsigned int Rng_muint2_TypeDefinitionIndex = 53003;

	struct alignas(4) Rng_muint2
	{
		::System::UInt32 x; // 0x10
		::System::UInt32 y; // 0x14

		::System::Void _ctor(::System::UInt32 a, ::System::UInt32 b)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_RNG_MUINT2__CTOR_OFFSET))(this, a, b);
		}
	};
}
