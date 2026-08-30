#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA786B0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__MAKECLOSEDEFAULTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1BA78DC0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService___c__DisplayClass7_0_TypeDefinitionIndex = 9093;

	class IPluginUIService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* strElementID; // 0x10
		::System::String* strUIName; // 0x18
		::MiHoYo::SDK::PluginUI::IPluginUIService* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _MakeCloseDefaultAction_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__MAKECLOSEDEFAULTACTION_B__0_OFFSET))(this, a1, a2);
		}
	};
}
