#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomPostProcessPass2_Pass_TypeDefinitionIndex = 36235;

	enum class CustomPostProcessPass2_Pass : ::System::Int32
	{
		Downsample = 0,
		DownSampleAndExtractBrightness = 1,
		GaussBlur = 2,
		GaussBlit = 3,
		BloomBlur = 4,
		BloomBlurAndCombine = 5,
		BloomBlurAtlas = 6,
		BloomBlurAtlasAndCombine = 7,
		BloomCombine = 8,
		CoCCaculation = 9,
		SpitNearFarCoC = 10,
		TileCoC = 11,
		DOFBlur = 12,
		StarStreak = 13,
		Ghost = 14,
		StarComposition = 15,
		BokehCoC = 16,
		BokehDirectional = 17,
		BokehDirAndInter = 18,
		DOFSetup = 19,
		FlattenCoc = 20,
		DilateCoc_1 = 21,
		GatherForeground = 22,
		GatherBackground = 23,
		PostFilterForeground = 24,
		PostFilterBackground = 25,
		DOFRecombine = 26,
		DOFDebug = 27,
		RadialBlur = 28,
		DirectionalBlur = 29,
		ChromaticAberration = 30,
		RadialBlurWithChromaticAberration = 31,
		SkillRadialExtract = 32,
		SkillRadialBlur1 = 33,
		SkillRadialBlur2 = 34,
		SkillRadialBlend = 35,
		FinalCompose = 36,
		Off = 255,
	};
}
