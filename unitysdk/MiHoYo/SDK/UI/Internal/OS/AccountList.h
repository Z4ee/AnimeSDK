#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
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

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B6B0840)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_CHECKACCOUNTLISTDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1B6B3BC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B6B3DA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_DELETEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6B3800)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_HIDE_OFFSET UNITYSDK_OFFSET(0x1B6B3650)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET UNITYSDK_OFFSET(0x1B6B1820)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B6B3DF0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET UNITYSDK_OFFSET(0x1B6B2E30)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x1B6B2D40)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6B3DC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1B6B36C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6B3E10)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1B6B2C70)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_SHOW_OFFSET UNITYSDK_OFFSET(0x1B6B2160)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_START_OFFSET UNITYSDK_OFFSET(0x1B6B13F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATEDISPLAYEDACCOUNTLIST_OFFSET UNITYSDK_OFFSET(0x1B6B2AC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET UNITYSDK_OFFSET(0x1B6B2330)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1B6B15D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B3E30)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__ONDELETEBUTTONCLICKED_B__50_0_OFFSET UNITYSDK_OFFSET(0x1B6B3E70)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountList_TypeDefinitionIndex = 8369;

	class AccountList : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountList** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountList**)Il2CppClass::FromTypeDefinitionIndex(AccountList_TypeDefinitionIndex)->GetStaticField(0x283F0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* DropDownPath; // 0x0
		// static const ::System::String* TitleEmailIcon; // 0x0
		// static const ::System::String* TitleUserNameIcon; // 0x0
		// static const ::System::String* TitleAppleIcon; // 0x0
		// static const ::System::String* TitleFacebookIcon; // 0x0
		// static const ::System::String* TitleGoogleIcon; // 0x0
		// static const ::System::String* TitleTwitterIcon; // 0x0
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
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnDeleteAccountBtnClicked; // 0xD0
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnSelectAccount; // 0xD8
		::System::Action* OnClickLastButton; // 0xE0
		::MiHoYo::SDK::AccountModel* currentAccount; // 0xE8
		::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* currentAccountList; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_START_OFFSET))(this);
		}

		::System::Void LoadAccountInfoData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_LOADACCOUNTINFODATA_OFFSET))(this);
		}

		static ::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_SHOW_OFFSET))(a1);
		}

		::System::Void UpdateDisplayedAccountList(::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATEDISPLAYEDACCOUNTLIST_OFFSET))(this, a1);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void OnAccountSelected(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONACCOUNTSELECTED_OFFSET))(this, a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_HIDE_OFFSET))();
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATETEXT_OFFSET))(this);
		}

		::System::Void OnDeleteButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONDELETEBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void DeleteAccount(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_DELETEACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDropdownTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_UPDATEDROPDOWNTITLE_OFFSET))(this);
		}

		::System::Void CheckAccountListDropdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_CHECKACCOUNTLISTDROPDOWN_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_CLOSE_OFFSET))(this);
		}

		::System::Void OnConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONCONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void LoginOtherAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_LOGINOTHERACCOUNT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnDeleteButtonClicked_b__50_0(::MiHoYo::SDK::UI::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLIST__ONDELETEBUTTONCLICKED_B__50_0_OFFSET))(this, a1);
		}
	};
}
