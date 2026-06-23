#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayerOnChessPiece_PlayerOnSheetConfig.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_DIRECTIONPLAYERONSHEETGROUP_GETCONFIGBYDIRECTION_OFFSET UNITYSDK_OFFSET(0x862790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup_TypeDefinitionIndex = 51287;

	struct alignas(8) ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup
	{
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig upSheetConfig; // 0x10
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig bmSheetConfig; // 0x30
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig lfSheetConfig; // 0x50
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig rtSheetConfig; // 0x70

		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig GetConfigByDirection(::MoleMole::PlayerOnViewState state)
		{
			return ((::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig(*)(::PVOID, ::MoleMole::PlayerOnViewState))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_DIRECTIONPLAYERONSHEETGROUP_GETCONFIGBYDIRECTION_OFFSET))(this, state);
		}
	};
}
