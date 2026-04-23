#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNALLOWACTION_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xB6E0030)
#define RPG_GAMECORE_LEVELTURNALLOWACTION_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DFFE0)
#define RPG_GAMECORE_LEVELTURNALLOWACTION_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DFF90)
#define RPG_GAMECORE_LEVELTURNALLOWACTION_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xB6E0070)
#define RPG_GAMECORE_LEVELTURNALLOWACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DFF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnAllowAction_TypeDefinitionIndex = 52251;

	class LevelTurnAllowAction : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18

		::System::Void _ctor(::RPG::GameCore::GameEntity* ActiveEntity, ::System::UInt32 TurnCounter)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNALLOWACTION__CTOR_OFFSET))(this, ActiveEntity, TurnCounter);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNALLOWACTION_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNALLOWACTION_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNALLOWACTION_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNALLOWACTION_GETTURNCOUNTER_OFFSET))(this);
		}
	};
}
