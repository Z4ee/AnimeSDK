#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET UNITYSDK_OFFSET(0xB28ED00)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB28ECB0)
#define MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB28ECF0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int MiHoYoSDKUIManager___c_TypeDefinitionIndex = 47346;

	class MiHoYoSDKUIManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__16_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager___c_TypeDefinitionIndex)->GetStaticField(0x58F70);
		}
		static ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::MiHoYoSDKUIManager___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKUIManager___c_TypeDefinitionIndex)->GetStaticField(0x58F78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Bridge2Native_b__16_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_MIHOYOSDKUIMANAGER___C__BRIDGE2NATIVE_B__16_1_OFFSET))(this, a1);
		}
	};
}
