#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroPropertyType_TypeDefinitionIndex = 47758;

	enum class EnviroPropertyType : ::System::Int32
	{
		Float = 0,
		Enum = 1,
		Vector = 2,
		Texture = 3,
		Gradient = 4,
		Bool = 5,
		Prefab = 6,
		EffectLighting = 50,
		GpuParticle = 51,
		EmitterCloudParticle = 52,
		ReflectionProbe = 53,
		PointLight = 54,
		SkyLight = 55,
		Particle = 56,
		PostProcess = 57,
		LocalLightGroup = 58,
		SDFCloud = 59,
		WindZone = 60,
		Header = 101,
		Folder = 102,
		BlockTrans = 103,
		FallbackGroup = 104,
	};
}
