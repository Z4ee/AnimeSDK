#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK::PluginUI { class PluginUIBridgeNotifyMessageModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_DELETEACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CAEA8D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CAEA5A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x1CAE9600)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x1CAE94B0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAEA2D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1CAE9580)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDROPDOWNACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x1CAEB3A0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFALLBACKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1CAE95C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFORMATLASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x1CAEB640)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1CAEAE00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1CAE8A80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1CAE8A40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE89E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDEACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CAE8AE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x1CAE8AA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CAEA530)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAEA600)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONOPERATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAEAF00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONSELECTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAEAC90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1CAE8A90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1CAE8A50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE89F0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1CAE8A30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOWACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CAE8C50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1CAE8BE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTMODEL_OFFSET UNITYSDK_OFFSET(0x1CAE9EC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x1CAEA1D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEOPERATEBUTTON_OFFSET UNITYSDK_OFFSET(0x1CAEA250)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATESHOWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CAEA330)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAEBB60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__ONOPERATEACCOUNT_B__45_0_OFFSET UNITYSDK_OFFSET(0x1CAEBCB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_0_OFFSET UNITYSDK_OFFSET(0x1CAEBBE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_1_OFFSET UNITYSDK_OFFSET(0x1CAEBBF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_2_OFFSET UNITYSDK_OFFSET(0x1CAEBC00)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AccountListPluginUI_TypeDefinitionIndex = 20520;

	class AccountListPluginUI : public ::System::Object
	{
	public:
		// static const ::System::String* uiName; // 0x0
		::System::Action_1<::System::String*>* _OnDeleteAccountBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x18
		::System::Action_1<::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountList; // 0x28
		::System::Action* _OnLoginByAnotherAccountBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnHide_k__BackingField; // 0x38
		::System::Action_1<::System::String*>* _OnAccountSelected_k__BackingField; // 0x40
		::System::Int32 currentSelectedIndex; // 0x48
		::System::Boolean foldNow; // 0x4C
		::System::Boolean singleAccount; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnDeleteAccountBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnDeleteAccountBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnLoginByAnotherAccountBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginByAnotherAccountBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnHide()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONHIDE_OFFSET))(this);
		}

		::System::Void set_OnHide(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONHIDE_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnAccountSelected()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONACCOUNTSELECTED_OFFSET))(this);
		}

		::System::Void set_OnAccountSelected(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONACCOUNTSELECTED_OFFSET))(this, value);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void HideAccountListPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDEACCOUNTLISTPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountModels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOW_OFFSET))(this, accountModels);
		}

		::System::Void ShowAccountListPluginUI(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountModels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOWACCOUNTLISTPLUGINUI_OFFSET))(this, accountModels);
		}

		::System::Void UpdateAccountListModel(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountModels)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTMODEL_OFFSET))(this, accountModels);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ISVISIBLE_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetCurrentAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETCURRENTACCOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetAccountByIndex(::System::Int32 index)
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTBYINDEX_OFFSET))(this, index);
		}

		::System::String* GetAccountLoginType(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLOGINTYPE_OFFSET))(this, model);
		}

		::System::String* GetDisplayName(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDISPLAYNAME_OFFSET))(this, account);
		}

		::System::String* GetFallbackDisplayName(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFALLBACKDISPLAYNAME_OFFSET))(this, account);
		}

		::System::Void OnDeleteAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONDELETEACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Void DeleteAccountByIndex(::System::Int32 index, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_DELETEACCOUNTBYINDEX_OFFSET))(this, index, callback);
		}

		::System::Void OnSelectAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONSELECTACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Void UpdateShowAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATESHOWACCOUNT_OFFSET))(this, account);
		}

		::System::Int32 GetIndex(::System::String* input)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETINDEX_OFFSET))(this, input);
		}

		::System::Void OnOperateAccount(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONOPERATEACCOUNT_OFFSET))(this, strArgs, callback);
		}

		::System::Void UpdateAccountListShowStatus(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET))(this, isShow);
		}

		::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* GetDropDownAccountListJson(::System::Boolean isShow)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDROPDOWNACCOUNTLISTJSON_OFFSET))(this, isShow);
		}

		::System::Void UpdateOperateButton(::System::String* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEOPERATEBUTTON_OFFSET))(this, type);
		}

		::System::String* GetFormatLastLoginTime(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFORMATLASTLOGINTIME_OFFSET))(this, account);
		}

		::MiHoYo::SDK::JSONObject* GetAccountListJson()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLISTJSON_OFFSET))(this);
		}

		::System::Void _ShowAccountListPluginUI_b__32_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountListPluginUI_b__32_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountListPluginUI_b__32_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _OnOperateAccount_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__ONOPERATEACCOUNT_B__45_0_OFFSET))(this);
		}
	};
}
