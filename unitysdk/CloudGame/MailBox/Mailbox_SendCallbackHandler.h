#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D494870)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D4948E0)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D494560)
#define CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D494540)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_SendCallbackHandler_TypeDefinitionIndex = 19647;

	class Mailbox_SendCallbackHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int64 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_INVOKE_OFFSET))(this, code);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int64 code, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_BEGININVOKE_OFFSET))(this, code, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_SENDCALLBACKHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
