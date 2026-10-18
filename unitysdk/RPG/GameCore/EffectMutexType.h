#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectMutexType_TypeDefinitionIndex = 24491;

	enum class EffectMutexType : ::System::Int32
	{
		None = 0,
		Entity = 1,
	};
}
