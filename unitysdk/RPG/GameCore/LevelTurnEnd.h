#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITYTEAM_OFFSET UNITYSDK_OFFSET(0xE69B7A0)
#define RPG_GAMECORE_LEVELTURNEND_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE69B760)
#define RPG_GAMECORE_LEVELTURNEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69B710)
#define RPG_GAMECORE_LEVELTURNEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69B6C0)
#define RPG_GAMECORE_LEVELTURNEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xE69B7E0)
#define RPG_GAMECORE_LEVELTURNEND__CTOR_OFFSET UNITYSDK_OFFSET(0xE69B6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnEnd_TypeDefinitionIndex = 56889;

	class LevelTurnEnd : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18
		::RPG::GameCore::TeamType _ActiveEntityTeam; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TeamType a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNEND__CTOR_OFFSET))(this, a1, a2, a3);
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
