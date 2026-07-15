#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AuthTicketThirdParty.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x17141150)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_CHECKACCOUNTLISTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x17143B60)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_CLOSE_OFFSET UNITYSDK_OFFSET(0x17143D40)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_DELETEACCOUNT_1_OFFSET UNITYSDK_OFFSET(0x171439D0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x17143610)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_HIDE_OFFSET UNITYSDK_OFFSET(0x17143460)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET UNITYSDK_OFFSET(0x17142330)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET UNITYSDK_OFFSET(0x17143D90)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x171430C0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x17142FF0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x17143D60)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x171434D0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17143DB0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x17142F20)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_SHOW_OFFSET UNITYSDK_OFFSET(0x17142B90)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_START_OFFSET UNITYSDK_OFFSET(0x17141F00)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATECURRENTACCOUNTICON_OFFSET UNITYSDK_OFFSET(0x17143330)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0x17142D60)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x171420E0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17143DD0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__ONDELETEBUTTONCLICKED_B__48_0_OFFSET UNITYSDK_OFFSET(0x17143E10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountList_TypeDefinitionIndex = 8973;

	class OverseaAccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountList** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountList**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountList_TypeDefinitionIndex)->GetStaticField(0x29270);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* DropDownPath; // 0x0
		// static const ::System::String* TitleEmailIcon; // 0x0
		// static const ::System::String* TitleUserNameIcon; // 0x0
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
		::System::Action* OnClose; // 0xB8
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnConfirm; // 0xC0
		::System::Action* OnLoginOtherAccount; // 0xC8
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccount; // 0xD0
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccountRecord; // 0xD8
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnSelectAccount; // 0xE0
		::System::Action* OnClickLastButton; // 0xE8
		::MiHoYo::SDK::AccountModel* currentAccount; // 0xF0
		::UnityEngine::UI::Image* currentAccountIcon; // 0xF8
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* currentAccountList; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_START_OFFSET))(this);
		}

		::System::Void LoadAccountInfoData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET))(this);
		}

		static ::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_SHOW_OFFSET))(a1);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnAccountSelected(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONACCOUNTSELECTED_OFFSET))(this, a1);
		}

		::System::Void UpdateCurrentAccountIcon(::System::Boolean a1, ::MiHoYo::SDK::AuthTicketThirdParty a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MiHoYo::SDK::AuthTicketThirdParty))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATECURRENTACCOUNTICON_OFFSET))(this, a1, a2);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_HIDE_OFFSET))();
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATETEXT_OFFSET))(this);
		}

		::System::Void OnDeleteButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void DeleteAccount(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_DELETEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void DeleteAccount_1(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_DELETEACCOUNT_1_OFFSET))(this, a1);
		}

		::System::Void UpdateDropdownTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET))(this);
		}

		::System::Void CheckAccountListDropdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_CHECKACCOUNTLISTDROPDOWN_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_CLOSE_OFFSET))(this);
		}

		::System::Void OnConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void LoginOtherAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnDeleteButtonClicked_b__48_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLIST__ONDELETEBUTTONCLICKED_B__48_0_OFFSET))(this, a1);
		}
	};
}
