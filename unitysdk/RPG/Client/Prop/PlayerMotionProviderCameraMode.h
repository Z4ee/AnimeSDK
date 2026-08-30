#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PlayerMotionProviderCameraMode_TypeDefinitionIndex = 78327;

	enum class PlayerMotionProviderCameraMode : ::System::Int32
	{
		None = 0,
		TeleportGate = 1,
		Pinball = 2,
	};
}
