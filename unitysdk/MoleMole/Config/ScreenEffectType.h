#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectType_TypeDefinitionIndex = 41948;

	enum class ScreenEffectType : ::System::Int32
	{
		Caustics = 29,
		FXComicDot = 25,
		Vignette = 2,
		AutoExposure = 26,
		WhiteBalance = 45,
		LiftGammaGain = 34,
		ColorLookup = 24,
		DirectionalBlur = 20,
		ScreenSpaceAmbientOcclusion = 27,
		ScreenEffects = 6,
		PaniniProjection = 38,
		ChannelMixer = 30,
		ChromaticAberration = 11,
		CharacterIgnisFatuus = 21,
		NapContactShadow = 37,
		NapCapsuleAOLighting = 36,
		DepthOfField = 5,
		CharacterVolumeProxy = 31,
		FXFog = 14,
		FilmGrain = 9,
		PartialBlur = 39,
		LensDirt = 18,
		OldCRT = 15,
		MotionBlur = 19,
		AmplifyOcclusion = 28,
		ShadowsMidtonesHighlights = 42,
		Tonemapping = 44,
		ColorAdjustments = 7,
		ScreenSpacePlanarReflection = 40,
		FXColorCorrection = 8,
		Lighting = 35,
		VREffects = 17,
		ColorCurves = 32,
		Distortion = 16,
		MonsterIgnisFatuus = 22,
		CharacterColorCorrection = 12,
		Culling = 33,
		Glitch = 1,
		Unknown = 0,
		GaussianBlur = 4,
		NapBloom = 13,
		SplitToning = 43,
		RadialBlur = 3,
		UnsharpMask = 23,
		LensDistortion = 10,
		ScreenSpaceReflection = 41,
	};
}
