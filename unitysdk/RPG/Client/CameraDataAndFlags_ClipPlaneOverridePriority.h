#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDataAndFlags_ClipPlaneOverridePriority_TypeDefinitionIndex = 69518;

	enum class CameraDataAndFlags_ClipPlaneOverridePriority : ::System::Int32
	{
		EnvSystem = 1,
		Default = 0,
	};
}
