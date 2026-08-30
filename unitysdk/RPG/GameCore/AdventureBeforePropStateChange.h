#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE4B9D30)
#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE4B9D80)
#define RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4B9D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBeforePropStateChange_TypeDefinitionIndex = 56805;

	class AdventureBeforePropStateChange : public ::System::Object
	{
	public:
		::System::UInt32 ServerEntityID; // 0x10
		::RPG::GameCore::PropState ToState; // 0x14
		::System::UInt32 RuntimeID; // 0x18
		::System::UInt32 InstanceID; // 0x1C
		::RPG::GameCore::PropState FromState; // 0x20
		::System::UInt32 GroupID; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::PropState a5, ::RPG::GameCore::PropState a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::PropState, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBEFOREPROPSTATECHANGE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
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
