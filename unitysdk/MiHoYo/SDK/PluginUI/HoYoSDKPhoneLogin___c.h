#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8563770)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x85637B0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x85637C0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPhoneLogin___c_TypeDefinitionIndex = 37435;

	class HoYoSDKPhoneLogin___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKPhoneLogin___c_TypeDefinitionIndex)->GetStaticField(0x144F0);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKPhoneLogin___c_TypeDefinitionIndex)->GetStaticField(0x144F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__4_1(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN___C__SHOW_B__4_1_OFFSET))(this, strText);
		}
	};
}
