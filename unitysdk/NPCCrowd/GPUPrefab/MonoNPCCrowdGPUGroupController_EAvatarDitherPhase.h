#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int MonoNPCCrowdGPUGroupController_EAvatarDitherPhase_TypeDefinitionIndex = 47430;

	enum class MonoNPCCrowdGPUGroupController_EAvatarDitherPhase : ::System::Byte
	{
		PrepareFadeIn = 0x4,
		PrepareFadeOut = 0x1,
		FadingIn = 0x5,
		FadingOut = 0x2,
		FadedOut = 0x3,
		Visible = 0x0,
	};
}
