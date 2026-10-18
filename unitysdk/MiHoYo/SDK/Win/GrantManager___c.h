#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_GRANTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD238C0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD23900)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET UNITYSDK_OFFSET(0x1BD23910)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET UNITYSDK_OFFSET(0x1BD23AC0)
#define MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET UNITYSDK_OFFSET(0x1BD23D20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GrantManager___c_TypeDefinitionIndex = 9365;

	class GrantManager___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__24_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0x31780);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__20_4()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0x31788);
		}
		static ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>** StaticGet___9__22_1()
		{
			return (::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0x31790);
		}
		static ::MiHoYo::SDK::Win::GrantManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::GrantManager___c**)Il2CppClass::FromTypeDefinitionIndex(GrantManager___c_TypeDefinitionIndex)->GetStaticField(0x31798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantPhonePluginUI_b__20_4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWGRANTPHONEPLUGINUI_B__20_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantMailPluginUI_b__22_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTMAILPLUGINUI_B__22_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGrantPhonePluginUI_b__24_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GRANTMANAGER___C__SHOWOVERSEAGRANTPHONEPLUGINUI_B__24_1_OFFSET))(this, a1, a2);
		}
	};
}
