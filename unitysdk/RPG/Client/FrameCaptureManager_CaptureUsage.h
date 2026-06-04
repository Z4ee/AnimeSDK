#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FrameCaptureManager_CaptureUsage_TypeDefinitionIndex = 65222;

	enum class FrameCaptureManager_CaptureUsage : ::System::Int32
	{
		None = 0,
		TurnPage = 1,
		FramBlend = 2,
	};
}
