#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CITYHASH_UINT128__CTOR_OFFSET UNITYSDK_OFFSET(0x2BDE80)

namespace Foundation
{
	inline static constexpr unsigned int CityHash_Uint128_TypeDefinitionIndex = 8479;

	struct alignas(8) CityHash_Uint128
	{
		::System::UInt64 Low; // 0x10
		::System::UInt64 High; // 0x18

		::System::Void _ctor(::System::UInt64 low, ::System::UInt64 high)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_CITYHASH_UINT128__CTOR_OFFSET))(this, low, high);
		}
	};
}
