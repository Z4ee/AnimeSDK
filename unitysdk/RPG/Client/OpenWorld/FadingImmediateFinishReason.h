#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int FadingImmediateFinishReason_TypeDefinitionIndex = 73841;

	enum class FadingImmediateFinishReason : ::System::Int32
	{
		None = 0,
		ForceStreaming = 1,
		ShowFadingOff = 2,
		CameraCull = 3,
		NotVisible = 4,
		LightWeightInvisible = 5,
		DitherDisabledGlobal = 6,
		DitherDisabledTemplate = 7,
		SwitchInVision = 8,
		Cleanup = 9,
	};
}
