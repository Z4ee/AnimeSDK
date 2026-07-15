#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayPuzzleBoard_ReplaySaveData_TypeDefinitionIndex = 65675;

	struct alignas(4) WolfBroGunPlayPuzzleBoard_ReplaySaveData
	{
		::System::UInt32 Value; // 0x10
	};
}
