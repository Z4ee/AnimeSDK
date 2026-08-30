#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16A8A8E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16A8A950)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_INVOKE_OFFSET UNITYSDK_OFFSET(0x16A8A8D0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8A860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_EnumWindowsProc_TypeDefinitionIndex = 47069;

	class BrowserWin32Helper_EnumWindowsProc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_ENUMWINDOWSPROC_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
