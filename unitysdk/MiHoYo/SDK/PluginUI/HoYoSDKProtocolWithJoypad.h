#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MiHoYo::SDK::PluginUI { class HoYoSDKProtocolWithJoypad_JoypadConfig; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D282FD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONACCEPT_OFFSET UNITYSDK_OFFSET(0x1D283AC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1D283940)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONHREFBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1D283BC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D283CB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONREFUSE_OFFSET UNITYSDK_OFFSET(0x1D283B40)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1D283160)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0x1D2831F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2830D0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKProtocolWithJoypad_TypeDefinitionIndex = 37794;

	class HoYoSDKProtocolWithJoypad : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKProtocolWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKProtocolWithJoypad_TypeDefinitionIndex)->GetStaticField(0x29F20);
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

		::System::Void OnAccept(::System::Boolean isJoypadSignal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONACCEPT_OFFSET))(this, isJoypadSignal);
		}

		::System::Void OnRefuse(::System::Boolean isJoypadSignal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONREFUSE_OFFSET))(this, isJoypadSignal);
		}

		::System::Void OnHrefButtonClicked(::System::String* hrefKey, ::System::Boolean isJoypadSignal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONHREFBUTTONCLICKED_OFFSET))(this, hrefKey, isJoypadSignal);
		}

		::System::Void OnReceiveMessage(::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET))(this, nMsgID, strParams);
		}
	};
}
