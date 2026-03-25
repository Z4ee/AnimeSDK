#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_IME___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DCD550)
#define CLOUDGAME_MAILBOX_IME___C__CONNECT_B__3_0_OFFSET UNITYSDK_OFFSET(0x15DCD5A0)
#define CLOUDGAME_MAILBOX_IME___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCD590)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Ime___c_TypeDefinitionIndex = 6559;

	class Ime___c : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Ime___c** StaticGet___9()
		{
			return (::CloudGame::MailBox::Ime___c**)Il2CppClass::FromTypeDefinitionIndex(Ime___c_TypeDefinitionIndex)->GetStaticField(0xF2D0);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Ime___c_TypeDefinitionIndex)->GetStaticField(0xF2D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__CTOR_OFFSET))(this);
		}

		::System::Void _Connect_b__3_0(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME___C__CONNECT_B__3_0_OFFSET))(this, message);
		}
	};
}
