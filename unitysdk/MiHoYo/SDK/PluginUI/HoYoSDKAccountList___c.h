#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF11800)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF11840)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BF11850)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET UNITYSDK_OFFSET(0x1BF11880)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET UNITYSDK_OFFSET(0x1BF118B0)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountList___c_TypeDefinitionIndex = 37106;

	class HoYoSDKAccountList___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x28000);
		}
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountList___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountList___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x28008);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__6_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x28010);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__6_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountList___c_TypeDefinitionIndex)->GetStaticField(0x28018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__CTOR_OFFSET))(this);
		}

		::System::Void _DoShow_b__6_0(::System::String* strIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_0_OFFSET))(this, strIcon);
		}

		::System::Void _DoShow_b__6_1(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_1_OFFSET))(this, strText);
		}

		::System::Void _DoShow_b__6_2(::System::String* strType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLIST___C__DOSHOW_B__6_2_OFFSET))(this, strType);
		}
	};
}
