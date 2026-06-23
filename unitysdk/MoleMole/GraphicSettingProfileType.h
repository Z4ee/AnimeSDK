#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int GraphicSettingProfileType_TypeDefinitionIndex = 53238;

	enum class GraphicSettingProfileType : ::System::Int32
	{
		AutoExposure = 20,
		VSync = 3,
		DepthOfField = 14,
		FrameRate = 2,
		SceneGlare = 19,
		ShadingQuality = 17,
		GlobalIllumination = 21,
		ParticleQuality = 10,
		MirrorReflection = 9,
		VolumetricCloud = 13,
		Distortion = 16,
		AnisotropicSampling = 23,
		VolumetricFog = 7,
		Bloom = 8,
		MotionBlur = 15,
		SceneQuality = 18,
		ShadowQuality = 5,
		LoopSubdivision = 22,
		AntiAlias = 6,
		None = 0,
		ModelQuality = 12,
		DpiFactor = 11,
		RenderScale = 4,
	};
}
