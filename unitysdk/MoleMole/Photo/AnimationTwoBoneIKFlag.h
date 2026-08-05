#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationTwoBoneIKFlag_TypeDefinitionIndex = 77989;

	enum class AnimationTwoBoneIKFlag : ::System::Byte
	{
		AllowStretching = 0x1,
		MaintainEffectorRelativeRotation = 0x2,
		TakeRotationFromEffector = 0x4,
		None = 0x0,
	};
}
