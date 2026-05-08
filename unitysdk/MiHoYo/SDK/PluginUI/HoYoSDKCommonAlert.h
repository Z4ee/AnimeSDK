#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_INSTANCE_OFFSET UNITYSDK_OFFSET(0x198CF5F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x198CF8F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET UNITYSDK_OFFSET(0x198CF970)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONSHOW_OFFSET UNITYSDK_OFFSET(0x198CF780)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_SHOW_OFFSET UNITYSDK_OFFSET(0x198CF7F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x198CF6F0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKCommonAlert_TypeDefinitionIndex = 35512;

	class HoYoSDKCommonAlert : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKCommonAlert**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKCommonAlert_TypeDefinitionIndex)->GetStaticField(0x26CB0);
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

		::System::Void OnOperation(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCOMMONALERT_ONOPERATION_OFFSET))(this, result);
		}
	};
}
