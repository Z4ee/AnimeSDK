#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLevelCameraType_TypeDefinitionIndex = 17881;

	enum class FiveDimLevelCameraType : ::System::Int32
	{
		Fix = 0,
		FollowPlayer = 1,
	};
}
