#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameCaptureType_TypeDefinitionIndex = 36071;

	enum class FrameCaptureType : ::System::Int32
	{
		CaptureFrame = 0,
		CaptureBoundary = 1,
		CaptureBoundaryEx = 2,
	};
}
