#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BF0B6A0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BF0B710)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BF0B350)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0B330)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_EnumWindowsProc_TypeDefinitionIndex = 36980;

	class BrowserWin32Helper_EnumWindowsProc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::IntPtr hWnd, ::System::IntPtr lParam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_INVOKE_OFFSET))(this, hWnd, lParam);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr hWnd, ::System::IntPtr lParam, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_BEGININVOKE_OFFSET))(this, hWnd, lParam, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
