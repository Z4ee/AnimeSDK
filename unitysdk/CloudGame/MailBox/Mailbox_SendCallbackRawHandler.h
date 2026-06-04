#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace CloudGame::MailBox { class Mailbox_SendCallbackHandler; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x181D6070)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x181D60D0)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x181D6060)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x181D5FE0)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_SendCallbackRawHandler_TypeDefinitionIndex = 7499;

	class Mailbox_SendCallbackRawHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::CloudGame::MailBox::Mailbox_SendCallbackHandler* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::CloudGame::MailBox::Mailbox_SendCallbackHandler* a1, ::System::Int64 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::CloudGame::MailBox::Mailbox_SendCallbackHandler*, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKRAWHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
