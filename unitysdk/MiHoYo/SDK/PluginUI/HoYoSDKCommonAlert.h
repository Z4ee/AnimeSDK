#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18544E00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x18545120)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET UNITYSDK_OFFSET(0x18545200)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18544F30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_SHOW_OFFSET UNITYSDK_OFFSET(0x18544FF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x18544EB0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonAlert_TypeDefinitionIndex = 44969;

	class HoYoSDKCommonAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonAlert_TypeDefinitionIndex)->GetStaticField(0x1A010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET))(this, a1);
		}
	};
}
