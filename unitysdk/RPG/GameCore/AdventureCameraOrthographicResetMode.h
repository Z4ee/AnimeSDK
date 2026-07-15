#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureCameraOrthographicResetMode_TypeDefinitionIndex = 23738;

	enum class AdventureCameraOrthographicResetMode : ::System::Int32
	{
		Default = 0,
		FreelookCam = 1,
		CurrentActiveVCam = 2,
		CustomFov = 3,
	};
}
