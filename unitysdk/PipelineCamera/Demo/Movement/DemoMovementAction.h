#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera::Demo::Movement
{
	inline static constexpr unsigned int DemoMovementAction_TypeDefinitionIndex = 37758;

	enum class DemoMovementAction : ::System::Int32
	{
		None = 0,
		Jump = 1,
	};
}
