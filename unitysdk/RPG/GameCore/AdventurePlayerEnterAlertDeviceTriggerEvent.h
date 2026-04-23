#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB590290)
#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB590240)
#define RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB590230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayerEnterAlertDeviceTriggerEvent_TypeDefinitionIndex = 52204;

	class AdventurePlayerEnterAlertDeviceTriggerEvent : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* SourceEntity; // 0x10
		::System::UInt32 GroupID; // 0x18

		::System::Void _ctor(::System::UInt32 groupID, ::RPG::GameCore::GameEntity* sourceEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYERENTERALERTDEVICETRIGGEREVENT__CTOR_OFFSET))(this, groupID, sourceEntity);
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
