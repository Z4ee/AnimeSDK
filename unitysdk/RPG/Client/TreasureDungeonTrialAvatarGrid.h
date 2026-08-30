#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureDungeonBaseGrid.h"

namespace RPG::GameCore { class TreasureDungeonAvatarConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID_GET_AVATARPICKROW_OFFSET UNITYSDK_OFFSET(0xE2A9C00)
#define RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xE2A9C60)
#define RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID__CTOR_OFFSET UNITYSDK_OFFSET(0xE29B010)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTrialAvatarGrid_TypeDefinitionIndex = 68192;

	class TreasureDungeonTrialAvatarGrid : public ::RPG::Client::TreasureDungeonBaseGrid
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonAvatarConfigRow* get_AvatarPickRow()
		{
			return ((::RPG::GameCore::TreasureDungeonAvatarConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID_GET_AVATARPICKROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTRIALAVATARGRID_GET_ICONPATH_OFFSET))(this);
		}
	};
}
