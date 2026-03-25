#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETBUFFID_OFFSET UNITYSDK_OFFSET(0xA976930)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA9768E0)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA976890)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xA976880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAdventureRemoveEvent_TypeDefinitionIndex = 45519;

	class LevelAdventureRemoveEvent : public ::System::Object
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x10
		::System::UInt32 _BuffID; // 0x14

		::System::Void _ctor(::System::UInt32 entityID, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT__CTOR_OFFSET))(this, entityID, buffID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETBUFFID_OFFSET))(this);
		}
	};
}
