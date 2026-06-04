#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1451F0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1452E0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1451B0)
#define MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA145140)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BrowserWin32Helper_WndProcDelegate_TypeDefinitionIndex = 43970;

	class BrowserWin32Helper_WndProcDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::IntPtr Invoke(::System::IntPtr a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::IntPtr a5, ::System::IntPtr a6)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::UInt32 a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::IntPtr a5, ::System::IntPtr a6, ::System::AsyncCallback* a7, ::System::Object* a8)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::UInt32, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BROWSERWIN32HELPER_WNDPROCDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
