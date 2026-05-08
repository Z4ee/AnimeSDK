#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class IPluginUIService; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C88450)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__MAKECLOSEDEFAULTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x19C88460)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService___c__DisplayClass7_0_TypeDefinitionIndex = 19735;

	class IPluginUIService___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PluginUI::IPluginUIService* __4__this; // 0x10
		::System::String* strElementID; // 0x18
		::System::String* strUIName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _MakeCloseDefaultAction_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS7_0__MAKECLOSEDEFAULTACTION_B__0_OFFSET))(this, strArgs, callback);
		}
	};
}
