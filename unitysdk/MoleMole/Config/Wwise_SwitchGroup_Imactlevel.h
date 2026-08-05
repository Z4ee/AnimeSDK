#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int Wwise_SwitchGroup_Imactlevel_TypeDefinitionIndex = 84917;

	enum class Wwise_SwitchGroup_Imactlevel : ::System::Int32
	{
		Switch_Normal = 1,
		Switch_Light = 0,
		Switch_Heavy = 2,
	};
}
