#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE692AB0)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE692A60)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_ISFOLLOWER_OFFSET UNITYSDK_OFFSET(0xE692B30)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_ISINTEAM_OFFSET UNITYSDK_OFFSET(0xE692B20)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xE692B00)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xE692B10)
#define RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE692A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityTeamFormationStateChange_TypeDefinitionIndex = 56976;

	class LevelEntityTeamFormationStateChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::System::Boolean _IsInTeam; // 0x18
		::System::Boolean _IsFollower; // 0x19
		::RPG::GameCore::TeamType _Team; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_TEAM_OFFSET))(this);
		}

		::System::Boolean get_IsInTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_ISINTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsFollower()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMFORMATIONSTATECHANGE_GET_ISFOLLOWER_OFFSET))(this);
		}
	};
}
