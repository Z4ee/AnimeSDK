#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_AntiAddictionCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_InitCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_LoginCallback; }
namespace MiHoYo::SDK { class BiliBiliDelegate_PayCallback; }
namespace MiHoYo::SDK { class MiHoYoSDKBiliBiliInterface_Class_3_3D7EAAB04B8D1FC1; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ENUMWINDOWS_OFFSET UNITYSDK_OFFSET(0x19482370)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPARENT_OFFSET UNITYSDK_OFFSET(0x19482440)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPROCESSWND_OFFSET UNITYSDK_OFFSET(0x194826A0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETWINDOWTHREADPROCESSID_OFFSET UNITYSDK_OFFSET(0x19482510)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ISWINDOWVISIBLE_OFFSET UNITYSDK_OFFSET(0x19482620)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKINIT_OFFSET UNITYSDK_OFFSET(0x19481FD0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGIN_OFFSET UNITYSDK_OFFSET(0x19482120)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGOUT_OFFSET UNITYSDK_OFFSET(0x194822F0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKPAY_OFFSET UNITYSDK_OFFSET(0x194821B0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKSTARTHEARTBEAT_OFFSET UNITYSDK_OFFSET(0x19482260)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKUNINIT_OFFSET UNITYSDK_OFFSET(0x194820A0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SETLASTERROR_OFFSET UNITYSDK_OFFSET(0x194825A0)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_WINDOWPROCCESS_OFFSET UNITYSDK_OFFSET(0x19481C90)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19482990)
#define MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x19482980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKBiliBiliInterface_TypeDefinitionIndex = 46757;

	class MiHoYoSDKBiliBiliInterface : public ::System::Object
	{
	public:
		static ::System::IntPtr* StaticGet_ptrWnd()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKBiliBiliInterface_TypeDefinitionIndex)->GetStaticField(0x11470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE__CCTOR_OFFSET))();
		}

		static ::System::Int32 SDKInit(::System::String* a1, ::System::IntPtr a2, ::System::Boolean a3, ::System::Boolean a4, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* a5)
		{
			return ((::System::Int32(*)(::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKINIT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 SDKUnInit()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKUNINIT_OFFSET))();
		}

		static ::System::Int32 SDKLogin(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGIN_OFFSET))(a1);
		}

		static ::System::Int32 SDKPay(::System::String* a1, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* a2)
		{
			return ((::System::Int32(*)(::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKPAY_OFFSET))(a1, a2);
		}

		static ::System::Int32 SDKStartHeartbeat(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKSTARTHEARTBEAT_OFFSET))(a1);
		}

		static ::System::Int32 SDKLogout()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SDKLOGOUT_OFFSET))();
		}

		static ::System::Boolean EnumWindows(::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_Class_3_3D7EAAB04B8D1FC1* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_Class_3_3D7EAAB04B8D1FC1*, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ENUMWINDOWS_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetParent(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPARENT_OFFSET))(a1);
		}

		static ::System::UInt32 GetWindowThreadProcessId(::System::IntPtr a1, ::System::UInt32& a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETWINDOWTHREADPROCESSID_OFFSET))(a1, a2);
		}

		static ::System::Void SetLastError(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_SETLASTERROR_OFFSET))(a1);
		}

		static ::System::Boolean IsWindowVisible(::System::IntPtr a1)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_ISWINDOWVISIBLE_OFFSET))(a1);
		}

		static ::System::IntPtr GetProcessWnd()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_GETPROCESSWND_OFFSET))();
		}

		static ::System::Boolean WindowProccess(::System::IntPtr a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKBILIBILIINTERFACE_WINDOWPROCCESS_OFFSET))(a1, a2);
		}
	};
}
