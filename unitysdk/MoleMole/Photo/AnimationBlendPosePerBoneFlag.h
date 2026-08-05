#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneFlag_TypeDefinitionIndex = 72330;

	enum class AnimationBlendPosePerBoneFlag : ::System::Byte
	{
		MeshSpaceRotation = 0x1,
		None = 0x0,
		MeshSpaceScale = 0x2,
	};
}
