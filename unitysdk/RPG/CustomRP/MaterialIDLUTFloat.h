#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MaterialIDLUTFloat_TypeDefinitionIndex = 36332;

	enum class MaterialIDLUTFloat : ::System::Int32
	{
		SpecularShininess = 0,
		SpecularRoughness = 1,
		SpecularIntensity = 2,
		RimType = 3,
		RimEdgeSoftness = 4,
		RimDark = 5,
		RimShadowWidth = 6,
		RimShadowFeather = 7,
		BloomIntensity = 8,
	};
}
