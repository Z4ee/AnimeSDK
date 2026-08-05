#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int OnEnableBehaviour_TypeDefinitionIndex = 35143;

	enum class OnEnableBehaviour : ::System::Int32
	{
		None = 0,
		Play = 1,
		Restart = 2,
		RestartFromSpawnPoint = 3,
	};
}
