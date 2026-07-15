#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ScaleFollowOption_TypeDefinitionIndex = 66923;

	enum class ScaleFollowOption : ::System::Int32
	{
		NotFollow = 0,
		AttachEffectScale = 1,
		AttachPointScale = 2,
		MainCamera = 3,
		EntityRootScale = 4,
		UICamera = 5,
		UI3DCamera = 6,
		CameraDist = 7,
		MainCameraBasedOnHeight = 8,
	};
}
