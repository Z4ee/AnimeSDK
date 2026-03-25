#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x160140C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x160140A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014060)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014040)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014080)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x16014250)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x16014320)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x160140D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x160140B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014070)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014050)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x16014090)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x160140E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_UPDATEACCOUNTLISTMODEL_OFFSET UNITYSDK_OFFSET(0x160142C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x16014380)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_0_OFFSET UNITYSDK_OFFSET(0x16014390)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_1_OFFSET UNITYSDK_OFFSET(0x160143C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_2_OFFSET UNITYSDK_OFFSET(0x160143F0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListDialog_TypeDefinitionIndex = 7375;

	class AccountListDialog : public ::System::Object
	{
	public:
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x18
		::System::Action_1<::System::String*>* _OnDeleteAccountBtnClicked_k__BackingField; // 0x20
		::System::Action* _OnLoginByAnotherAccountBtnClicked_k__BackingField; // 0x28
		::System::Action_1<::System::String*>* _OnAccountSelected_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnDeleteAccountBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnDeleteAccountBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnLoginByAnotherAccountBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginByAnotherAccountBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnAccountSelected()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_GET_ONACCOUNTSELECTED_OFFSET))(this);
		}

		::System::Void set_OnAccountSelected(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SET_ONACCOUNTSELECTED_OFFSET))(this, value);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_SHOW_OFFSET))(this, list);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_HIDE_OFFSET))(this);
		}

		::System::Void UpdateAccountListModel(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_UPDATEACCOUNTLISTMODEL_OFFSET))(this, list);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG_ISVISIBLE_OFFSET))(this);
		}

		::System::Void _Show_b__20_0(::MiHoYo::SDK::AccountModel* selectedModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_0_OFFSET))(this, selectedModel);
		}

		::System::Void _Show_b__20_1(::MiHoYo::SDK::AccountModel* selectedModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_1_OFFSET))(this, selectedModel);
		}

		::System::Void _Show_b__20_2(::MiHoYo::SDK::AccountModel* selectedModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTDIALOG__SHOW_B__20_2_OFFSET))(this, selectedModel);
		}
	};
}
