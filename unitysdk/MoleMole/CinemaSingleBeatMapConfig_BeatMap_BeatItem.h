#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int CinemaSingleBeatMapConfig_BeatMap_BeatItem_TypeDefinitionIndex = 46380;

	struct alignas(4) CinemaSingleBeatMapConfig_BeatMap_BeatItem
	{
		::System::Single beat; // 0x10
		::System::Int32 bubbleSubType; // 0x14
		::System::Int32 bubbleLocation; // 0x18
		::System::Single existBeatDuration; // 0x1C
	};
}
