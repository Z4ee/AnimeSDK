#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleEnableType_TypeDefinitionIndex = 67475;

	enum class MobileTouchRumbleEnableType : ::System::Int32
	{
		Disable = 0,
		OnlyEnableBattle = 2,
		AllEnable = 3,
		OnlyEnablePerform = 1,
	};
}
