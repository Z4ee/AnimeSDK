#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectAliveState_TypeDefinitionIndex = 66777;

	enum class MonoEffectAliveState : ::System::Int32
	{
		Unknown = 0,
		LoadingInstance = 1,
		LoadingWaitEntityModel = 2,
		Alive = 3,
		Unload = 4,
		Fade = 5,
		Finish = 6,
		Removed = 7,
	};
}
