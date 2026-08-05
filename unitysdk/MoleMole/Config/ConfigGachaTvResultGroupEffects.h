#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformMisc_ItemRarity.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaTvResultGroupEffects_TypeDefinitionIndex = 60486;

	struct alignas(8) ConfigGachaTvResultGroupEffects
	{
		::MoleMole::Config::ConfigGachaPerformMisc_ItemRarity Rarity; // 0x10
		::System::String* TvRarityEffect; // 0x18
		::System::String* TvRarityEffect2; // 0x20
		::System::String* TvAvatarRarityEffect; // 0x28
		::System::String* TvBangbooRarityEffect; // 0x30
		::System::String* TvWeaponRarityEffect; // 0x38
		::System::String* AvatarStageRarityEffect; // 0x40
		::System::String* BangbooStageRarityEffect; // 0x48
		::System::String* WeaponStageRarityEffect; // 0x50
	};
}
