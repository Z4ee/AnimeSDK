#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/BindingWelcome_DisplayStage.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_BINDINGWELCOME_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D3CAEE0)
#define MIHOYO_SDK_UI_BINDINGWELCOME_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3CC000)
#define MIHOYO_SDK_UI_BINDINGWELCOME_CANCELCREATENEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3CC070)
#define MIHOYO_SDK_UI_BINDINGWELCOME_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D3CC080)
#define MIHOYO_SDK_UI_BINDINGWELCOME_CONFIRMCREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3CC020)
#define MIHOYO_SDK_UI_BINDINGWELCOME_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D3CC060)
#define MIHOYO_SDK_UI_BINDINGWELCOME_HIDE_OFFSET UNITYSDK_OFFSET(0x1D3CC1D0)
#define MIHOYO_SDK_UI_BINDINGWELCOME_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1D3CBFD0)
#define MIHOYO_SDK_UI_BINDINGWELCOME_ONSKIPORCANCELBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1D3CC040)
#define MIHOYO_SDK_UI_BINDINGWELCOME_SHOWBINDMODESELECTION_OFFSET UNITYSDK_OFFSET(0x1D3CBAB0)
#define MIHOYO_SDK_UI_BINDINGWELCOME_SHOWNEWACCOUNTPROMPT_OFFSET UNITYSDK_OFFSET(0x1D3CBC50)
#define MIHOYO_SDK_UI_BINDINGWELCOME_SHOW_OFFSET UNITYSDK_OFFSET(0x1D3CC0A0)
#define MIHOYO_SDK_UI_BINDINGWELCOME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CC240)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int BindingWelcome_TypeDefinitionIndex = 20498;

	class BindingWelcome : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::BindingWelcome** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::BindingWelcome**)Il2CppClass::FromTypeDefinitionIndex(BindingWelcome_TypeDefinitionIndex)->GetStaticField(0xA980);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* contentPath; // 0x0
		// static const ::System::String* bindBtnPath; // 0x0
		// static const ::System::String* bindBtnTextPath; // 0x0
		// static const ::System::String* skipOrCancelBtnPath; // 0x0
		// static const ::System::String* skipOrCancelBtnTextPath; // 0x0
		// static const ::System::String* userPanelPath; // 0x0
		// static const ::System::String* userNicknamePath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0x58
		::UnityEngine::UI::Text* contentText; // 0x60
		::UnityEngine::UI::Text* bindBtnText; // 0x68
		::UnityEngine::UI::Text* skipOrCancelBtnText; // 0x70
		::UnityEngine::UI::Text* userNickname; // 0x78
		::UnityEngine::UI::Button* closeBtn; // 0x80
		::UnityEngine::UI::Button* bindBtn; // 0x88
		::UnityEngine::UI::Button* skipOrCancelBtn; // 0x90
		::UnityEngine::GameObject* userObj; // 0x98
		::MiHoYo::SDK::UI::BindingWelcome_DisplayStage displayStage; // 0xA0
		::System::Action* OnBindExistingAccount; // 0xA8
		::System::Action* OnConfirmCreateAndBindNewAccount; // 0xB0
		::System::Action* OnCloseBtnClicked; // 0xB8
		::System::Func_1<::System::String*>* GetUserNickName; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_AWAKE_OFFSET))(this);
		}

		::System::Void ShowBindModeSelection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_SHOWBINDMODESELECTION_OFFSET))(this);
		}

		::System::Void ShowNewAccountPrompt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_SHOWNEWACCOUNTPROMPT_OFFSET))(this);
		}

		::System::Void OnBindBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnSkipOrCancelBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_ONSKIPORCANCELBTNCLICKED_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void ConfirmCreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_CONFIRMCREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void CancelCreateNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_CANCELCREATENEWACCOUNT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_CLOSE_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_BINDINGWELCOME_HIDE_OFFSET))();
		}
	};
}
