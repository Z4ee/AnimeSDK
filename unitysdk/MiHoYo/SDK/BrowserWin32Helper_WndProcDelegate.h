#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C834740)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C834850)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C8342B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C831050)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_WndProcDelegate_TypeDefinitionIndex = 36979;

	class BrowserWin32Helper_WndProcDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::System::IntPtr hWnd, ::System::UInt32 msg, ::System::IntPtr wParam, ::System::IntPtr lParam, ::System::IntPtr uIdSubclass, ::System::IntPtr dwRefData)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_INVOKE_OFFSET))(this, hWnd, msg, wParam, lParam, uIdSubclass, dwRefData);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr hWnd, ::System::UInt32 msg, ::System::IntPtr wParam, ::System::IntPtr lParam, ::System::IntPtr uIdSubclass, ::System::IntPtr dwRefData, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_BEGININVOKE_OFFSET))(this, hWnd, msg, wParam, lParam, uIdSubclass, dwRefData, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
