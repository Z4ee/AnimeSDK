#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET UNITYSDK_OFFSET(0x1BF127F0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF127A0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF127E0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager___c_TypeDefinitionIndex = 37255;

	class MiHoYoSDKUIManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager___c_TypeDefinitionIndex)->GetStaticField(0x28620);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager___c_TypeDefinitionIndex)->GetStaticField(0x28628);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bridge2Native_b__16_1(::System::String* strCallbackArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET))(this, strCallbackArgs);
		}
	};
}
