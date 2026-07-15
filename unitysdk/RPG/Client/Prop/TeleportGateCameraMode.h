#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TeleportGateCameraMode_TypeDefinitionIndex = 74943;

	enum class TeleportGateCameraMode : ::System::Int32
	{
		Normal = 0,
		Freelook3rd = 1,
	};
}
