#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoadRashGameModifier_PlayerUltimateQTEWindow_TypeDefinitionIndex = 58577;

	struct alignas(4) RoadRashGameModifier_PlayerUltimateQTEWindow
	{
		::System::Single QTEStart; // 0x10
		::System::Single QTEEnd; // 0x14
		::System::Single Init; // 0x18
		::System::Single DurationSeconds; // 0x1C
	};
}
