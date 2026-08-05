#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B54F0)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__MAKELISTITEMDEFAULTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x1D4B5500)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService___c__DisplayClass6_0_TypeDefinitionIndex = 21244;

	class IPluginUIService___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* strElementID; // 0x10
		::System::Boolean bIsDelete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _MakeListItemDefaultAction_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__MAKELISTITEMDEFAULTACTION_B__0_OFFSET))(this, strArgs, callback);
		}
	};
}
