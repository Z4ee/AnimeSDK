#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F9DEC0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__TRYGETELEMENTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x15F9E6C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService___c__DisplayClass5_0_TypeDefinitionIndex = 7759;

	class IPluginUIService___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* strElementID; // 0x10
		::MiHoYo::SDK::PluginUI::IPluginUIService* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryGetElementAction_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS5_0__TRYGETELEMENTACTION_B__0_OFFSET))(this, strArgs, callback);
		}
	};
}
