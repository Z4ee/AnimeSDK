#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_DOACTIONEASY_OFFSET UNITYSDK_OFFSET(0x8D99710)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_INSTANCE_OFFSET UNITYSDK_OFFSET(0x8D99110)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x8D99500)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8D99240)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_SHOW_OFFSET UNITYSDK_OFFSET(0x8D99300)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x8D991C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x8D99720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x8D99760)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x8D997A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x8D997E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_4_OFFSET UNITYSDK_OFFSET(0x8D99820)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_5_OFFSET UNITYSDK_OFFSET(0x8D99860)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocol_TypeDefinitionIndex = 43314;

	class HoYoSDKProtocol : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocol** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocol**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocol_TypeDefinitionIndex)->GetStaticField(0x515B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocol* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKProtocol*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_SHOW_OFFSET))(this);
		}

		::System::Void DoActionEasy(::System::String* strElemenetId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_DOACTIONEASY_OFFSET))(this, strElemenetId);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_0_OFFSET))(this);
		}

		::System::Void _Show_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_1_OFFSET))(this);
		}

		::System::Void _Show_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_2_OFFSET))(this);
		}

		::System::Void _Show_b__4_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_3_OFFSET))(this);
		}

		::System::Void _Show_b__4_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_4_OFFSET))(this);
		}

		::System::Void _Show_b__4_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_5_OFFSET))(this);
		}
	};
}
