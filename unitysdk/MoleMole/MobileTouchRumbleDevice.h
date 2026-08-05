#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDevice_TypeDefinitionIndex = 52250;

	enum class MobileTouchRumbleDevice : ::System::Int32
	{
		OnlyCellphone = 1,
		OnlyGamepad = 2,
		Auto = 0,
	};
}
