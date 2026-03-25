#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class AccountList_AccountListItemsInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_ACCOUNTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x16044370)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_CLOSE_OFFSET UNITYSDK_OFFSET(0x16046750)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x160463D0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_HIDE_OFFSET UNITYSDK_OFFSET(0x16046340)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET UNITYSDK_OFFSET(0x16045270)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET UNITYSDK_OFFSET(0x16046790)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x160460C0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTLISTOPERABILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x16045A70)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x16046070)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x16045F10)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x160460A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x16046770)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x160463B0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160467B0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONHIDEACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x16045A50)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x16046080)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONSHOWACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x16045A30)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_SHOW_OFFSET UNITYSDK_OFFSET(0x16045750)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_START_OFFSET UNITYSDK_OFFSET(0x16044FE0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEACCOUNTLISTOPERABILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x16045A80)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0x16045A10)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATESELECTEDACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x16045F20)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x16045180)
#define MIHOYO_SDK_WIN_ACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x160467F0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_TypeDefinitionIndex = 7899;

	class AccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::AccountList** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::AccountList**)Il2CppClass::FromTypeDefinitionIndex(AccountList_TypeDefinitionIndex)->GetStaticField(0x14190);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* DropDownPath; // 0x0
		// static const ::System::String* AccountIconPath; // 0x0
		// static const ::System::String* ShowTextPath; // 0x0
		// static const ::System::String* ExpandButtonImagePath; // 0x0
		// static const ::System::String* CollapseButtonImagePath; // 0x0
		// static const ::System::String* DeleteButtonPath; // 0x0
		// static const ::System::String* ExpandBackgroundPath; // 0x0
		// static const ::System::String* CollapseBackgroundPath; // 0x0
		// static const ::System::String* LoginButtonPath; // 0x0
		// static const ::System::String* LoginButtonTextPath; // 0x0
		// static const ::System::String* LoginOtherAccountButtonPath; // 0x0
		// static const ::System::String* LoginAccountButtonTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* enterGameButton; // 0x60
		::UnityEngine::UI::Text* enterGameButtonText; // 0x68
		::UnityEngine::UI::Button* loginOtherAccountButton; // 0x70
		::UnityEngine::UI::Text* loginOtherAccountButtonText; // 0x78
		::UnityEngine::UI::Dropdown* accountListDropdown; // 0x80
		::UnityEngine::UI::Text* showText; // 0x88
		::UnityEngine::UI::Image* expandButtonImage; // 0x90
		::UnityEngine::UI::Image* collapseButtonImage; // 0x98
		::UnityEngine::UI::Image* expandBackgroundImage; // 0xA0
		::UnityEngine::UI::Image* collapseBackgroundImage; // 0xA8
		::UnityEngine::UI::Button* deleteButton; // 0xB0
		::UnityEngine::GameObject* accountIcon; // 0xB8
		::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo* m_accountListItemsInfo; // 0xC0
		::System::String* m_strAccountType; // 0xC8
		::System::String* m_strAccountText; // 0xD0
		::System::String* m_strOperabilityStatus; // 0xD8
		::System::Action* OnCloseFullDelegate; // 0xE0
		::System::Action* OnLoginOtherAccountFullDelegate; // 0xE8
		::System::Action* OnConfirmFullDelegate; // 0xF0
		::System::Action_1<::System::Int32>* OnAccountSelectedFullDelegate; // 0xF8
		::System::Action_2<::System::Int32, ::System::Action_1<::System::Int32>*>* OnDeleteAccountListItemFullDelegate; // 0x100
		::System::Action* OnDeleteAccountFullDelegate; // 0x108
		::System::Action* OnNoticeExpandDropdownFullDelegate; // 0x110
		::System::Action* OnCollapseListFullDelegate; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_START_OFFSET))(this);
		}

		::System::Void LoadAccountInfoData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* strAccountType, ::System::String* strAccountText, ::System::String* strOperabilityStatus, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo* accountListItemsInfo)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_SHOW_OFFSET))(strAccountType, strAccountText, strOperabilityStatus, accountListItemsInfo);
		}

		::System::Void OnShowAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONSHOWACCOUNTLIST_OFFSET))(this);
		}

		::System::Void OnHideAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONHIDEACCOUNTLIST_OFFSET))(this);
		}

		::System::Void OnChangeAccountListOperabilityStatus(::System::String* strOperabilityStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTLISTOPERABILITYSTATUS_OFFSET))(this, strOperabilityStatus);
		}

		::System::Void OnChangeAccountType(::System::String* strAccountType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTYPE_OFFSET))(this, strAccountType);
		}

		::System::Void OnChangeAccountText(::System::String* strAccountText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTEXT_OFFSET))(this, strAccountText);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnAccountSelected(::System::Int32 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET))(this, pos);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_HIDE_OFFSET))();
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATETEXT_OFFSET))(this);
		}

		::System::Void OnDeleteButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void DeleteAccount(::System::String* key, ::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_DELETEACCOUNT_OFFSET))(this, key, gameObject);
		}

		::System::Void UpdateDropdownTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET))(this);
		}

		::System::Void UpdateAccountListOperabilityStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEACCOUNTLISTOPERABILITYSTATUS_OFFSET))(this);
		}

		::System::Void UpdateSelectedAccountInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATESELECTEDACCOUNTINFO_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_CLOSE_OFFSET))(this);
		}

		::System::Void OnConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void LoginOtherAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONDESTROY_OFFSET))(this);
		}
	};
}
