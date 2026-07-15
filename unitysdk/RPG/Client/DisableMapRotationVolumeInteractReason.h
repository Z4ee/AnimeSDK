#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DisableMapRotationVolumeInteractReason_TypeDefinitionIndex = 57868;

	enum class DisableMapRotationVolumeInteractReason : ::System::Int32
	{
		Default = 0,
		LockTarget = 1,
	};
}
