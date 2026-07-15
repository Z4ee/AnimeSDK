#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_672FAAEF1DFFD39B_RF_BrickComponent_TypeDefinitionIndex = 35530;

enum class Class_1_672FAAEF1DFFD39B_RF_BrickComponent : ::System::UInt16
{
	BrickTypeID = 0x1,
	PresetConfigEntityID = 0x2,
	IsInControl = 0x4,
	SpeedUpRatio = 0x8,
	SpecialViewType = 0x10,
	IsStatic = 0x20,
	OverrideFriction = 0x40,
	ModifierInfo = 0x80,
	Max = 0xFF,
};
