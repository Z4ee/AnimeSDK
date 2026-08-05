#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CloudGame::MailBox { class Mailbox_ReceiveCallbackHandler; }
namespace CloudGame::MailBox { class Mailbox_SendCallbackHandler; }
namespace CloudGame::MailBox { class Mailbox_SendCallbackRawHandler; }
namespace System { class String; }

#define CLOUDGAME_MAILBOX_MAILBOX_ATTACHED_OFFSET UNITYSDK_OFFSET(0x1DD34A60)
#define CLOUDGAME_MAILBOX_MAILBOX_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DD34DA0)
#define CLOUDGAME_MAILBOX_MAILBOX_CREATE_OFFSET UNITYSDK_OFFSET(0x1DD34C40)
#define CLOUDGAME_MAILBOX_MAILBOX_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DD34FF0)
#define CLOUDGAME_MAILBOX_MAILBOX_MAILBOXSENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DD34800)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCLOSE_OFFSET UNITYSDK_OFFSET(0x1DD349E0)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCREATE_OFFSET UNITYSDK_OFFSET(0x1DD34890)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXLIBRARYISATTACHED_OFFSET UNITYSDK_OFFSET(0x1DD34810)
#define CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXSEND_OFFSET UNITYSDK_OFFSET(0x1DD34940)
#define CLOUDGAME_MAILBOX_MAILBOX_SEND_OFFSET UNITYSDK_OFFSET(0x1DD34B30)
#define CLOUDGAME_MAILBOX_MAILBOX__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD35110)
#define CLOUDGAME_MAILBOX_MAILBOX__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD34E90)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_TypeDefinitionIndex = 19644;

	class Mailbox : public ::System::Object
	{
	public:
		static ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler** StaticGet_sendCallback()
		{
			return (::CloudGame::MailBox::Mailbox_SendCallbackRawHandler**)Il2CppClass::FromTypeDefinitionIndex(Mailbox_TypeDefinitionIndex)->GetStaticField(0xB180);
		}
		::System::IntPtr handle; // 0x10

		::System::Void _ctor(::System::String* name, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* receiveCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX__CTOR_OFFSET))(this, name, receiveCallback);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX__CCTOR_OFFSET))();
		}

		static ::System::Int64 NativeMailboxLibraryIsAttached()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXLIBRARYISATTACHED_OFFSET))();
		}

		static ::System::Int64 NativeMailboxCreate(::System::IntPtr* pHandle, ::System::IntPtr mailboxName, ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler* sendCallback, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* receiveCallback)
		{
			return ((::System::Int64(*)(::System::IntPtr*, ::System::IntPtr, ::CloudGame::MailBox::Mailbox_SendCallbackRawHandler*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCREATE_OFFSET))(pHandle, mailboxName, sendCallback, receiveCallback);
		}

		static ::System::Int64 NativeMailboxSend(::System::IntPtr pHandle, ::System::IntPtr data, ::System::Int32 size, ::CloudGame::MailBox::Mailbox_SendCallbackHandler* callback)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::System::Int32, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXSEND_OFFSET))(pHandle, data, size, callback);
		}

		static ::System::Int64 NativeMailboxClose(::System::IntPtr pHandle)
		{
			return ((::System::Int64(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_NATIVEMAILBOXCLOSE_OFFSET))(pHandle);
		}

		static ::System::Int64 Attached()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_ATTACHED_OFFSET))();
		}

		::System::Int64 Send(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Int64(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SEND_OFFSET))(this, data);
		}

		::System::Int64 Create(::System::String* name, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler* receiveCallback)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*, ::CloudGame::MailBox::Mailbox_ReceiveCallbackHandler*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_CREATE_OFFSET))(this, name, receiveCallback);
		}

		::System::Int64 Close()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_CLOSE_OFFSET))(this);
		}

		static ::System::Void MailboxSendCallback(::CloudGame::MailBox::Mailbox_SendCallbackHandler* pContext, ::System::Int64 code)
		{
			return ((::System::Void(*)(::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_MAILBOXSENDCALLBACK_OFFSET))(pContext, code);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_FINALIZE_OFFSET))(this);
		}
	};
}
