#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnlinePlayRoomModule; }
namespace System { class Action; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9E6850)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__ENTERONLINEPLAYROOM_B__0_OFFSET UNITYSDK_OFFSET(0xD9EA8F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__ENTERONLINEPLAYROOM_B__1_OFFSET UNITYSDK_OFFSET(0xD9EAD20)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass48_0_TypeDefinitionIndex = 66405;

	class OnlinePlayRoomModule___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Action* doTransferAction; // 0x10
		::RPG::Client::OnlinePlayRoomModule* __4__this; // 0x18
		::System::UInt32 mappingInfoId; // 0x20
		::System::UInt32 targetUid; // 0x24
		::System::UInt32 entryId; // 0x28
		::System::UInt32 reason; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterOnlinePlayRoom_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__ENTERONLINEPLAYROOM_B__0_OFFSET))(this);
		}

		::System::Void _EnterOnlinePlayRoom_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS48_0__ENTERONLINEPLAYROOM_B__1_OFFSET))(this);
		}
	};
}
