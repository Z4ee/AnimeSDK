#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1CD61EA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E80)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E40)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E20)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E60)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1CD62070)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CD62110)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1CD61EB0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E90)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E50)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E30)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CD61E70)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1CD61EC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_UPDATEACCOUNTLISTMODEL_OFFSET UNITYSDK_OFFSET(0x1CD620E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD62130)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_0_OFFSET UNITYSDK_OFFSET(0x1CD62140)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_1_OFFSET UNITYSDK_OFFSET(0x1CD62180)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_2_OFFSET UNITYSDK_OFFSET(0x1CD621C0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListDialog_TypeDefinitionIndex = 8383;

	class AccountListDialog : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnAccountSelected_k__BackingField; // 0x18
		::System::Action_1<::System::String*>* _OnDeleteAccountBtnClicked_k__BackingField; // 0x20
		::System::Action* _OnLoginByAnotherAccountBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnDeleteAccountBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnDeleteAccountBtnClicked(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnLoginByAnotherAccountBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginByAnotherAccountBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnAccountSelected()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONACCOUNTSELECTED_OFFSET))(this);
		}

		::System::Void set_OnAccountSelected(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONACCOUNTSELECTED_OFFSET))(this, a1);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SHOW_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void UpdateAccountListModel(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_UPDATEACCOUNTLISTMODEL_OFFSET))(this, a1);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_ISVISIBLE_OFFSET))(this);
		}

		::System::Void _Show_b__20_0(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_0_OFFSET))(this, a1);
		}

		::System::Void _Show_b__20_1(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_1_OFFSET))(this, a1);
		}

		::System::Void _Show_b__20_2(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_2_OFFSET))(this, a1);
		}
	};
}
