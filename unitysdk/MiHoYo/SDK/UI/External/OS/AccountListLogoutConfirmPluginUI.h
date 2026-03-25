#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/AccountListLogoutOption.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_GET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET UNITYSDK_OFFSET(0x160095F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_GET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x160095D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x16009610)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET UNITYSDK_OFFSET(0x16009600)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x160095E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x16009710)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x16009970)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__SHOW_B__9_0_OFFSET UNITYSDK_OFFSET(0x16009980)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__SHOW_B__9_1_OFFSET UNITYSDK_OFFSET(0x160099B0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AccountListLogoutConfirmPluginUI_TypeDefinitionIndex = 7365;

	class AccountListLogoutConfirmPluginUI : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* _OnAccountListLogoutConfirm_k__BackingField; // 0x10
		::System::Action* _OnAccountListLogoutCancel_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* get_OnAccountListLogoutConfirm()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_GET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET))(this);
		}

		::System::Void set_OnAccountListLogoutConfirm(::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET))(this, value);
		}

		::System::Action* get_OnAccountListLogoutCancel()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_GET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET))(this);
		}

		::System::Void set_OnAccountListLogoutCancel(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET))(this, value);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI_SHOW_OFFSET))(this);
		}

		::System::Void _Show_b__9_0(::System::String* str, ::System::Action_1<::System::String*>* cancelCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__SHOW_B__9_0_OFFSET))(this, str, cancelCallback);
		}

		::System::Void _Show_b__9_1(::System::String* str, ::System::Action_1<::System::String*>* confirmCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMPLUGINUI__SHOW_B__9_1_OFFSET))(this, str, confirmCallback);
		}
	};
}
