#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapMaterialFlags_TypeDefinitionIndex = 29592;

enum class NapMaterialFlags : ::System::UInt32
{
	SupportPerObjectShadow = 0x1,
	SupportNapCB = 0x2,
	IsCharacterShader = 0x4,
	IsFaceShader = 0x8,
	IsCharacterStandard = 0x10,
	IsInstancing = 0x20,
	IsRampPropertiesDirty = 0x40,
	IsUiShader = 0x80,
	HasMatCapArray = 0x100,
	IsAvatarParticle = 0x200,
	LodNeedSwitchShader = 0x400,
	SupportCustomLightAxial = 0x800,
};
