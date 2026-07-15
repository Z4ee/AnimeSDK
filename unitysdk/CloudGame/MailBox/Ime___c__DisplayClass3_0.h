#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLOUDGAME_MAILBOX_IME___C__DISPLAYCLASS3_0__CONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x188524C0)
#define CLOUDGAME_MAILBOX_IME___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188524B0)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Ime___c__DisplayClass3_0_TypeDefinitionIndex = 7501;

	class Ime___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__DISPLAYCLASS3_0__CONNECT_B__1_OFFSET))(this);
		}
	};
}
