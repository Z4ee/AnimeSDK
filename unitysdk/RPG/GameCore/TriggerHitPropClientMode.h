#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerHitPropClientMode_TypeDefinitionIndex = 24207;

	enum class TriggerHitPropClientMode : ::System::Int32
	{
		Normal = 0,
		PreShow = 1,
	};
}
