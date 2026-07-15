#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SWRT
{
	inline static constexpr unsigned int BVH8_Decision_TypeDefinitionIndex = 35962;

	struct alignas(4) BVH8_Decision
	{
		::System::Byte Type; // 0x10
		::System::Byte DistributeLeft; // 0x11
		::System::Byte DistributeRight; // 0x12
		::System::Single Cost; // 0x14
	};
}
