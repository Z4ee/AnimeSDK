#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 38677;

	enum class IndicatorLightType : ::System::Int32
	{
		PlayerOnLight = 5,
		None = 0,
		DecorationLight2 = 4,
		DecorationLight1 = 3,
		VisibleLight = 1,
		EventLight = 2,
	};
}
