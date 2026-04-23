#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox; }
namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLOUDGAME_MAILBOX_IME_CONNECT_OFFSET UNITYSDK_OFFSET(0x173CA380)
#define CLOUDGAME_MAILBOX_IME_IMERECEIVECALLBACK_OFFSET UNITYSDK_OFFSET(0x173C9E00)
#define CLOUDGAME_MAILBOX_IME_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x173CA8E0)
#define CLOUDGAME_MAILBOX_IME_SENDIMECLOSE_OFFSET UNITYSDK_OFFSET(0x173CAC10)
#define CLOUDGAME_MAILBOX_IME_SENDIMESHOW_OFFSET UNITYSDK_OFFSET(0x173CABB0)
#define CLOUDGAME_MAILBOX_IME_SEND_OFFSET UNITYSDK_OFFSET(0x173CA640)
#define CLOUDGAME_MAILBOX_IME__CCTOR_OFFSET UNITYSDK_OFFSET(0x173CAC80)
#define CLOUDGAME_MAILBOX_IME__CTOR_OFFSET UNITYSDK_OFFSET(0x173CAC70)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Ime_TypeDefinitionIndex = 6591;

	class Ime : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox** StaticGet_mailbox()
		{
			return (::CloudGame::MailBox::Mailbox**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0x162E0);
		}
		static ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler** StaticGet_receiveCallback()
		{
			return (::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0x162E8);
		}
		static ::System::Action_1<::System::String*>** StaticGet_OnInput()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Ime_TypeDefinitionIndex)->GetStaticField(0x162F0);
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

		static ::System::Boolean Send(::System::String* dataStr)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SEND_OFFSET))(dataStr);
		}

		static ::System::Boolean SendEvent(::System::String* type, ::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDEVENT_OFFSET))(type, message);
		}

		static ::System::Boolean SendImeShow(::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDIMESHOW_OFFSET))(message);
		}

		static ::System::Boolean SendImeClose(::System::String* message)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_SENDIMECLOSE_OFFSET))(message);
		}

		static ::System::Void ImeReceiveCallback(::System::IntPtr pData, ::System::Int32 size)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_IME_IMERECEIVECALLBACK_OFFSET))(pData, size);
		}
	};
}
