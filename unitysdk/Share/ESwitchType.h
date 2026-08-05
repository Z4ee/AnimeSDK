#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 13479;

	enum class ESwitchType : ::System::UInt32
	{
		HollowPause = 0x8,
		SettingUser = 0x1B,
		InterKnot = 0xE,
		BattleSetting = 0x14,
		Equip = 0x1,
		EquipShop = 0x5,
		EquipDecompose = 0x4,
		Mail = 0x10,
		SettingInput = 0x18,
		Archive = 0x16,
		DebugPay = 0x12,
		WorkShop = 0xD,
		Empty = 0x0,
		SettingPicture = 0x17,
		VHSStore = 0x13,
		StoryModeSwitch = 0x9,
		GroceryShop = 0xC,
		BattleInfo = 0x15,
		SettingVoice = 0x19,
		QTEManualModeSwitch = 0xF,
		Ramen = 0xA,
		Hollow = 0x6,
		Setting = 0x11,
		Navigation = 0x7,
		EquipGacha = 0x2,
		Login = 0x3,
		SettingLang = 0x1A,
		HollowItem = 0xB,
	};
}
