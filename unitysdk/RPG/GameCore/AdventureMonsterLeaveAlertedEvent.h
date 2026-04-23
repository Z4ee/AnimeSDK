#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB589500)
#define RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETMONSTER_OFFSET UNITYSDK_OFFSET(0xB589550)
#define RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB5894B0)
#define RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5894A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterLeaveAlertedEvent_TypeDefinitionIndex = 52166;

	class AdventureMonsterLeaveAlertedEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _Monster; // 0x10

		::System::Void _ctor(::RPG::GameCore::GameEntity* monster)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT__CTOR_OFFSET))(this, monster);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetMonster()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERLEAVEALERTEDEVENT_GETMONSTER_OFFSET))(this);
		}
	};
}
