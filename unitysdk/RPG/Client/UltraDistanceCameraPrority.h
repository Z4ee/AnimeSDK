#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UltraDistanceCameraPrority_TypeDefinitionIndex = 66591;

	enum class UltraDistanceCameraPrority : ::System::Int32
	{
		None = 0,
		UseSkillPerform = 1,
		CameraModuleResult = 2,
	};
}
