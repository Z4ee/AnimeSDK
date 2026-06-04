#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace CloudGame::MailBox { class Mailbox_SendCallbackHandler; }
namespace CloudGame::MailBox { class Mailbox_SendCallbackRawHandler; }
namespace System { class String; }

#define CLOUDGAME_MAILBOX_MAILBOX_ATTACHED_OFFSET UNITYSDK_OFFSET(0x181D3A80)
#define CLOUDGAME_MAILBOX_MAILBOX_CLOSE_OFFSET UNITYSDK_OFFSET(0x181D5B70)
#define CLOUDGAME_MAILBOX_MAILBOX_CREATE_OFFSET UNITYSDK_OFFSET(0x181D5A10)
#define CLOUDGAME_MAILBOX_MAILBOX_FINALIZE_OFFSET UNITYSDK_OFFSET(0x181D5C70)
#define CLOUDGAME_MAILBOX_MAILBOX_MAILBOXSENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x181D57A0)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCLOSE_OFFSET UNITYSDK_OFFSET(0x181D5990)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCREATE_OFFSET UNITYSDK_OFFSET(0x181D5840)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXLIBRARYISATTACHED_OFFSET UNITYSDK_OFFSET(0x181D57C0)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXSEND_OFFSET UNITYSDK_OFFSET(0x181D58F0)
#define CLOUDGAME_MAILBOX_MAILBOX_SEND_OFFSET UNITYSDK_OFFSET(0x181D3DC0)
#define CLOUDGAME_MAILBOX_MAILBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x181D5D90)
#define CLOUDGAME_MAILBOX_MAILBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x181D3B50)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_TypeDefinitionIndex = 7497;

	class Mailbox : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler** StaticGet_sendCallback()
		{
			return (::CloudGame::MailBox::Mailbox_SendCallbackRawHandler**)Il2CppClass::FromTypeDefinitionIndex(Mailbox_TypeDefinitionIndex)->GetStaticField(0xB1D0);
		}
		::System::IntPtr handle; // 0x10

		::System::Void _ctor(::System::String* a1, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX__CCTOR_OFFSET))();
		}

		static ::System::Int64 NativeMailboxLibraryIsAttached()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXLIBRARYISATTACHED_OFFSET))();
		}

		static ::System::Int64 NativeMailboxCreate(::System::IntPtr* a1, ::System::IntPtr a2, ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler* a3, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* a4)
		{
			return ((::System::Int64(*)(::System::IntPtr*, ::System::IntPtr, ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCREATE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 NativeMailboxSend(::System::IntPtr a1, ::System::IntPtr a2, ::System::Int32 a3, ::CloudGame::MailBox::Mailbox_SendCallbackHandler* a4)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXSEND_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 NativeMailboxClose(::System::IntPtr a1)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCLOSE_OFFSET))(a1);
		}

		static ::System::Int64 Attached()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_ATTACHED_OFFSET))();
		}

		::System::Int64 Send(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SEND_OFFSET))(this, a1);
		}

		::System::Int64 Create(::System::String* a1, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* a2)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_CREATE_OFFSET))(this, a1, a2);
		}

		::System::Int64 Close()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_CLOSE_OFFSET))(this);
		}

		static ::System::Void MailboxSendCallback(::CloudGame::MailBox::Mailbox_SendCallbackHandler* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_MAILBOXSENDCALLBACK_OFFSET))(a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_FINALIZE_OFFSET))(this);
		}
	};
}
