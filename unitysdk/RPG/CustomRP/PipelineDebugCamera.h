#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PipelineDebugCamera_TypeDefinitionIndex = 36028;

	enum class PipelineDebugCamera : ::System::Int32
	{
		Invalid = 0,
		GameUI = 1,
		SceneView = 2,
		Preview = 3,
		Refelction = 4,
	};
}
