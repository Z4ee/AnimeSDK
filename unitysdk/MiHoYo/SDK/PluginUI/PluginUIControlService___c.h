#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAD7A20)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD7A60)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__SHOWLOADINGPLUGINUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x1CAD7A70)
#define MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__SHOWLOADINGTOASTPLUGINUI_B__7_0_OFFSET UNITYSDK_OFFSET(0x1CAD7A80)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int PluginUIControlService___c_TypeDefinitionIndex = 21237;

	class PluginUIControlService___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::PluginUIControlService___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::PluginUIControlService___c**)Il2CppClass::FromTypeDefinitionIndex(PluginUIControlService___c_TypeDefinitionIndex)->GetStaticField(0xAF70);
		}
		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PluginUIControlService___c_TypeDefinitionIndex)->GetStaticField(0xAF78);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PluginUIControlService___c_TypeDefinitionIndex)->GetStaticField(0xAF80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowLoadingPluginUI_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__SHOWLOADINGPLUGINUI_B__6_0_OFFSET))(this);
		}

		::System::Void _ShowLoadingToastPluginUI_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_PLUGINUICONTROLSERVICE___C__SHOWLOADINGTOASTPLUGINUI_B__7_0_OFFSET))(this);
		}
	};
}
