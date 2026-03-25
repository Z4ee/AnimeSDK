#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/MiHoYo/SDK/PopupDialog_SelectedResult.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8563830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x8563B40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONOPERATION_OFFSET UNITYSDK_OFFSET(0x8563C20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8563960)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x8563A20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x85638E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPopupDialog_TypeDefinitionIndex = 37436;

	class HoYoSDKPopupDialog : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKPopupDialog_TypeDefinitionIndex)->GetStaticField(0x14550);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKPopupDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::PopupDialog_SelectedResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PopupDialog_SelectedResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPOPUPDIALOG_ONOPERATION_OFFSET))(this, result);
		}
	};
}
