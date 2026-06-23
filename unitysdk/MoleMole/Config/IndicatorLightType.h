#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 55171;

	enum class IndicatorLightType : ::System::Int32
	{
		DecorationLight2 = 4,
		DecorationLight1 = 3,
		EventLight = 2,
		PlayerOnLight = 5,
		None = 0,
		VisibleLight = 1,
	};
}
