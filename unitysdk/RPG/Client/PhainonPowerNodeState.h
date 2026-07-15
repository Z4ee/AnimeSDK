#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhainonPowerNodeState_TypeDefinitionIndex = 68667;

	enum class PhainonPowerNodeState : ::System::Int32
	{
		UnActive = 0,
		Active = 1,
		ActiveRed = 2,
	};
}
