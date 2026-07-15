#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EFollowFreezeSpace_TypeDefinitionIndex = 65378;

	enum class EFollowFreezeSpace : ::System::Int32
	{
		World = 0,
		Entity = 1,
	};
}
