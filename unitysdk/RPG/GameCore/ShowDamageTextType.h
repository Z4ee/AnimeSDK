#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDamageTextType_TypeDefinitionIndex = 21797;

	enum class ShowDamageTextType : ::System::Int32
	{
		DamageDown = 0,
		DamageUp = 1,
	};
}
