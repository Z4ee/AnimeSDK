#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassAvatarWalkStatus_TypeDefinitionIndex = 73455;

	enum class WormCompassAvatarWalkStatus : ::System::Int32
	{
		Walk = 0,
		Rotate = 1,
		GlobalRotate = 2,
	};
}
