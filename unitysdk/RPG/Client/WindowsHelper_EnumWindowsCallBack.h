#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA786620)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA786690)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xA7862B0)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA786230)

namespace RPG::Client
{
	inline static constexpr unsigned int WindowsHelper_EnumWindowsCallBack_TypeDefinitionIndex = 60046;

	class WindowsHelper_EnumWindowsCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::IntPtr hwnd, ::System::IntPtr lParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_INVOKE_OFFSET))(this, hwnd, lParam);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr hwnd, ::System::IntPtr lParam, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_BEGININVOKE_OFFSET))(this, hwnd, lParam, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
