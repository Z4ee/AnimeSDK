#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraScreenScopeMode_TypeDefinitionIndex = 24488;

	enum class CameraScreenScopeMode : ::System::Int32
	{
		Rect = 0,
		Ellipse = 1,
		Circle = 2,
	};
}
