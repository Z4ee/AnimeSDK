#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int SummerTideTreasuresSubSystem_RewardInfo_TypeDefinitionIndex = 80770;

	struct alignas(4) SummerTideTreasuresSubSystem_RewardInfo
	{
		::System::Int32 id; // 0x10
		::System::Int32 count; // 0x14
	};
}
