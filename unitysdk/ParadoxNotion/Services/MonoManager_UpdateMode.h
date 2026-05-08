#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_UpdateMode_TypeDefinitionIndex = 27805;

	enum class MonoManager_UpdateMode : ::System::Int32
	{
		LateUpdate = 1,
		FixedUpdate = 2,
		NormalUpdate = 0,
	};
}
