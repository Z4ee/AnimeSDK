#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLightningStateType_TypeDefinitionIndex = 17867;

	enum class FiveDimLightningStateType : ::System::Int32
	{
		None = 0,
		Wait = 1,
		Prepare = 2,
		Attack = 3,
	};
}
