#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"

#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C6AA240)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1C6AA6B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1C6AA370)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_SHOW_OFFSET UNITYSDK_OFFSET(0x1C6AA430)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6AA2F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C6AA7F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C6AA830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x1C6AA870)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x1C6AA8B0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKRealPerson_TypeDefinitionIndex = 47234;

	class HoYoSDKRealPerson : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKRealPerson_TypeDefinitionIndex)->GetStaticField(0x5B2D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKRealPerson*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON_SHOW_OFFSET))(this);
		}

		::System::Void _Show_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_0_OFFSET))(this);
		}

		::System::Void _Show_b__4_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_1_OFFSET))(this);
		}

		::System::Void _Show_b__4_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_2_OFFSET))(this);
		}

		::System::Void _Show_b__4_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKREALPERSON__SHOW_B__4_3_OFFSET))(this);
		}
	};
}
