#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class EarlyAccessContent; }
namespace RPG::Client { class EarlyAccessModule; }
namespace RPG::Client { class OnlinePlayRoomModule; }
namespace System { class Action; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9EEA60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0___HANDLEPARKLOCKEDFLOOR_B__0_OFFSET UNITYSDK_OFFSET(0xD9F41D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0___HANDLEPARKLOCKEDFLOOR_B__1_OFFSET UNITYSDK_OFFSET(0xD9F4340)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass36_0_TypeDefinitionIndex = 66403;

	class OnlinePlayRoomModule___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::Client::EarlyAccessModule* earlyAccessModule; // 0x10
		::RPG::Client::EarlyAccessContent* content; // 0x18
		::System::Action* __9__1; // 0x20
		::RPG::Client::OnlinePlayRoomModule* __4__this; // 0x28
		::System::UInt32 preMissionID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void __HandleParkLockedFloor_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0___HANDLEPARKLOCKEDFLOOR_B__0_OFFSET))(this);
		}

		::System::Void __HandleParkLockedFloor_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS36_0___HANDLEPARKLOCKEDFLOOR_B__1_OFFSET))(this);
		}
	};
}
