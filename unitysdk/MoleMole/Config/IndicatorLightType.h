#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightType_TypeDefinitionIndex = 87675;

	enum class IndicatorLightType : ::System::Int32
	{
		DecorationLight1 = 3,
		DecorationLight2 = 4,
		VisibleLight = 1,
		EventLight = 2,
		None = 0,
		PlayerOnLight = 5,
	};
}
