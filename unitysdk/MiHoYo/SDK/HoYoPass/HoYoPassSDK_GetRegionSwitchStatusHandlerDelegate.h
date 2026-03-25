#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EEB0A0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EEB0D0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EEADF0)
#define MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EEADD0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate_TypeDefinitionIndex = 7286;

	class HoYoPassSDK_GetRegionSwitchStatusHandlerDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_HOYOPASSSDK_GETREGIONSWITCHSTATUSHANDLERDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
