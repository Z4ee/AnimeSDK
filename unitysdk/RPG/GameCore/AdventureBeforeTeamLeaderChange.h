#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_CLEAR_OFFSET UNITYSDK_OFFSET(0xA81DBE0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA81DC30)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA81DC80)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_INIT_OFFSET UNITYSDK_OFFSET(0xA81DB80)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA81DCD0)
#define RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA81DCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforeTeamLeaderChange_TypeDefinitionIndex = 45508;

	class AdventureBeforeTeamLeaderChange : public ::Class_1_9988289E7F8AA214
	{
	public:
		::RPG::GameCore::GameEntity* Before; // 0x18
		::RPG::GameCore::GameEntity* After; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureBeforeTeamLeaderChange* Init(::RPG::GameCore::GameEntity* before, ::RPG::GameCore::GameEntity* after)
		{
			return ((::RPG::GameCore::AdventureBeforeTeamLeaderChange*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE_INIT_OFFSET))(this, before, after);
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

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFORETEAMLEADERCHANGE___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
