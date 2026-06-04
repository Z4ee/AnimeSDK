#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MiHoYo::SDK::PluginUI { class HoYoSDKProtocolWithJoypad_JoypadConfig; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA1E99F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONACCEPT_OFFSET UNITYSDK_OFFSET(0xA1EA950)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xA1EA560)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONHREFBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xA1EAE30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1EB080)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONREFUSE_OFFSET UNITYSDK_OFFSET(0xA1EAC40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA1E9B20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0xA1E9C90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xA1E9AA0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocolWithJoypad_TypeDefinitionIndex = 44119;

	class HoYoSDKProtocolWithJoypad : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocolWithJoypad_TypeDefinitionIndex)->GetStaticField(0x12430);
		}
		::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad_JoypadConfig* joypadConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_SHOW_OFFSET))(this);
		}

		::System::Void OnAccept(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONACCEPT_OFFSET))(this, a1);
		}

		::System::Void OnRefuse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONREFUSE_OFFSET))(this, a1);
		}

		::System::Void OnHrefButtonClicked(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONHREFBUTTONCLICKED_OFFSET))(this, a1, a2);
		}

		::System::Void OnReceiveMessage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
