#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class SessionEndingEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19EE13B0)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19EE13F0)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19EE1370)
#define MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE1330)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int SessionEndingEventHandler_TypeDefinitionIndex = 4301;

	class SessionEndingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::SessionEndingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionEndingEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::SessionEndingEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::SessionEndingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_SESSIONENDINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
