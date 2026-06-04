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

#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_DELETEACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18441860)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTBYINDEX_OFFSET UNITYSDK_OFFSET(0x18441490)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x18440790)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLOGINTYPE_OFFSET UNITYSDK_OFFSET(0x18440630)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETCURRENTACCOUNT_OFFSET UNITYSDK_OFFSET(0x184411C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x18440710)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDROPDOWNACCOUNTLISTJSON_OFFSET UNITYSDK_OFFSET(0x18442350)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFALLBACKDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x18440750)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFORMATLASTLOGINTIME_OFFSET UNITYSDK_OFFSET(0x184424E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETINDEX_OFFSET UNITYSDK_OFFSET(0x18441D80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1843FCA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1843FC60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDEACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1843FD30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x1843FCC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18441420)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONDELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x184414E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONOPERATEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18441E80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONSELECTACCOUNT_OFFSET UNITYSDK_OFFSET(0x18441C00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1843FCB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1843FC70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1843FC50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOWACCOUNTLISTPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1843FEC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1843FE30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTMODEL_OFFSET UNITYSDK_OFFSET(0x18440DC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET UNITYSDK_OFFSET(0x184410C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEOPERATEBUTTON_OFFSET UNITYSDK_OFFSET(0x18441140)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATESHOWACCOUNT_OFFSET UNITYSDK_OFFSET(0x18441210)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18442B30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__ONOPERATEACCOUNT_B__45_0_OFFSET UNITYSDK_OFFSET(0x18442C30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_0_OFFSET UNITYSDK_OFFSET(0x18442B80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_1_OFFSET UNITYSDK_OFFSET(0x18442BA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_2_OFFSET UNITYSDK_OFFSET(0x18442BC0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int AccountListPluginUI_TypeDefinitionIndex = 8335;

	class AccountListPluginUI : public ::System::Object
	{
	public:
		// static const ::System::String* uiName; // 0x0
		::System::Action* _OnHide_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x18
		::System::Action_1<::System::String*>* _OnAccountSelected_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* accountList; // 0x28
		::System::Action* _OnLoginByAnotherAccountBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x38
		::System::Action_1<::System::String*>* _OnDeleteAccountBtnClicked_k__BackingField; // 0x40
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

		::System::Void set_OnLoginBtnClicked(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnDeleteAccountBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnDeleteAccountBtnClicked(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONDELETEACCOUNTBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnLoginByAnotherAccountBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginByAnotherAccountBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONLOGINBYANOTHERACCOUNTBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnHide()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONHIDE_OFFSET))(this);
		}

		::System::Void set_OnHide(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONHIDE_OFFSET))(this, a1);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnAccountSelected()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GET_ONACCOUNTSELECTED_OFFSET))(this);
		}

		::System::Void set_OnAccountSelected(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SET_ONACCOUNTSELECTED_OFFSET))(this, a1);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void HideAccountListPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_HIDEACCOUNTLISTPLUGINUI_OFFSET))(this);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOW_OFFSET))(this, a1);
		}

		::System::Void ShowAccountListPluginUI(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_SHOWACCOUNTLISTPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void UpdateAccountListModel(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTMODEL_OFFSET))(this, a1);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ISVISIBLE_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetCurrentAccount()
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETCURRENTACCOUNT_OFFSET))(this);
		}

		::MiHoYo::SDK::AccountModel* GetAccountByIndex(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::AccountModel*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTBYINDEX_OFFSET))(this, a1);
		}

		::System::String* GetAccountLoginType(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLOGINTYPE_OFFSET))(this, a1);
		}

		::System::String* GetDisplayName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::String* GetFallbackDisplayName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFALLBACKDISPLAYNAME_OFFSET))(this, a1);
		}

		::System::Void OnDeleteAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONDELETEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteAccountByIndex(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_DELETEACCOUNTBYINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelectAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONSELECTACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateShowAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATESHOWACCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 GetIndex(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETINDEX_OFFSET))(this, a1);
		}

		::System::Void OnOperateAccount(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_ONOPERATEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAccountListShowStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEACCOUNTLISTSHOWSTATUS_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel* GetDropDownAccountListJson(::System::Boolean a1)
		{
			return ((::MiHoYo::SDK::PluginUI::PluginUIBridgeNotifyMessageModel*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETDROPDOWNACCOUNTLISTJSON_OFFSET))(this, a1);
		}

		::System::Void UpdateOperateButton(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_UPDATEOPERATEBUTTON_OFFSET))(this, a1);
		}

		::System::String* GetFormatLastLoginTime(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETFORMATLASTLOGINTIME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONObject* GetAccountListJson()
		{
			return ((::MiHoYo::SDK::JSONObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI_GETACCOUNTLISTJSON_OFFSET))(this);
		}

		::System::Void _ShowAccountListPluginUI_b__32_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountListPluginUI_b__32_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountListPluginUI_b__32_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__SHOWACCOUNTLISTPLUGINUI_B__32_2_OFFSET))(this, a1, a2);
		}

		::System::Void _OnOperateAccount_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_ACCOUNTLISTPLUGINUI__ONOPERATEACCOUNT_B__45_0_OFFSET))(this);
		}
	};
}
