#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2EA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A2EE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x1D3A2EF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x1D3A2F70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x1D3A2FF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x1D3A3070)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin___c_TypeDefinitionIndex = 37770;

	class HoYoSDKAccountLogin___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x29910);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_3()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x29918);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x29920);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x29928);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x29930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__4_0(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET))(this, strText);
		}

		::System::Void _Show_b__4_1(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET))(this, strText);
		}

		::System::Void _Show_b__4_2(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET))(this, strText);
		}

		::System::Void _Show_b__4_3(::System::String* strText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET))(this, strText);
		}
	};
}
