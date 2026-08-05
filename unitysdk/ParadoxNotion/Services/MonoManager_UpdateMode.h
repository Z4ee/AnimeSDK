#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_UpdateMode_TypeDefinitionIndex = 29826;

	enum class MonoManager_UpdateMode : ::System::Int32
	{
		FixedUpdate = 2,
		LateUpdate = 1,
		NormalUpdate = 0,
	};
}
