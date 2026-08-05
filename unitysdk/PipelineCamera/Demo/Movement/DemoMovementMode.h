#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Movement
{
	inline static constexpr unsigned int DemoMovementMode_TypeDefinitionIndex = 38420;

	enum class DemoMovementMode : ::System::Int32
	{
		InAir = 0,
		OnGround = 1,
	};
}
