#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StatusEffectType_TypeDefinitionIndex = 40829;

	enum class StatusEffectType : ::System::Int32
	{
		Stun = 2,
		FeverFadeOut = 4,
		Fever = 1,
		None = 0,
	};
}
