#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 59440;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		Battle = 5,
		None = 0,
		Visible = 1,
		PlayerOn = 6,
		Normal = 4,
		Brighten = 2,
		Empty = 3,
	};
}
