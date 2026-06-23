#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GRANTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C97D460)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97D4A0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET UNITYSDK_OFFSET(0x1C97D4B0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET UNITYSDK_OFFSET(0x1C97D5F0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET UNITYSDK_OFFSET(0x1C97D7C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager___c_TypeDefinitionIndex = 21112;

	class GrantManager___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__24_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0xAD00);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__20_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0xAD08);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__22_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0xAD10);
		}
		static ::MiHoYo::SDK::Win::GrantManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GrantManager___c**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0xAD18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET))(this, strArgs, callback);
		}
	};
}
