#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UltraDistanceCameraPrority_TypeDefinitionIndex = 69724;

	enum class UltraDistanceCameraPrority : ::System::Int32
	{
		None = 0,
		UseSkillPerform = 1,
		CameraModuleResult = 2,
	};
}
