#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4B9C10)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B9C50)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B9CA0)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xE4B9BD0)
#define RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B9CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureAfterTeamLeaderChangeModel_TypeDefinitionIndex = 56787;

	class AdventureAfterTeamLeaderChangeModel : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureAfterTeamLeaderChangeModel* Init()
		{
			return ((::RPG::GameCore::AdventureAfterTeamLeaderChangeModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREAFTERTEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
