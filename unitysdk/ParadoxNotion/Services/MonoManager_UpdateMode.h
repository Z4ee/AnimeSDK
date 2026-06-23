#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Services
{
	inline static constexpr unsigned int MonoManager_UpdateMode_TypeDefinitionIndex = 29995;

	enum class MonoManager_UpdateMode : ::System::Int32
	{
		LateUpdate = 1,
		NormalUpdate = 0,
		FixedUpdate = 2,
	};
}
