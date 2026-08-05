#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickingGroup_TypeDefinitionIndex = 8631;

	enum class ETickingGroup : ::System::Byte
	{
		Count = 0x7,
		PreUpdate = 0x1,
		None = 0x0,
		PostUpdate = 0x3,
		Update = 0x2,
		LateUpdate = 0x5,
		PostLateUpdate = 0x6,
		PreLateUpdate = 0x4,
	};
}
