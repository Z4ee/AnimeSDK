#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB016720)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB016760)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0xB016770)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0xB0167A0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET UNITYSDK_OFFSET(0xB0167D0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList___c_TypeDefinitionIndex = 46738;

	class HoYoSDKAccountList___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x30210);
		}
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountList___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x30218);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__6_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x30220);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x30228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoShow_b__6_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _DoShow_b__6_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET))(this, a1);
		}

		::System::Void _DoShow_b__6_2(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET))(this, a1);
		}
	};
}
