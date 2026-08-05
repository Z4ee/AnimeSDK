#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/AccountListLogoutOption.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_GET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET UNITYSDK_OFFSET(0x1D3CCF10)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_GET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1D3CCEF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1D3CCFF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET UNITYSDK_OFFSET(0x1D3CCF20)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET UNITYSDK_OFFSET(0x1D3CCF00)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1D3CCF30)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CD060)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__SHOW_B__8_0_OFFSET UNITYSDK_OFFSET(0x1D3CD070)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__SHOW_B__8_1_OFFSET UNITYSDK_OFFSET(0x1D3CD0D0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListLogoutConfirmDialog_TypeDefinitionIndex = 20537;

	class AccountListLogoutConfirmDialog : public ::System::Object
	{
	public:
		::System::Action* _OnAccountListLogoutCancel_k__BackingField; // 0x10
		::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* _OnAccountListLogoutConfirm_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* get_OnAccountListLogoutConfirm()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_GET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET))(this);
		}

		::System::Void set_OnAccountListLogoutConfirm(::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::AccountListLogoutOption>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SET_ONACCOUNTLISTLOGOUTCONFIRM_OFFSET))(this, value);
		}

		::System::Action* get_OnAccountListLogoutCancel()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_GET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET))(this);
		}

		::System::Void set_OnAccountListLogoutCancel(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SET_ONACCOUNTLISTLOGOUTCANCEL_OFFSET))(this, value);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void _Show_b__8_0(::System::Boolean saveAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__SHOW_B__8_0_OFFSET))(this, saveAccount);
		}

		::System::Void _Show_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTLOGOUTCONFIRMDIALOG__SHOW_B__8_1_OFFSET))(this);
		}
	};
}
