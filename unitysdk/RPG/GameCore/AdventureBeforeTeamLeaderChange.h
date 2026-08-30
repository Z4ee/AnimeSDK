#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0x112628D0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x11262920)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11262970)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0x11262870)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x112629C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeTeamLeaderChange_TypeDefinitionIndex = 56788;

	class AdventureBeforeTeamLeaderChange : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* After; // 0x18
		::RPG::GameCore::GameEntity* Before; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeTeamLeaderChange* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureBeforeTeamLeaderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_CLEAR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
