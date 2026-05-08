#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect_EType_TypeDefinitionIndex = 50781;

	enum class AsistantCameraEffect_EType : ::System::Int32
	{
		FLOAT = 1,
		TEXTURE = 3,
		INT = 2,
	};
}
