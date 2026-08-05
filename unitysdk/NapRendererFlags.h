#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRendererFlags_TypeDefinitionIndex = 27122;

enum class NapRendererFlags : ::System::UInt32
{
	SupportNapCB = 0x1,
	SkipClearMpb = 0x10,
	HasUiMaterial = 0x80,
	IsAlive = 0x1000,
	SkipRenderingLayerMaskCollection = 0x2000,
	DisableCascadeShadow = 0x200,
	SupportPerObjectShadow = 0x2,
	SupportPartIDs = 0x10000,
	PerRendererSetterIllegal = 0x4,
	PropertyModeMaterial = 0x100,
	IsAvatarParticle = 0x20,
	IsInstancing = 0x8,
	IsHairShadow = 0x40,
	HasShadowProxyMaterial = 0x8000,
	IsVisible = 0x800,
	IsVisibleInCurrentCam = 0x4000,
};
