#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__DISPLAYCLASS16_0__BRIDGE2NATIVE_B__0_OFFSET UNITYSDK_OFFSET(0xA1F8310)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F7DE0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager___c__DisplayClass16_0_TypeDefinitionIndex = 44241;

	class MiHoYoSDKUIManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::System::String* strUIName; // 0x10
		::System::Int32 nActionIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _Bridge2Native_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__DISPLAYCLASS16_0__BRIDGE2NATIVE_B__0_OFFSET))(this, a1, a2);
		}
	};
}
