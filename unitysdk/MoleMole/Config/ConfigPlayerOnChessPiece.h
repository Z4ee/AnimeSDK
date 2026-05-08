#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup.h"
#include "unitysdk/MoleMole/Config/ConfigPlayerOnChessPiece_PlayerOnSheetConfig.h"
#include "unitysdk/MoleMole/Config/DirectionPlayerOnKey.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_GETPLAYERONSHEETCONFIG_OFFSET UNITYSDK_OFFSET(0x12422690)
#define MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_GETRAWCONFIG_OFFSET UNITYSDK_OFFSET(0x12422770)
#define MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x12422D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayerOnChessPiece_TypeDefinitionIndex = 81260;

	class ConfigPlayerOnChessPiece : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig teleportOutPlayerOnSheetConfig; // 0x10
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup oneStepBlockGroup; // 0x30
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig bornPlayerOnSheetConfig; // 0xB0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup PushDistanceArriveGroup; // 0xD0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup beforePushBackGroup; // 0x150
		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig teleportPlayerOnSheetConfig; // 0x1D0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup ConveyerBeltPushArriveGroup; // 0x1F0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup continousStepBlockGroup; // 0x270
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup PushDistanceStartGroup; // 0x2F0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup StringPushArriveGroup; // 0x370
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup moveGroup; // 0x3F0
		::MoleMole::Config::ConfigPlayerOnChessPiece_DirectionPlayerOnSheetGroup StringPushStartGroup; // 0x470

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig GetPlayerOnSheetConfig(::MoleMole::Config::ConfigPlayerOnChessPiece* defaultConfig, ::MoleMole::PlayerOnViewState playerOnState, ::MoleMole::Config::DirectionPlayerOnKey directionPlayerOnKey)
		{
			return ((::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig(*)(::PVOID, ::MoleMole::Config::ConfigPlayerOnChessPiece*, ::MoleMole::PlayerOnViewState, ::MoleMole::Config::DirectionPlayerOnKey))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_GETPLAYERONSHEETCONFIG_OFFSET))(this, defaultConfig, playerOnState, directionPlayerOnKey);
		}

		::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig GetRawConfig(::MoleMole::PlayerOnViewState playerOnState, ::MoleMole::Config::DirectionPlayerOnKey directionPlayerOnKey)
		{
			return ((::MoleMole::Config::ConfigPlayerOnChessPiece_PlayerOnSheetConfig(*)(::PVOID, ::MoleMole::PlayerOnViewState, ::MoleMole::Config::DirectionPlayerOnKey))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYERONCHESSPIECE_GETRAWCONFIG_OFFSET))(this, playerOnState, directionPlayerOnKey);
		}
	};
}
