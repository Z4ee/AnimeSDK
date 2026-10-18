#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CameraDebugFlag_TypeDefinitionIndex = 37696;

	enum class CameraDebugFlag : ::System::Int32
	{
		LoadGameAtHere = 1,
		ShowCameraPos = 2,
	};
}
