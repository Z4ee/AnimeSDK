#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderEntityFlags_TypeDefinitionIndex = 26772;

enum class NapRenderEntityFlags : ::System::UInt32
{
	IsPreviewModel = 0x2000,
	HasValidMaterial = 0x4000000,
	DisableSphereCulling = 0x100,
	IsAvatarParticle = 0x10,
	FixShadowCoverageOutOfFrustum = 0x800000,
	HasCharacterMaterial = 0x40000,
	CollectRendererLayerEveryFrame = 0x200,
	IsSimpleModel = 0x20,
	HasUIMaterial = 0x80,
	IsVisible = 0x1000000,
	IsNapCbBound = 0x10000,
	IsVisibleInCurrentCam = 0x8000,
	NeedRenderRamp = 0x4,
	IsCurFrameVisible = 0x2000000,
	HasRegularRenderer = 0x400000,
	IsActive = 0x1000,
	MainLightParamsOverriden = 0x800,
	ClipVerticesUnderClipPlane = 0x20000,
	FixRed = 0x200000,
	IsFirstTimeCalculateRadian = 0x80000,
	KeepOnRefresh = 0x1,
	PerObjectShadowOn = 0x1,
	UseCustomBlendedDirectionalLightSize = 0x100000,
	IsRampPropertiesDirty = 0x40,
	HasNapCBRenderer = 0x2,
	IgnoreDirectionalLightBlendWeight = 0x8,
	IsValid = 0x400,
	IsAvatarParticleDirty = 0x4000,
};
