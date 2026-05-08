#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleEnableType_TypeDefinitionIndex = 43206;

	enum class MobileTouchRumbleEnableType : ::System::Int32
	{
		AllEnable = 3,
		OnlyEnableBattle = 2,
		Disable = 0,
		OnlyEnablePerform = 1,
	};
}
