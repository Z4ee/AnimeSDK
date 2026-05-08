#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_DOCLOSE_OFFSET UNITYSDK_OFFSET(0x198D03D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_DOSHOW_OFFSET UNITYSDK_OFFSET(0x198D0130)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_HANDLECUSTOMNOTIFYMSG_OFFSET UNITYSDK_OFFSET(0x198CFEE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x198CFD20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x198D0260)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONRECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x198CFEB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x198D00C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_REGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x198D04C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_UNREGISTERDELEGATE_OFFSET UNITYSDK_OFFSET(0x198D0640)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x198CFE20)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x198D0720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_1_OFFSET UNITYSDK_OFFSET(0x198D0760)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_2_OFFSET UNITYSDK_OFFSET(0x198D07A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_3_OFFSET UNITYSDK_OFFSET(0x198D07E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKQRLogin_TypeDefinitionIndex = 35537;

	class HoYoSDKQRLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKQRLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKQRLogin**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKQRLogin_TypeDefinitionIndex)->GetStaticField(0x26CD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKQRLogin* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKQRLogin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_INSTANCE_OFFSET))();
		}

		::System::Void OnReceiveMessage(::System::Int32 nMsgID, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONRECEIVEMESSAGE_OFFSET))(this, nMsgID, strParams);
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_ONCLOSE_OFFSET))(this);
		}

		::System::Void DoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_DOSHOW_OFFSET))(this);
		}

		::System::Void RegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_REGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void UnRegisterDelegate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_UNREGISTERDELEGATE_OFFSET))(this);
		}

		::System::Void DoClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_DOCLOSE_OFFSET))(this);
		}

		::System::Void HandleCustomNotifyMsg(::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN_HANDLECUSTOMNOTIFYMSG_OFFSET))(this, strParams);
		}

		::System::Void _RegisterDelegate_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_0_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_1_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_2_OFFSET))(this);
		}

		::System::Void _RegisterDelegate_b__6_3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKQRLOGIN__REGISTERDELEGATE_B__6_3_OFFSET))(this, value);
		}
	};
}
