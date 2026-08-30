#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4BA0D0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4BA110)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4BA160)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_INIT_OFFSET UNITYSDK_OFFSET(0xE4BA090)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xE4BA1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeTeamLeaderChangeModel_TypeDefinitionIndex = 56786;

	class AdventureBeforeTeamLeaderChangeModel : public ::Class_1_BF7A075734D15E98
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeTeamLeaderChangeModel* Init()
		{
			return ((::RPG::GameCore::AdventureBeforeTeamLeaderChangeModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGEMODEL_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
