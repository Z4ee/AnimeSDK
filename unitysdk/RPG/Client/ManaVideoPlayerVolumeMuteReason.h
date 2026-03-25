#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPlayerVolumeMuteReason_TypeDefinitionIndex = 60007;

	enum class ManaVideoPlayerVolumeMuteReason : ::System::Int32
	{
		Default = 0,
		ReadyForRendering = 1,
	};
}
