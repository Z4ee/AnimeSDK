#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_LevelHUDOverrideParams_TypeDefinitionIndex = 48033;

	struct alignas(4) ConfigMisc_LevelHUDOverrideParams
	{
		::System::Nullable_1<::System::Single> ShowDistanceOnIdle; // 0x10
		::System::Nullable_1<::System::Single> ShowDurationOnEnterBattle; // 0x18
	};
}
