#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class UserPreferenceChangedEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18FA2A70)
#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18FA2AB0)
#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18FA2A30)
#define MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA29F0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UserPreferenceChangedEventHandler_TypeDefinitionIndex = 4308;

	class UserPreferenceChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::UserPreferenceChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::UserPreferenceChangedEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::UserPreferenceChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::UserPreferenceChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
