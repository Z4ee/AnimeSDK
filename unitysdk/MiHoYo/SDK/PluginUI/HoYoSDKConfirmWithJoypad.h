#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfirmWithJoypad_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace MiHoYo::SDK::PluginUI { class HoYoSDKConfirmWithJoypad_JoypadConfig; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB27B530)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB27BC10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONOPERATION_OFFSET UNITYSDK_OFFSET(0xB27BF50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xB27BFC0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB27B660)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0xB27B7D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0xB27B5E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKConfirmWithJoypad_TypeDefinitionIndex = 47210;

	class HoYoSDKConfirmWithJoypad : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithJoypad** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKConfirmWithJoypad_TypeDefinitionIndex)->GetStaticField(0x570E0);
		}
		::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithJoypad_JoypadConfig* joypadConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithJoypad* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKConfirmWithJoypad*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_SHOW_OFFSET))(this);
		}

		::System::Void OnOperation(::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONOPERATION_OFFSET))(this, a1, a2);
		}

		::System::Void OnReceiveMessage(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_ONRECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
