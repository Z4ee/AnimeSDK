#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicWavesManager_IntervalState_TypeDefinitionIndex = 67293;

	enum class Effect_DynamicWavesManager_IntervalState : ::System::Int32
	{
		NonUpdate = 0,
		Update = 1,
		SpecialUpdate = 2,
	};
}
