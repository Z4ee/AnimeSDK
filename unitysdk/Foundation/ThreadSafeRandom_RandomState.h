#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_THREADSAFERANDOM_RANDOMSTATE_NEXT_OFFSET UNITYSDK_OFFSET(0x9A0080)
#define FOUNDATION_THREADSAFERANDOM_RANDOMSTATE_SETSEED_OFFSET UNITYSDK_OFFSET(0x99FFA0)

namespace Foundation
{
	inline static constexpr unsigned int ThreadSafeRandom_RandomState_TypeDefinitionIndex = 8975;

	struct alignas(4) ThreadSafeRandom_RandomState
	{
		::System::UInt32 _x; // 0x10
		::System::UInt32 _y; // 0x14
		::System::UInt32 _z; // 0x18
		::System::UInt32 _w; // 0x1C

		::System::UInt32 Next()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_RANDOMSTATE_NEXT_OFFSET))(this);
		}

		::System::Void SetSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_RANDOMSTATE_SETSEED_OFFSET))(this, seed);
		}
	};
}
