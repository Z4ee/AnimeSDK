#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Movement
{
	inline static constexpr unsigned int DemoLocomotionController_InputKeys_TypeDefinitionIndex = 37761;

	enum class DemoLocomotionController_InputKeys : ::System::Int32
	{
		None = 0,
		Jump = 1,
		MoveRight = 2,
		MoveLeft = 4,
		MoveForward = 8,
		MoveBackward = 16,
		Aiming = 32,
		External = -2147483648,
	};
}
