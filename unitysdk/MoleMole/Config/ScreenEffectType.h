#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 45109;

	enum class ScreenEffectType : ::System::Int32
	{
		Lighting = 35,
		Vignette = 2,
		AmplifyOcclusion = 28,
		PartialBlur = 39,
		MotionBlur = 19,
		ColorLookup = 24,
		ScreenSpaceReflection = 41,
		FXComicDot = 25,
		Tonemapping = 44,
		CharacterIgnisFatuus = 21,
		CharacterVolumeProxy = 31,
		DepthOfField = 5,
		WhiteBalance = 45,
		Unknown = 0,
		LensDistortion = 10,
		ColorCurves = 32,
		FXColorCorrection = 8,
		FilmGrain = 9,
		ChannelMixer = 30,
		RadialBlur = 3,
		SplitToning = 43,
		Caustics = 29,
		DirectionalBlur = 20,
		OldCRT = 15,
		Glitch = 1,
		Culling = 33,
		FXFog = 14,
		NapBloom = 13,
		ScreenSpacePlanarReflection = 40,
		LensDirt = 18,
		MonsterIgnisFatuus = 22,
		ScreenSpaceAmbientOcclusion = 27,
		GaussianBlur = 4,
		ShadowsMidtonesHighlights = 42,
		Distortion = 16,
		UnsharpMask = 23,
		ColorAdjustments = 7,
		ScreenEffects = 6,
		VREffects = 17,
		LiftGammaGain = 34,
		NapCapsuleAOLighting = 36,
		ChromaticAberration = 11,
		NapContactShadow = 37,
		PaniniProjection = 38,
		AutoExposure = 26,
		CharacterColorCorrection = 12,
	};
}
