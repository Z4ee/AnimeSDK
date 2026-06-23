#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 12058;

	enum class ESwitchType : ::System::UInt32
	{
		QTEManualModeSwitch = 0xF,
		Equip = 0x1,
		EquipDecompose = 0x4,
		HollowPause = 0x8,
		HollowItem = 0xB,
		Hollow = 0x6,
		Archive = 0x16,
		Ramen = 0xA,
		EquipShop = 0x5,
		GroceryShop = 0xC,
		Setting = 0x11,
		Empty = 0x0,
		BattleInfo = 0x15,
		SettingVoice = 0x19,
		SettingPicture = 0x17,
		DebugPay = 0x12,
		SettingUser = 0x1B,
		WorkShop = 0xD,
		VHSStore = 0x13,
		SettingLang = 0x1A,
		StoryModeSwitch = 0x9,
		BattleSetting = 0x14,
		Navigation = 0x7,
		EquipGacha = 0x2,
		Mail = 0x10,
		Login = 0x3,
		InterKnot = 0xE,
		SettingInput = 0x18,
	};
}
