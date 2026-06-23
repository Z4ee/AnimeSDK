#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StatusEffectType_TypeDefinitionIndex = 79224;

	enum class StatusEffectType : ::System::Int32
	{
		None = 0,
		Fever = 1,
		FeverFadeOut = 4,
		Stun = 2,
	};
}
