#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectPropertyType_TypeDefinitionIndex = 67493;

	enum class MaterialBlockEffectPropertyType : ::System::Int32
	{
		FClipKeyWord = 0,
		DissolvePropID = 1,
		EmissionColor = 2,
		EmissionColorNight = 3,
		EmissionIntensity = 4,
		EmissionIntensityNight = 5,
		EmissionTargetColor = 6,
		EmissionColorLerpVal0 = 7,
		EmissionTargetColor1 = 8,
		EmissionColorLerpVal1 = 9,
		EmissionTargetColor2 = 10,
		EmissionColorLerpVal2 = 11,
		EmissionTargetColor3 = 12,
		EmissionColorLerpVal3 = 13,
		FresnelColorID = 14,
		FresnelBSIID = 15,
		FresnelColorStrengthID = 16,
		DissolveBase = 17,
		MemE_AlphaDist = 18,
		MemE_Alpha = 19,
		TillingOffsetID = 20,
		Count = 21,
	};
}
