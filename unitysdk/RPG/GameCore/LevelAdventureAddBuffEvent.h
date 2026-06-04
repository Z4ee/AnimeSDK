#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETBUFFID_OFFSET UNITYSDK_OFFSET(0xCE32320)
#define RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xCE322D0)
#define RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCE32280)
#define RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xCE32270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAdventureAddBuffEvent_TypeDefinitionIndex = 52865;

	class LevelAdventureAddBuffEvent : public ::System::Object
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x10
		::System::UInt32 _BuffID; // 0x14

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELADVENTUREADDBUFFEVENT_GETBUFFID_OFFSET))(this);
		}
	};
}
