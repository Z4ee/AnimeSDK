#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_CustomEvent_CustomEventMode_TypeDefinitionIndex = 65654;

	enum class WolfBroGunPlayTarget_CustomEvent_CustomEventMode : ::System::Int32
	{
		None = 0,
		AddEnergy = 1,
		AddRogueHP = 2,
	};
}
