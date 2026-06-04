#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETBUFFID_OFFSET UNITYSDK_OFFSET(0xCE32410)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE323C0)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE32370)
#define RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAdventureRemoveEvent_TypeDefinitionIndex = 52866;

	class LevelAdventureRemoveEvent : public ::System::Object
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x10
		::System::UInt32 _BuffID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREREMOVEEVENT__CTOR_OFFSET))(this, a1, a2);
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
