#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BossHeadEffType_TypeDefinitionIndex = 23358;

	enum class BossHeadEffType : ::System::Int32
	{
		Normal = 0,
		SamBurning = 1,
		DarkSamBurning = 2,
	};
}
