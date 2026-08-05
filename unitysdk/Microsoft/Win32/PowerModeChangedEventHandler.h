#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class PowerModeChangedEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAA8200)
#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAA8240)
#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAA81C0)
#define MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA8180)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int PowerModeChangedEventHandler_TypeDefinitionIndex = 4295;

	class PowerModeChangedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::PowerModeChangedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::PowerModeChangedEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::PowerModeChangedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::PowerModeChangedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_POWERMODECHANGEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
