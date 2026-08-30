#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AcheronPowerNodeState_TypeDefinitionIndex = 71797;

	enum class AcheronPowerNodeState : ::System::Int32
	{
		UnActive = 0,
		Active = 1,
		ActiveRed = 2,
	};
}
