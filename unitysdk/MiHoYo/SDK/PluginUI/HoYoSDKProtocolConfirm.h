#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1A87F510)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONACCEPT_OFFSET UNITYSDK_OFFSET(0x1A87F980)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1A87F870)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONHREFBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1A87FA00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONREFUSE_OFFSET UNITYSDK_OFFSET(0x1A87F9C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A87F6A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x1A87F710)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87F610)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocolConfirm_TypeDefinitionIndex = 35531;

	class HoYoSDKProtocolConfirm : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolConfirm** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocolConfirm**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocolConfirm_TypeDefinitionIndex)->GetStaticField(0x26A00);
		}
		// static const ::System::String* LINK_ID_USERAGREEMENT; // 0x0
		// static const ::System::String* LINK_ID_PRIVACY; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolConfirm* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKProtocolConfirm*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_SHOW_OFFSET))(this);
		}

		::System::Void OnAccept()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONACCEPT_OFFSET))(this);
		}

		::System::Void OnRefuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONREFUSE_OFFSET))(this);
		}

		::System::Void OnHrefButtonClicked(::System::String* hrefKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLCONFIRM_ONHREFBUTTONCLICKED_OFFSET))(this, hrefKey);
		}
	};
}
