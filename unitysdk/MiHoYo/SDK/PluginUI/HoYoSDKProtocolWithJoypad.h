#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MiHoYo::SDK::PluginUI { class HoYoSDKProtocolWithJoypad_JoypadConfig; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB280470)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONACCEPT_OFFSET UNITYSDK_OFFSET(0xB280F00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB280CC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONHREFBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0xB2813E0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB281630)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONREFUSE_OFFSET UNITYSDK_OFFSET(0xB2811F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB2805A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0xB280710)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xB280520)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocolWithJoypad_TypeDefinitionIndex = 47225;

	class HoYoSDKProtocolWithJoypad : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocolWithJoypad_TypeDefinitionIndex)->GetStaticField(0x57A50);
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
