#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/ControlTimelineEntityEvent.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCE3E60)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCCE3F00)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCCE3EB0)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_INIT_OFFSET UNITYSDK_OFFSET(0xCCE3DF0)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCE3F50)
#define RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCE3F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureControlTimelineEntityEvent_TypeDefinitionIndex = 52893;

	class AdventureControlTimelineEntityEvent : public ::Class_1_BF7A075734D15E98
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::String* StateName; // 0x20
		::RPG::GameCore::ControlTimelineEntityEvent ControlEventType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureControlTimelineEntityEvent* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ControlTimelineEntityEvent a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::AdventureControlTimelineEntityEvent*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlTimelineEntityEvent, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECONTROLTIMELINEENTITYEVENT___IFIXBASEPROXY_CLEAR_OFFSET))(this);
		}
	};
}
