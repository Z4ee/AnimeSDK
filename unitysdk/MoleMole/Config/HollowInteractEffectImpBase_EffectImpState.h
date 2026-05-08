#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowInteractEffectImpBase_EffectImpState_TypeDefinitionIndex = 80391;

	enum class HollowInteractEffectImpBase_EffectImpState : ::System::Int32
	{
		Finish = 2,
		Executing = 1,
		None = 0,
	};
}
