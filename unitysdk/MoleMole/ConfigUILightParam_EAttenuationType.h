#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUILightParam_EAttenuationType_TypeDefinitionIndex = 74908;

	enum class ConfigUILightParam_EAttenuationType : ::System::Int32
	{
		ZeroAttenuation = 2,
		UseSlowAttenuatio = 1,
		DefaultAttenuation = 0,
	};
}
