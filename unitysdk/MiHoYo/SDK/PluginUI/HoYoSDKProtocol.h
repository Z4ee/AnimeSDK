#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_DOACTIONEASY_OFFSET UNITYSDK_OFFSET(0xB27FCE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB27F670)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB27FAD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB27F7A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_SHOW_OFFSET UNITYSDK_OFFSET(0xB27F860)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0xB27F720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0xB27FCF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0xB27FD30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0xB27FD70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0xB27FDB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_4_OFFSET UNITYSDK_OFFSET(0xB27FDF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL__SHOW_B__4_5_OFFSET UNITYSDK_OFFSET(0xB27FE30)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocol_TypeDefinitionIndex = 47223;

	class HoYoSDKProtocol : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocol** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocol**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocol_TypeDefinitionIndex)->GetStaticField(0x579A0);
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

		::System::Void DoActionEasy(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOL_DOACTIONEASY_OFFSET))(this, a1);
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
