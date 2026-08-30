#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageTextType_TypeDefinitionIndex = 24396;

	enum class DamageTextType : ::System::Int32
	{
		Invalid = 0,
		Critical = 1,
	};
}
