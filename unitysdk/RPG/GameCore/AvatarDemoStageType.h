#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoStageType_TypeDefinitionIndex = 12295;

	enum class AvatarDemoStageType : ::System::Int32
	{
		Unknown = 0,
		TrialActivity = 1,
		SpecialDisplay = 2,
	};
}
