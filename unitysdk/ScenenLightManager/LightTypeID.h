#pragma once
#include "unitysdk/unitysdk.h"

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightTypeID_TypeDefinitionIndex = 47244;

	enum class LightTypeID : ::System::Int32
	{
		EngineLight = 0,
		EngineProbe = 1,
		VolumetricLightBeam = 2,
		BillboradController = 3,
		LocalAmbientVolume = 4,
		CharactetLineLightGroup = 5,
		BillboradController3 = 6,
		EngineLightWithFog = 7,
		LocalFogSphereInstance = 8,
		LineGlow = 9,
		LightweightPrefab = 10,
		EasyFog = 11,
		IrradianceCache = 12,
		Count = 13,
	};
}
