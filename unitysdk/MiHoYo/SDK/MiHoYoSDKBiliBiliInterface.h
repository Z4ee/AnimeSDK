#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_AntiAddictionCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_InitCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_LoginCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_PayCallback; }
namespace MiHoYo::SDK { class MiHoYoSDKBiliBiliInterface_Class_3_BBFFA3EDA51FCB23; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0x8D3ADC0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x8D3AE90)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPROCESSWND_OFFSET UNITYSDK_OFFSET(0x8D3B0F0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x8D3AF60)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x8D3B070)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKINIT_OFFSET UNITYSDK_OFFSET(0x8D3AA20)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGIN_OFFSET UNITYSDK_OFFSET(0x8D3AB70)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGOUT_OFFSET UNITYSDK_OFFSET(0x8D3AD40)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKPAY_OFFSET UNITYSDK_OFFSET(0x8D3AC00)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKSTARTHEARTBEAT_OFFSET UNITYSDK_OFFSET(0x8D3ACB0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKUNINIT_OFFSET UNITYSDK_OFFSET(0x8D3AAF0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SETLASTERROR_OFFSET UNITYSDK_OFFSET(0x8D3AFF0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_WINDOWPROCCESS_OFFSET UNITYSDK_OFFSET(0x8D3A6E0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D3B3E0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D3B3D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBiliBiliInterface_TypeDefinitionIndex = 42906;

	class MiHoYoSDKBiliBiliInterface : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_ptrWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKBiliBiliInterface_TypeDefinitionIndex)->GetStaticField(0xFBF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Int32 SDKInit(::System::String* szGameInfo, ::System::IntPtr hwndParent, ::System::Boolean bExclusiveMode, ::System::Boolean bEnableMultiOpen, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* callBack)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKINIT_OFFSET))(szGameInfo, hwndParent, bExclusiveMode, bEnableMultiOpen, callBack);
		}

		static ::System::Int32 SDKUnInit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKUNINIT_OFFSET))();
		}

		static ::System::Int32 SDKLogin(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* callBack)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGIN_OFFSET))(callBack);
		}

		static ::System::Int32 SDKPay(::System::String* info, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* callBack)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKPAY_OFFSET))(info, callBack);
		}

		static ::System::Int32 SDKStartHeartbeat(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* callBack)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKSTARTHEARTBEAT_OFFSET))(callBack);
		}

		static ::System::Int32 SDKLogout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGOUT_OFFSET))();
		}

		static ::System::Boolean EnumWindows(::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_Class_3_BBFFA3EDA51FCB23* lpEnumFunc, ::System::UInt32 lParam)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_Class_3_BBFFA3EDA51FCB23*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ENUMWINDOWS_OFFSET))(lpEnumFunc, lParam);
		}

		static ::System::IntPtr GetParent(::System::IntPtr hWnd)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPARENT_OFFSET))(hWnd);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr hWnd, ::System::UInt32& lpdwProcessId)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETWINDOWTHREADPROCESSID_OFFSET))(hWnd, lpdwProcessId);
		}

		static ::System::Void SetLastError(::System::UInt32 dwErrCode)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SETLASTERROR_OFFSET))(dwErrCode);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr hWnd)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ISWINDOWVISIBLE_OFFSET))(hWnd);
		}

		static ::System::IntPtr GetProcessWnd()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPROCESSWND_OFFSET))();
		}

		static ::System::Boolean WindowProccess(::System::IntPtr hwnd, ::System::UInt32 lParam)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_WINDOWPROCCESS_OFFSET))(hwnd, lParam);
		}
	};
}
