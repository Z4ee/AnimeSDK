#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSupportedColliderLayer_TypeDefinitionIndex = 23650;

	enum class AdvSupportedColliderLayer : ::System::Int32
	{
		StageColliderLayer = 0,
		CameraColliderLayer = 1,
		AirWallColliderLayer = 2,
	};
}
