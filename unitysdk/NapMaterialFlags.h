#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapMaterialFlags_TypeDefinitionIndex = 27529;

enum class NapMaterialFlags : ::System::UInt32
{
	IsCharacterStandard = 0x10,
	HasMatCapArray = 0x100,
	IsInstancing = 0x20,
	IsFaceShader = 0x8,
	SupportPerObjectShadow = 0x1,
	IsRampPropertiesDirty = 0x40,
	SupportNapCB = 0x2,
	IsAvatarParticle = 0x200,
	LodNeedSwitchShader = 0x400,
	IsUiShader = 0x80,
	SupportCustomLightAxial = 0x800,
	IsCharacterShader = 0x4,
};
