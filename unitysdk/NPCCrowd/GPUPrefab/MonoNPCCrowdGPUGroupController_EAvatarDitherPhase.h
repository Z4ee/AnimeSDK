#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_EAvatarDitherPhase_TypeDefinitionIndex = 56499;

	enum class MonoNPCCrowdGPUGroupController_EAvatarDitherPhase : ::System::Byte
	{
		FadingIn = 0x5,
		PrepareFadeOut = 0x1,
		FadingOut = 0x2,
		PrepareFadeIn = 0x4,
		FadedOut = 0x3,
		Visible = 0x0,
	};
}
