#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ADVENTUREBUFFEVENT_GETBUFFID_OFFSET UNITYSDK_OFFSET(0x11262B80)
#define RPG_GAMECORE_ADVENTUREBUFFEVENT_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x11262B40)
#define RPG_GAMECORE_ADVENTUREBUFFEVENT_GETISBUFFCREATE_OFFSET UNITYSDK_OFFSET(0x11262BC0)
#define RPG_GAMECORE_ADVENTUREBUFFEVENT_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11262B00)
#define RPG_GAMECORE_ADVENTUREBUFFEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1125C980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureBuffEvent_TypeDefinitionIndex = 56797;

	class AdventureBuffEvent : public ::System::Object
	{
	public:
		::System::UInt32 _EntityRuntimeID; // 0x10
		::System::UInt32 _BuffID; // 0x14
		::System::Boolean _IsBuffCreate; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFEVENT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFEVENT_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFEVENT_GETEVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 GetBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFEVENT_GETBUFFID_OFFSET))(this);
		}

		::System::Boolean GetIsBuffCreate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBUFFEVENT_GETISBUFFCREATE_OFFSET))(this);
		}
	};
}
