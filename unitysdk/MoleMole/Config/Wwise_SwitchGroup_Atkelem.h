#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int Wwise_SwitchGroup_Atkelem_TypeDefinitionIndex = 70678;

	enum class Wwise_SwitchGroup_Atkelem : ::System::Int32
	{
		Switch_Fire = 2,
		Switch_Ice = 1,
		Switch_None = 0,
		Switch_Electirc = 3,
	};
}
