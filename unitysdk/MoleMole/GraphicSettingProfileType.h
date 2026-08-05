#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 54899;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		Distortion = 16,
		SceneGlare = 19,
		AnisotropicSampling = 23,
		SceneQuality = 18,
		GlobalIllumination = 21,
		VolumetricFog = 7,
		DepthOfField = 14,
		RenderScale = 4,
		None = 0,
		MotionBlur = 15,
		FrameRate = 2,
		AntiAlias = 6,
		ParticleQuality = 10,
		Bloom = 8,
		MirrorReflection = 9,
		ShadowQuality = 5,
		DpiFactor = 11,
		AutoExposure = 20,
		LoopSubdivision = 22,
		ModelQuality = 12,
		ShadingQuality = 17,
		VolumetricCloud = 13,
		VSync = 3,
	};
}
