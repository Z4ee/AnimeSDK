#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnCheckType_TypeDefinitionIndex = 59792;

	enum class SpawnCheckType : ::System::Int32
	{
		CheckPathDistance = 1,
		None = 0,
	};
}
