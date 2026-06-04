#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnlinePlayRoomModule; }
namespace System { class Action; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2FAB60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC2FD380)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xC2FDA70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xC2FD410)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass32_0_TypeDefinitionIndex = 62088;

	class OnlinePlayRoomModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::RPG::Client::OnlinePlayRoomModule* __4__this; // 0x18
		::System::Action* doTransferAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS32_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET))(this, a1);
		}
	};
}
