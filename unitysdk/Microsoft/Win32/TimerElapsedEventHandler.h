#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Microsoft::Win32 { class TimerElapsedEventArgs; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C069550)
#define MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C069590)
#define MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C069510)
#define MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0694D0)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int TimerElapsedEventHandler_TypeDefinitionIndex = 4305;

	class TimerElapsedEventHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* sender, ::Microsoft::Win32::TimerElapsedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::TimerElapsedEventArgs*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_INVOKE_OFFSET))(this, sender, e);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Microsoft::Win32::TimerElapsedEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Microsoft::Win32::TimerElapsedEventArgs*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_BEGININVOKE_OFFSET))(this, sender, e, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_TIMERELAPSEDEVENTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
