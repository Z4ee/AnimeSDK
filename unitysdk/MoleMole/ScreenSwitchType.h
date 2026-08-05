#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ScreenSwitchType_TypeDefinitionIndex = 42486;

	enum class ScreenSwitchType : ::System::Int32
	{
		Close = 2,
		Switch = 1,
		Open = 0,
	};
}
