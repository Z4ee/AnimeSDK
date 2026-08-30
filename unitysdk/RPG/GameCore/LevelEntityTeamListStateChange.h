#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE692BA0)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE692B50)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_ISINTEAM_OFFSET UNITYSDK_OFFSET(0xE692C10)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_SOURCEENTITY_OFFSET UNITYSDK_OFFSET(0xE692BF0)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xE692C00)
#define RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE692B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityTeamListStateChange_TypeDefinitionIndex = 56977;

	class LevelEntityTeamListStateChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Entity; // 0x10
		::RPG::GameCore::TeamType _Team; // 0x18
		::System::Boolean _IsInTeam; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYTEAMLISTSTATECHANGE__CTOR_OFFSET))(this, a1, a2, a3);
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
