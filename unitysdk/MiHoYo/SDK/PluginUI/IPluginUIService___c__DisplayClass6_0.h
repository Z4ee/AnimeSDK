#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183D5220)
#define MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__MAKELISTITEMDEFAULTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x183D5430)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int IPluginUIService___c__DisplayClass6_0_TypeDefinitionIndex = 8810;

	class IPluginUIService___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* strElementID; // 0x10
		::System::Boolean bIsDelete; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _MakeListItemDefaultAction_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_IPLUGINUISERVICE___C__DISPLAYCLASS6_0__MAKELISTITEMDEFAULTACTION_B__0_OFFSET))(this, a1, a2);
		}
	};
}
