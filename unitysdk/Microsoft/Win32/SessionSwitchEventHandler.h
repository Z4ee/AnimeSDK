#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class SessionSwitchEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC930)
#define MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC970)
#define MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC8F0)
#define MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAC8B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionSwitchEventHandler_TypeDefinitionIndex = 4303;

	class SessionSwitchEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::SessionSwitchEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionSwitchEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::SessionSwitchEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionSwitchEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONSWITCHEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
