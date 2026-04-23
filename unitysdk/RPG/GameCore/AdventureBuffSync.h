#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREBUFFSYNC_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB560C30)
#define RPG_GAMECORE_ADVENTUREBUFFSYNC_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB560C80)
#define RPG_GAMECORE_ADVENTUREBUFFSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0xB560C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBuffSync_TypeDefinitionIndex = 52194;

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
