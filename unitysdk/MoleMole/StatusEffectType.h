#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int StatusEffectType_TypeDefinitionIndex = 72693;

	enum class StatusEffectType : ::System::Int32
	{
		Stun = 2,
		FeverFadeOut = 4,
		None = 0,
		Fever = 1,
	};
}
