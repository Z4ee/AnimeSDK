#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GraphicSettingFlag_TypeDefinitionIndex = 36110;

	enum class GraphicSettingFlag : ::System::Int32
	{
		None = 0,
		GBufferDepth = 1,
		HDRGBuffer = 2,
		DisableEyeHair = 4,
		EnableCharPerDrawEx = 8,
		LightInstanceVoxel = 16,
		DisableHSRSort = 32,
		LightInstance = 64,
		HalfResTransparent = 128,
		UIForwardCull = 256,
		DisableRTCalc = 512,
		IRIOpt = 1024,
		GBufferStencil = 2048,
		ForceExecutePPCmd = 4096,
		AdjustBeforeTransparent = 8192,
		NewLightDraw = 16384,
		NewAreaLightDraw = 32768,
		ForceHizmap = 65536,
		EnableObjLightCull_NotUse = 131072,
		EnableGBufferBCopy = 262144,
		GeometryShadow = 524288,
		EnablePosmOpt = 1048576,
		EnableRHIDraw = 2097152,
		EnablePerDrawCache = 4194304,
		EnableDynamicViewport = 8388608,
		EnableParticleGPUInstance = 16777216,
		EnableTransparentVRS = 33554432,
		EnableAdaptiveTessellation = 67108864,
		EnableSkipDrawWhenLoading = 134217728,
		EnableMultiDraw = 268435456,
	};
}
