#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATRendererBehavior_MaterialBATKeyword_TypeDefinitionIndex = 73569;

	enum class BATRendererBehavior_MaterialBATKeyword : ::System::Int32
	{
		_ = 0,
		_BAT_CROWD = 1,
		_BAT_CROWD_GPUDRIVEN = 2,
		_BAT_CROWD_GPUDRIVEN_CULLING = 3,
	};
}
