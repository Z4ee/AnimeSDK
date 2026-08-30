#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B721050)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B7210A0)
#define CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B721090)

namespace CloudGame::MailBox::GameControl
{
	inline static constexpr unsigned int GameControl___c_TypeDefinitionIndex = 7495;

	class GameControl___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Il2CppArray<::System::Byte>*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(GameControl___c_TypeDefinitionIndex)->GetStaticField(0x1580);
		}
		static ::CloudGame::MailBox::GameControl::GameControl___c** StaticGet___9()
		{
			return (::CloudGame::MailBox::GameControl::GameControl___c**)Il2CppClass::FromTypeDefinitionIndex(GameControl___c_TypeDefinitionIndex)->GetStaticField(0x1588);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__13_0(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_GAMECONTROL_GAMECONTROL___C__CONNECT_B__13_0_OFFSET))(this, a1);
		}
	};
}
