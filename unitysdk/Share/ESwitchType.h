#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 12039;

	enum class ESwitchType : ::System::UInt32
	{
		Mail = 0x10,
		Empty = 0x0,
		SettingInput = 0x18,
		SettingLang = 0x1A,
		Hollow = 0x6,
		EquipShop = 0x5,
		QTEManualModeSwitch = 0xF,
		DebugPay = 0x12,
		Navigation = 0x7,
		EquipGacha = 0x2,
		WorkShop = 0xD,
		SettingPicture = 0x17,
		HollowItem = 0xB,
		GroceryShop = 0xC,
		SettingVoice = 0x19,
		VHSStore = 0x13,
		InterKnot = 0xE,
		Setting = 0x11,
		HollowPause = 0x8,
		BattleSetting = 0x14,
		BattleInfo = 0x15,
		EquipDecompose = 0x4,
		Ramen = 0xA,
		Equip = 0x1,
		SettingUser = 0x1B,
		Archive = 0x16,
		Login = 0x3,
		StoryModeSwitch = 0x9,
	};
}
