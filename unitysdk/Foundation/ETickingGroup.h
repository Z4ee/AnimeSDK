#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ETickingGroup_TypeDefinitionIndex = 8716;

	enum class ETickingGroup : ::System::Byte
	{
		None = 0x0,
		Count = 0x7,
		PostUpdate = 0x3,
		PreLateUpdate = 0x4,
		PostLateUpdate = 0x6,
		LateUpdate = 0x5,
		PreUpdate = 0x1,
		Update = 0x2,
	};
}
