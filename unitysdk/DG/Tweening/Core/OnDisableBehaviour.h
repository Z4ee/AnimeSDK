#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int OnDisableBehaviour_TypeDefinitionIndex = 32935;

	enum class OnDisableBehaviour : ::System::Int32
	{
		None = 0,
		Pause = 1,
		Rewind = 2,
		Kill = 3,
		KillAndComplete = 4,
		DestroyGameObject = 5,
	};
}
