#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRendererFlags_TypeDefinitionIndex = 27199;

enum class NapRendererFlags : ::System::UInt32
{
	HasShadowProxyMaterial = 0x8000,
	IsAlive = 0x1000,
	PerRendererSetterIllegal = 0x4,
	SupportPartIDs = 0x10000,
	IsHairShadow = 0x40,
	IsVisible = 0x800,
	HasUiMaterial = 0x80,
	IsInstancing = 0x8,
	SkipClearMpb = 0x10,
	IsVisibleInCurrentCam = 0x4000,
	SupportPerObjectShadow = 0x2,
	IsAvatarParticle = 0x20,
	PropertyModeMaterial = 0x100,
	SkipRenderingLayerMaskCollection = 0x2000,
	SupportNapCB = 0x1,
	DisableCascadeShadow = 0x200,
};
