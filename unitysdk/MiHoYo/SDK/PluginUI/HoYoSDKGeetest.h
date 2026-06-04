#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1E5BA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA1E60C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1E6410)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xA1E6720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0xA1E6760)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA1E5CD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_SHOW_OFFSET UNITYSDK_OFFSET(0xA1E5D90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E5C50)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKGeetest_TypeDefinitionIndex = 44112;

	class HoYoSDKGeetest : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKGeetest** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKGeetest**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKGeetest_TypeDefinitionIndex)->GetStaticField(0x11B60);
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

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::UniWebViewMessage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnPageClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGECLOSE_OFFSET))(this);
		}

		::System::Void OnPageError(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKGEETEST_ONPAGEERROR_OFFSET))(this, a1);
		}
	};
}
