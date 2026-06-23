#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapMaterialFlags_TypeDefinitionIndex = 27354;

enum class NapMaterialFlags : ::System::UInt32
{
	SupportPerObjectShadow = 0x1,
	LodNeedSwitchShader = 0x400,
	SupportCustomLightAxial = 0x800,
	SupportNapCB = 0x2,
	IsRampPropertiesDirty = 0x40,
	IsFaceShader = 0x8,
	IsCharacterStandard = 0x10,
	IsInstancing = 0x20,
	IsAvatarParticle = 0x200,
	HasMatCapArray = 0x100,
	IsUiShader = 0x80,
	IsCharacterShader = 0x4,
};
