#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIONONEMORE_OFFSET UNITYSDK_OFFSET(0xE69AC30)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETACTIVEENTITY_OFFSET UNITYSDK_OFFSET(0xE69ABB0)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE69AB60)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE69AB10)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND_GETTURNCOUNTER_OFFSET UNITYSDK_OFFSET(0xE69ABF0)
#define RPG_GAMECORE_LEVELTURNACTIONPHASEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xE69AB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelTurnActionPhaseEnd_TypeDefinitionIndex = 56885;

	class LevelTurnActionPhaseEnd : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _ActiveEntity; // 0x10
		::System::Boolean _ActionOneMore; // 0x18
		::System::UInt32 _TurnCounter; // 0x1C

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELTURNACTIONPHASEEND__CTOR_OFFSET))(this, a1, a2, a3);
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
