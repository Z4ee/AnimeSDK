#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class SessionEndedEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC830)
#define MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC870)
#define MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEAC7F0)
#define MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAC7B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionEndedEventHandler_TypeDefinitionIndex = 4298;

	class SessionEndedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::SessionEndedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionEndedEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::SessionEndedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionEndedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
