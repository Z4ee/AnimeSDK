#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/RPG/GameCore/PetMarbleLevelMode.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODETYPEEXTENSIONS_TOCLIENT_OFFSET UNITYSDK_OFFSET(0xDAC77F0)
#define RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODETYPEEXTENSIONS_TOGAMECORE_OFFSET UNITYSDK_OFFSET(0xDAC7840)

namespace RPG::Client::PetMarble::Level
{
	inline static constexpr unsigned int PetMarbleLevelModeTypeExtensions_TypeDefinitionIndex = 74747;

	class PetMarbleLevelModeTypeExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType ToClient(::RPG::GameCore::PetMarbleLevelMode a1)
		{
			return ((::RPG::Client::PetMarble::Level::PetMarbleLevelModeType(*)(::RPG::GameCore::PetMarbleLevelMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODETYPEEXTENSIONS_TOCLIENT_OFFSET))(a1);
		}

		static ::RPG::GameCore::PetMarbleLevelMode ToGameCore(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::RPG::GameCore::PetMarbleLevelMode(*)(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_LEVEL_PETMARBLELEVELMODETYPEEXTENSIONS_TOGAMECORE_OFFSET))(a1);
		}
	};
}
