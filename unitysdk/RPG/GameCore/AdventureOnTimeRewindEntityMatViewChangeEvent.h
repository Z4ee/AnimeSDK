#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xE4EB6C0)
#define RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4EB760)
#define RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4EB710)
#define RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xE4EB670)
#define RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EB7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureOnTimeRewindEntityMatViewChangeEvent_TypeDefinitionIndex = 56825;

	class AdventureOnTimeRewindEntityMatViewChangeEvent : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnTimeRewindEntityMatViewChangeEvent* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AdventureOnTimeRewindEntityMatViewChangeEvent*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONTIMEREWINDENTITYMATVIEWCHANGEEVENT_GETEVENTTYPE_OFFSET))(this);
		}
	};
}
