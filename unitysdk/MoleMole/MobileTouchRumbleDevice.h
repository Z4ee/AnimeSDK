#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDevice_TypeDefinitionIndex = 60425;

	enum class MobileTouchRumbleDevice : ::System::Int32
	{
		Auto = 0,
		OnlyGamepad = 2,
		OnlyCellphone = 1,
	};
}
