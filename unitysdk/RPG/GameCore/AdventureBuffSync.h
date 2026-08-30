#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREBUFFSYNC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x11262C10)
#define RPG_GAMECORE_ADVENTUREBUFFSYNC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11262C60)
#define RPG_GAMECORE_ADVENTUREBUFFSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x11262C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBuffSync_TypeDefinitionIndex = 56824;

	class AdventureBuffSync : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFSYNC__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFSYNC_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFSYNC_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
