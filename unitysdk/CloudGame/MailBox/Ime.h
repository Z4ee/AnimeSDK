#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_IME_CONNECT_OFFSET UNITYSDK_OFFSET(0x181D4C90)
#define CLOUDGAME_MAILBOX_IME_IMERECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x181D4760)
#define CLOUDGAME_MAILBOX_IME_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x181D5200)
#define CLOUDGAME_MAILBOX_IME_SENDIMECLOSE_OFFSET UNITYSDK_OFFSET(0x181D54C0)
#define CLOUDGAME_MAILBOX_IME_SENDIMESHOW_OFFSET UNITYSDK_OFFSET(0x181D5460)
#define CLOUDGAME_MAILBOX_IME_SEND_OFFSET UNITYSDK_OFFSET(0x181D4F60)
#define CLOUDGAME_MAILBOX_IME__CCTOR_OFFSET UNITYSDK_OFFSET(0x181D5530)
#define CLOUDGAME_MAILBOX_IME__CTOR_OFFSET UNITYSDK_OFFSET(0x181D5520)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Ime_TypeDefinitionIndex = 7494;

	class Ime : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0xB0E0);
		}
		static ::System::Action_1<::System::String*>** StaticGet_OnInput()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0xB0E8);
		}
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0xB0F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME__CCTOR_OFFSET))();
		}

		static ::System::Boolean Connect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_CONNECT_OFFSET))();
		}

		static ::System::Boolean Send(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SEND_OFFSET))(a1);
		}

		static ::System::Boolean SendEvent(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDEVENT_OFFSET))(a1, a2);
		}

		static ::System::Boolean SendImeShow(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDIMESHOW_OFFSET))(a1);
		}

		static ::System::Boolean SendImeClose(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDIMECLOSE_OFFSET))(a1);
		}

		static ::System::Void ImeReceiveCallback(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_IMERECEIVECALLBACK_OFFSET))(a1, a2);
		}
	};
}
