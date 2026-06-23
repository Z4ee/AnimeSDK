#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MobileTouchRumbleDevice_TypeDefinitionIndex = 83750;

	enum class MobileTouchRumbleDevice : ::System::Int32
	{
		OnlyGamepad = 2,
		OnlyCellphone = 1,
		Auto = 0,
	};
}
