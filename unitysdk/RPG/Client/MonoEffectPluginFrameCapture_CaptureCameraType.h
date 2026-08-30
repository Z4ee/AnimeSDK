#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFrameCapture_CaptureCameraType_TypeDefinitionIndex = 70035;

	enum class MonoEffectPluginFrameCapture_CaptureCameraType : ::System::Int32
	{
		MainCamera = 0,
		UI3DCamera = 1,
		UICamera = 2,
	};
}
