#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 47910;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		Empty = 3,
		Visible = 1,
		Normal = 4,
		None = 0,
		Battle = 5,
		PlayerOn = 6,
		Brighten = 2,
	};
}
