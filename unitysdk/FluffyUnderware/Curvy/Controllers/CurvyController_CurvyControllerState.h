#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_CurvyControllerState_TypeDefinitionIndex = 38986;

	enum class CurvyController_CurvyControllerState : ::System::Int32
	{
		Stopped = 0,
		Playing = 1,
		Paused = 2,
	};
}
