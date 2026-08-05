#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleEnableType_TypeDefinitionIndex = 90926;

	enum class MobileTouchRumbleEnableType : ::System::Int32
	{
		OnlyEnableBattle = 2,
		OnlyEnablePerform = 1,
		AllEnable = 3,
		Disable = 0,
	};
}
