#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1DD2B6F0)
#define RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1DD2B740)
#define RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GET_CHANGEDENTITY_OFFSET UNITYSDK_OFFSET(0x1DD2B7A0)
#define RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GET_TEAMENTITY_OFFSET UNITYSDK_OFFSET(0x1DD2B790)
#define RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2B6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTeamFormationListChange_TypeDefinitionIndex = 56908;

	class LevelTeamFormationListChange : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ChangedEntity; // 0x10
		::RPG::GameCore::GameEntity* _TeamEntity; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_TeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GET_TEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ChangedEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTEAMFORMATIONLISTCHANGE_GET_CHANGEDENTITY_OFFSET))(this);
		}
	};
}
