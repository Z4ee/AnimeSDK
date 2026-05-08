#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneFlag_TypeDefinitionIndex = 66004;

	enum class AnimationBlendPosePerBoneFlag : ::System::Byte
	{
		MeshSpaceScale = 0x2,
		MeshSpaceRotation = 0x1,
		None = 0x0,
	};
}
