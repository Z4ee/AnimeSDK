#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGCamera
{
	inline static constexpr unsigned int CameraStateBlenderConfig_PoleType_TypeDefinitionIndex = 42617;

	enum class CameraStateBlenderConfig_PoleType : ::System::Int32
	{
		TARGET_BACK = 0,
		KEEP_X = 1,
		NONE = 2,
	};
}
