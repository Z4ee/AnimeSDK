#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PhantomPlayerState_TypeDefinitionIndex = 40820;

	enum class PhantomPlayerState : ::System::Int32
	{
		LoadingAsset = 0,
		LoadingView = 1,
		Playing = 2,
		PendingDestroy = 3,
		Destroying = 4,
		TriggerReplay = 5,
		ReplayFadeOut = 6,
		ReplayFadeIn = 7,
	};
}
