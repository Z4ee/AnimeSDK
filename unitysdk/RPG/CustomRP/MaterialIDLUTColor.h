#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialIDLUTColor_TypeDefinitionIndex = 36331;

	enum class MaterialIDLUTColor : ::System::Int32
	{
		SpecularColor = 0,
		OutlineColor = 1,
		RimColor = 2,
		RimShadowColor = 3,
		BloomColor = 4,
	};
}
