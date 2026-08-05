#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnCheckType_TypeDefinitionIndex = 69028;

	enum class SpawnCheckType : ::System::Int32
	{
		None = 0,
		CheckPathDistance = 1,
	};
}
