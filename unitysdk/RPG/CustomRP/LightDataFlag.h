#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LightDataFlag_TypeDefinitionIndex = 36159;

	enum class LightDataFlag : ::System::Int32
	{
		Dirty = 1,
		Dynamic = 2,
		DrawDelegate = 4,
		AdvanceLight = 8,
		IgnoreTransScale = 16,
		IgnoreCharLighting = 32,
		kLightLegecyFalloff = 64,
		kLightUseDirectionalAtten = 128,
		kLightColorCookie = 256,
		kUseLightBias = 512,
		kIsParticelLight = 1024,
		kAOMask = 2048,
		kNewLocalLight = 4096,
		kUseDiffuseCharCol = 8192,
		kAnimationEnable = 16384,
		kMainCharLight = 32768,
		kNotLerpLocalLight = 65536,
		kEnableDistanceFade = 131072,
		kEnableTSC = 262144,
		kTSCState = 524288,
		kForceCharacterAffect = 1048576,
		DrawStencilDelegate = 1048576,
		DebugColorPercent = 2097152,
		DebugIntensityFalloff = 4194304,
		DebugAlwaysUpdate = 8388608,
		DebugCull = 16777216,
		DrawLightBox = 33554432,
	};
}
