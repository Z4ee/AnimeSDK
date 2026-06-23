#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int GamepadNavDirConfig_TypeDefinitionIndex = 79176;

	struct alignas(4) GamepadNavDirConfig
	{
		::MoleMole::InputLogicEventType logicEvent; // 0x10
		::Enum_3_9F36F0CF0780ECE5 navDir; // 0x14
	};
}
