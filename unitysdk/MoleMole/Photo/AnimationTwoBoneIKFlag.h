#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKFlag_TypeDefinitionIndex = 39690;

	enum class AnimationTwoBoneIKFlag : ::System::Byte
	{
		TakeRotationFromEffector = 0x4,
		None = 0x0,
		AllowStretching = 0x1,
		MaintainEffectorRelativeRotation = 0x2,
	};
}
