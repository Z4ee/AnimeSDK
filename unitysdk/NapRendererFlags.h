#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRendererFlags_TypeDefinitionIndex = 29593;

enum class NapRendererFlags : ::System::UInt32
{
	SupportNapCB = 0x1,
	SupportPerObjectShadow = 0x2,
	PerRendererSetterIllegal = 0x4,
	IsInstancing = 0x8,
	SkipClearMpb = 0x10,
	IsAvatarParticle = 0x20,
	IsHairShadow = 0x40,
	HasUiMaterial = 0x80,
	PropertyModeMaterial = 0x100,
	DisableCascadeShadow = 0x200,
	IsVisible = 0x800,
	IsAlive = 0x1000,
	SkipRenderingLayerMaskCollection = 0x2000,
	IsVisibleInCurrentCam = 0x4000,
	HasShadowProxyMaterial = 0x8000,
	SupportPartIDs = 0x10000,
};
