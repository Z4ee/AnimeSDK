#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PluginUI { class MiHoYoSDKUIContainer; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB28BCF0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER___C__DISPLAYCLASS19_0__DOLISTITEMACTION_B__0_OFFSET UNITYSDK_OFFSET(0xB28C9C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIContainer___c__DisplayClass19_0_TypeDefinitionIndex = 47341;

	class MiHoYoSDKUIContainer___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::System::String* strElementID; // 0x20
		::System::Int32 nItemIndex; // 0x28
		::System::Boolean bIsDeleteAction; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoListItemAction_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUICONTAINER___C__DISPLAYCLASS19_0__DOLISTITEMACTION_B__0_OFFSET))(this, a1);
		}
	};
}
