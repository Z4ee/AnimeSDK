#pragma once
#include "unitysdk/unitysdk.h"

namespace Plugins::TA
{
	inline static constexpr unsigned int CGCustomGlobalAnimation_AnimationType_TypeDefinitionIndex = 38058;

	enum class CGCustomGlobalAnimation_AnimationType : ::System::Int32
	{
		Lit_Emission = 0,
		GlobalGi = 1,
		Light_Intensity = 2,
		SceneExposureIntensity = 3,
		SceneLutContribution = 4,
		Custom = 5,
	};
}
