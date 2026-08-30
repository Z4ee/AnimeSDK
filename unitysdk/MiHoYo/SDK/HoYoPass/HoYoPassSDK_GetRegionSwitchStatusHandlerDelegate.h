#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83C40)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83C70)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AE83C30)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE83BC0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate_TypeDefinitionIndex = 8258;

	class HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
