#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SteerModeV2_TypeDefinitionIndex = 23735;

	enum class SteerModeV2 : ::System::Int32
	{
		Angle = 0,
		Target = 1,
		Follow = 2,
		RecoverToOrigin = 3,
	};
}
