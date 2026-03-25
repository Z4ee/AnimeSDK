#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA989A50)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA989A00)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_ISINTEAM_OFFSET UNITYSDK_OFFSET(0xA989AC0)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xA989AA0)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xA989AB0)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA9899F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityTeamListStateChange_TypeDefinitionIndex = 45694;

	class LevelEntityTeamListStateChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::System::Boolean _IsInTeam; // 0x18
		::RPG::GameCore::TeamType _Team; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::TeamType team, ::System::Boolean inTeam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE__CTOR_OFFSET))(this, pEntity, team, inTeam);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_SourceEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_SOURCEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::TeamType get_Team()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_TEAM_OFFSET))(this);
		}

		::System::Boolean get_IsInTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_ISINTEAM_OFFSET))(this);
		}
	};
}
