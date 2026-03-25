#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x855ECA0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x855ECE0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0x855ECF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_1_OFFSET UNITYSDK_OFFSET(0x855ED60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_2_OFFSET UNITYSDK_OFFSET(0x855EDD0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKACCOUNTLOGIN___C__SHOW_B__4_3_OFFSET UNITYSDK_OFFSET(0x855EE40)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKAccountLogin___c_TypeDefinitionIndex = 37421;

	class HoYoSDKAccountLogin___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x14250);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x14258);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_3()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x14260);
		}
		static ::System::Action_1<::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x14268);
		}
		static ::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKAccountLogin___c**)Il2CppClass::FromTypeDefinitionIndex(HoYoSDKAccountLogin___c_TypeDefinitionIndex)->GetStaticField(0x14270);
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
