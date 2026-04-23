#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnlinePlayRoomModule; }
namespace System { class Action; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0xABEDD80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xABF0450)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0xABF0B20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xABF04D0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass31_0_TypeDefinitionIndex = 61164;

	class OnlinePlayRoomModule___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::RPG::Client::OnlinePlayRoomModule* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Action* doTransferAction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__1(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS31_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET))(this, isOk);
		}
	};
}
