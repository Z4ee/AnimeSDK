#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CylinderCaptureMode_TypeDefinitionIndex = 70156;

	enum class CylinderCaptureMode : ::System::Int32
	{
		InsideOut = 0,
		OutsideIn = 1,
	};
}
