#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int IndicatorLightPresetType_TypeDefinitionIndex = 44278;

	enum class IndicatorLightPresetType : ::System::Int32
	{
		None = 0,
		Normal = 4,
		PlayerOn = 6,
		Brighten = 2,
		Visible = 1,
		Empty = 3,
		Battle = 5,
	};
}
