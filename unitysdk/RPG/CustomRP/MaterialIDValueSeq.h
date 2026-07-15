#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialIDValueSeq_TypeDefinitionIndex = 36330;

	enum class MaterialIDValueSeq : ::System::Int32
	{
		SpecularColor = 0,
		SpecularValPack = 1,
		OutlineColor = 2,
		RimColor = 3,
		RimLightValPack = 4,
		RimShadowColor = 5,
		RimShadowBloomPack = 6,
		BloomColor = 7,
	};
}
