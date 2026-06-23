#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class UserPreferenceChangingEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B3E1930)
#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B3E1970)
#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B3E18F0)
#define MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E18B0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UserPreferenceChangingEventHandler_TypeDefinitionIndex = 4310;

	class UserPreferenceChangingEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::UserPreferenceChangingEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::UserPreferenceChangingEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::UserPreferenceChangingEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::UserPreferenceChangingEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_USERPREFERENCECHANGINGEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
