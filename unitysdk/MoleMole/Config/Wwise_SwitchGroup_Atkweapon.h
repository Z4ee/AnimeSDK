#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int Wwise_SwitchGroup_Atkweapon_TypeDefinitionIndex = 88873;

	enum class Wwise_SwitchGroup_Atkweapon : ::System::Int32
	{
		Switch_Pierce = 2,
		Switch_Slash = 0,
		Switch_Blunt = 1,
	};
}
