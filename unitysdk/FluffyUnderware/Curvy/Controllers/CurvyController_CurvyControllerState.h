#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_CurvyControllerState_TypeDefinitionIndex = 39562;

	enum class CurvyController_CurvyControllerState : ::System::Int32
	{
		Playing = 1,
		Stopped = 0,
		Paused = 2,
	};
}
