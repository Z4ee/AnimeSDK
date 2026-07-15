#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineStateDrivenCamera_HashPair_TypeDefinitionIndex = 37597;

	struct alignas(4) CinemachineStateDrivenCamera_HashPair
	{
		::System::Int32 parentHash; // 0x10
		::System::Int32 hash; // 0x14
	};
}
