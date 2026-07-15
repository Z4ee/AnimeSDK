#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EffectMutexResult_TypeDefinitionIndex = 66786;

	enum class EffectMutexResult : ::System::Int32
	{
		None = 0,
		Default = 1,
		FadeOut = 2,
	};
}
