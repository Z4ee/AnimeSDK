#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FramePassCapturer_CaptureTarget_TypeDefinitionIndex = 36078;

	enum class FramePassCapturer_CaptureTarget : ::System::Int32
	{
		OnlyParam = 0,
		ReflectionProbePass = 1,
		AmbientTexPass = 2,
	};
}
