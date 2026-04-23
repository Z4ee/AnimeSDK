#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB560540)
#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB560590)
#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB560510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforePropStateChange_TypeDefinitionIndex = 52175;

	class AdventureBeforePropStateChange : public ::System::Object
	{
	public:
		::System::UInt32 RuntimeID; // 0x10
		::System::UInt32 ServerEntityID; // 0x14
		::System::UInt32 InstanceID; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::RPG::GameCore::PropState ToState; // 0x20
		::RPG::GameCore::PropState FromState; // 0x24

		::System::Void _ctor(::System::UInt32 serverEntityID, ::System::UInt32 runtimeID, ::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::PropState fromState, ::RPG::GameCore::PropState toState)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE__CTOR_OFFSET))(this, serverEntityID, runtimeID, groupID, instanceID, fromState, toState);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}
	};
}
