#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FrameCapture_CaptureType_TypeDefinitionIndex = 36067;

	enum class FrameCapture_CaptureType : ::System::Int32
	{
		Invalid = 0,
		Game = 1,
		Game_UI = 2,
	};
}
