#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__DISPLAYCLASS13_0__CONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x1A1888C0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1888B0)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl___c__DisplayClass13_0_TypeDefinitionIndex = 7494;

	class GameControl___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__DISPLAYCLASS13_0__CONNECT_B__1_OFFSET))(this);
		}
	};
}
