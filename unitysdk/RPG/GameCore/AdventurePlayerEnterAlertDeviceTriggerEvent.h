#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCCEF4F0)
#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCCEF4A0)
#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCEF490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerEnterAlertDeviceTriggerEvent_TypeDefinitionIndex = 52901;

	class AdventurePlayerEnterAlertDeviceTriggerEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* SourceEntity; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
