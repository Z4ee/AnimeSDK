#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITYTEAM_OFFSET UNITYSDK_OFFSET(0xB6E0AA0)
#define RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xB6E0A60)
#define RPG_GAMECORE_LEVELTURNEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6E0A10)
#define RPG_GAMECORE_LEVELTURNEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6E09C0)
#define RPG_GAMECORE_LEVELTURNEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xB6E0AE0)
#define RPG_GAMECORE_LEVELTURNEND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6E09B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEnd_TypeDefinitionIndex = 52258;

	class LevelTurnEnd : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::RPG::GameCore::TeamType _ActiveEntityTeam; // 0x18
		::System::UInt32 _TurnCounter; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* activeEntity, ::RPG::GameCore::TeamType eActiveEntityTeam, ::System::UInt32 TurnCounter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND__CTOR_OFFSET))(this, activeEntity, eActiveEntityTeam, TurnCounter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITY_OFFSET))(this);
		}

		::RPG::GameCore::TeamType GetActiveEntityTeam()
		{
			return ((::RPG::GameCore::TeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITYTEAM_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND_GETTURNCOUNTER_OFFSET))(this);
		}
	};
}
