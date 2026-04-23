#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIONONEMORE_OFFSET UNITYSDK_OFFSET(0xB6DFF40)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xB6DFEC0)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB6DFE70)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6DFE20)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xB6DFF00)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xB6DFE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnActionPhaseEnd_TypeDefinitionIndex = 52254;

	class LevelTurnActionPhaseEnd : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::UInt32 _TurnCounter; // 0x18
		::System::Boolean _ActionOneMore; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* ActiveEntity, ::System::UInt32 TurnCounter, ::System::Boolean ActionOneMore)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND__CTOR_OFFSET))(this, ActiveEntity, TurnCounter, ActionOneMore);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetActiveEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIVEENTITY_OFFSET))(this);
		}

		::System::UInt32 GetTurnCounter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETTURNCOUNTER_OFFSET))(this);
		}

		::System::Boolean GetActionOneMore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIONONEMORE_OFFSET))(this);
		}
	};
}
