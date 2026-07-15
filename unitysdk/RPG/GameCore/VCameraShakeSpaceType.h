#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraShakeSpaceType_TypeDefinitionIndex = 15788;

	enum class VCameraShakeSpaceType : ::System::Int32
	{
		CameraSpace = 0,
		WorldSpace = 1,
	};
}
