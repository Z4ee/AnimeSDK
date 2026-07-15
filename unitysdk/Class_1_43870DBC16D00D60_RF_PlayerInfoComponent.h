#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_43870DBC16D00D60_RF_PlayerInfoComponent_TypeDefinitionIndex = 35540;

enum class Class_1_43870DBC16D00D60_RF_PlayerInfoComponent : ::System::UInt16
{
	PlayerUID = 0x1,
	IsAI = 0x2,
	HeadIconPath = 0x4,
	NickName = 0x8,
	PlatformTypeValue = 0x10,
	PlatformNick = 0x20,
	Hp = 0x40,
	State = 0x80,
	Score = 0x100,
	ReviveTimeMs = 0x200,
	ModifierList = 0x400,
	NextBrickID = 0x800,
	Damage = 0x1000,
	StarIDList = 0x2000,
	ChangeSource = 0x4000,
	Max = 0x7FFF,
};
