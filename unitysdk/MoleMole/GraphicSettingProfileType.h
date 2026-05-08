#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 75983;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		SceneGlare = 19,
		SceneQuality = 18,
		FrameRate = 2,
		AnisotropicSampling = 23,
		MotionBlur = 15,
		VolumetricCloud = 13,
		MirrorReflection = 9,
		ShadowQuality = 5,
		AutoExposure = 20,
		VolumetricFog = 7,
		DpiFactor = 11,
		VSync = 3,
		Distortion = 16,
		DepthOfField = 14,
		AntiAlias = 6,
		None = 0,
		ShadingQuality = 17,
		LoopSubdivision = 22,
		GlobalIllumination = 21,
		Bloom = 8,
		RenderScale = 4,
		ModelQuality = 12,
		ParticleQuality = 10,
	};
}
