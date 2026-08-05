#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ThreadSafeRandom_RandomState.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_THREADSAFERANDOM_GET_OFFSET UNITYSDK_OFFSET(0xAA8A70)
#define FOUNDATION_THREADSAFERANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0xAA89C0)
#define FOUNDATION_THREADSAFERANDOM_SETSEED_OFFSET UNITYSDK_OFFSET(0xAA8990)
#define FOUNDATION_THREADSAFERANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0xAA8990)

namespace Foundation
{
	inline static constexpr unsigned int ThreadSafeRandom_TypeDefinitionIndex = 8625;

	struct alignas(4) ThreadSafeRandom
	{
		::Foundation::ThreadSafeRandom_RandomState _state; // 0x10

		::System::Void _ctor(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM__CTOR_OFFSET))(this, seed);
		}

		::System::Int32 Range(::System::Int32 inclusiveMin, ::System::Int32 exclusiveMax)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_RANGE_OFFSET))(this, inclusiveMin, exclusiveMax);
		}

		::System::UInt32 Get()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_GET_OFFSET))(this);
		}

		::System::Void SetSeed(::System::UInt32 seed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_THREADSAFERANDOM_SETSEED_OFFSET))(this, seed);
		}
	};
}
