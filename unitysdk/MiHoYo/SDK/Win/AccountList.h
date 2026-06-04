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

#define MIHOYO_SDK_WIN_ACCOUNTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x18467870)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_CLOSE_OFFSET UNITYSDK_OFFSET(0x18469E70)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18469A90)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_HIDE_OFFSET UNITYSDK_OFFSET(0x18469A00)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET UNITYSDK_OFFSET(0x18468800)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET UNITYSDK_OFFSET(0x18469EB0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x18469760)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTLISTOPERABILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x18469100)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x18469710)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x184695A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x18469740)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x18469E90)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x18469A70)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18469ED0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONHIDEACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x184690E0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x18469720)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_ONSHOWACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x184690C0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_SHOW_OFFSET UNITYSDK_OFFSET(0x18468DB0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_START_OFFSET UNITYSDK_OFFSET(0x184684C0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEACCOUNTLISTOPERABILITYSTATUS_OFFSET UNITYSDK_OFFSET(0x18469110)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0x184690A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATESELECTEDACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x184695B0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x184686A0)
#define MIHOYO_SDK_WIN_ACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18469EF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AccountList_TypeDefinitionIndex = 8948;

	class AccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::AccountList** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::AccountList**)Il2CppClass::FromTypeDefinitionIndex(AccountList_TypeDefinitionIndex)->GetStaticField(0x11810);
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

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::Win::AccountList_AccountListItemsInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_SHOW_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnShowAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONSHOWACCOUNTLIST_OFFSET))(this);
		}

		::System::Void OnHideAccountList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONHIDEACCOUNTLIST_OFFSET))(this);
		}

		::System::Void OnChangeAccountListOperabilityStatus(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTLISTOPERABILITYSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnChangeAccountType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTYPE_OFFSET))(this, a1);
		}

		::System::Void OnChangeAccountText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCHANGEACCOUNTTEXT_OFFSET))(this, a1);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnAccountSelected(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET))(this, a1);
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

		::System::Void DeleteAccount(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_ACCOUNTLIST_DELETEACCOUNT_OFFSET))(this, a1, a2);
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
