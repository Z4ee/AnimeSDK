#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderEntityFlags_TypeDefinitionIndex = 29582;

enum class NapRenderEntityFlags : ::System::UInt32
{
	PerObjectShadowOn = 0x1,
	HasNapCBRenderer = 0x2,
	NeedRenderRamp = 0x4,
	IgnoreDirectionalLightBlendWeight = 0x8,
	IsAvatarParticle = 0x10,
	IsSimpleModel = 0x20,
	IsRampPropertiesDirty = 0x40,
	HasUIMaterial = 0x80,
	DisableSphereCulling = 0x100,
	CollectRendererLayerEveryFrame = 0x200,
	IsValid = 0x400,
	MainLightParamsOverriden = 0x800,
	IsActive = 0x1000,
	IsPreviewModel = 0x2000,
	IsAvatarParticleDirty = 0x4000,
	IsVisibleInCurrentCam = 0x8000,
	IsNapCbBound = 0x10000,
	ClipVerticesUnderClipPlane = 0x20000,
	HasCharacterMaterial = 0x40000,
	IsFirstTimeCalculateRadian = 0x80000,
	UseCustomBlendedDirectionalLightSize = 0x100000,
	FixRed = 0x200000,
	HasRegularRenderer = 0x400000,
	FixShadowCoverageOutOfFrustum = 0x800000,
	IsVisible = 0x1000000,
	IsCurFrameVisible = 0x2000000,
	HasValidMaterial = 0x4000000,
	KeepOnRefresh = 0x1,
};
