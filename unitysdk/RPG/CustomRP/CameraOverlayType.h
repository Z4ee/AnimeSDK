#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CameraOverlayType_TypeDefinitionIndex = 36150;

	enum class CameraOverlayType : ::System::Int32
	{
		Base = 0,
		Overlay = 1,
	};
}
