#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderEntityFlags_TypeDefinitionIndex = 27762;

enum class NapRenderEntityFlags : ::System::UInt32
{
	IsAvatarParticle = 0x10,
	DisableSphereCulling = 0x100,
	NeedRenderRamp = 0x4,
	FixShadowCoverageOutOfFrustum = 0x800000,
	IsSimpleModel = 0x20,
	HasUIMaterial = 0x80,
	CollectRendererLayerEveryFrame = 0x200,
	HasNapCBRenderer = 0x2,
	PerObjectShadowOn = 0x1,
	IsPreviewModel = 0x2000,
	KeepOnRefresh = 0x1,
	HasCharacterMaterial = 0x40000,
	UseCustomBlendedDirectionalLightSize = 0x100000,
	MainLightParamsOverriden = 0x800,
	IsActive = 0x1000,
	IgnoreDirectionalLightBlendWeight = 0x8,
	HasValidMaterial = 0x4000000,
	IsValid = 0x400,
	IsNapCbBound = 0x10000,
	IsFirstTimeCalculateRadian = 0x80000,
	IsCurFrameVisible = 0x2000000,
	IsVisible = 0x1000000,
	ClipVerticesUnderClipPlane = 0x20000,
	HasRegularRenderer = 0x400000,
	IsRampPropertiesDirty = 0x40,
	IsVisibleInCurrentCam = 0x8000,
	FixRed = 0x200000,
	IsAvatarParticleDirty = 0x4000,
};
