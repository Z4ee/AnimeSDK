#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusType_TypeDefinitionIndex = 15376;

	enum class ChimeraDuelStatusType : ::System::Int32
	{
		None = 0,
		Evil = 1,
		ExtraCastAdditionalSkill = 2,
		DanHengBless = 3,
	};
}
