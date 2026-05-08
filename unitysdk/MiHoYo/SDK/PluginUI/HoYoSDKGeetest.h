#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1AA87470)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1AA87960)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AA87BE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1AA88040)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x1AA88080)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1AA87600)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_SHOW_OFFSET UNITYSDK_OFFSET(0x1AA87670)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA87570)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKGeetest_TypeDefinitionIndex = 35525;

	class HoYoSDKGeetest : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKGeetest** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKGeetest**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKGeetest_TypeDefinitionIndex)->GetStaticField(0x26D40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKGeetest* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKGeetest*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_SHOW_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, message);
		}

		::System::Void OnPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnPageError(::System::String* errMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGEERROR_OFFSET))(this, errMsg);
		}
	};
}
