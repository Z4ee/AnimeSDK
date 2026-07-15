#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18852CD0)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18852D20)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x188529B0)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18852C60)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_SendCallbackHandler_TypeDefinitionIndex = 7506;

	class Mailbox_SendCallbackHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int64 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
