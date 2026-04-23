#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x173CBB50)
#define CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x173CBBC0)
#define CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x173CB800)
#define CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173C9810)

namespace CloudGame::MailBox
{
	inline static constexpr unsigned int Mailbox_ReceiveCallbackHandler_TypeDefinitionIndex = 6595;

	class Mailbox_ReceiveCallbackHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr pData, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_INVOKE_OFFSET))(this, pData, size);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr pData, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_BEGININVOKE_OFFSET))(this, pData, size, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLOUDGAME_MAILBOX_MAILBOX_RECEIVECALLBACKHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
