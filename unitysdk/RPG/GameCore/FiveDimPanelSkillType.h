#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPanelSkillType_TypeDefinitionIndex = 13596;

	enum class FiveDimPanelSkillType : ::System::Int32
	{
		Jump = 0,
		Flute = 1,
		SkinChange = 2,
		SkinChangeDefault = 3,
		Dash = 4,
	};
}
