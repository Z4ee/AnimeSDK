#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 70000;

	enum class ScreenEffectType : ::System::Int32
	{
		ScreenEffects = 6,
		Lighting = 35,
		ScreenSpaceAmbientOcclusion = 27,
		LiftGammaGain = 34,
		VREffects = 17,
		FXColorCorrection = 8,
		SplitToning = 43,
		ChannelMixer = 30,
		ShadowsMidtonesHighlights = 42,
		MotionBlur = 19,
		Caustics = 29,
		AutoExposure = 26,
		Vignette = 2,
		DirectionalBlur = 20,
		NapBloom = 13,
		PaniniProjection = 38,
		ColorLookup = 24,
		WhiteBalance = 45,
		FXComicDot = 25,
		LensDistortion = 10,
		OldCRT = 15,
		GaussianBlur = 4,
		AmplifyOcclusion = 28,
		DepthOfField = 5,
		CharacterVolumeProxy = 31,
		ColorCurves = 32,
		PartialBlur = 39,
		MonsterIgnisFatuus = 22,
		Unknown = 0,
		Culling = 33,
		CharacterColorCorrection = 12,
		ColorAdjustments = 7,
		Distortion = 16,
		ChromaticAberration = 11,
		UnsharpMask = 23,
		FXFog = 14,
		FilmGrain = 9,
		RadialBlur = 3,
		Glitch = 1,
		NapContactShadow = 37,
		Tonemapping = 44,
		LensDirt = 18,
		CharacterIgnisFatuus = 21,
		ScreenSpaceReflection = 41,
		NapCapsuleAOLighting = 36,
		ScreenSpacePlanarReflection = 40,
	};
}
