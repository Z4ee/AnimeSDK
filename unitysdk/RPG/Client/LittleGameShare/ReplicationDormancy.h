#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationDormancy_TypeDefinitionIndex = 35328;

	enum class ReplicationDormancy : ::System::Byte
	{
		Never = 0x0,
		Awake = 0x1,
		DormantAll = 0x2,
		DormantPartial = 0x3,
		Initial = 0x4,
	};
}
