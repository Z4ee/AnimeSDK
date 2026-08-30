#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BAF5FE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_CANCEL_OFFSET UNITYSDK_OFFSET(0x1BAF7380)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1BAF7330)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAF73A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAF70A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BAF6B80)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF7810)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountListConfirm_TypeDefinitionIndex = 8393;

	class AccountListConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::AccountListConfirm**)Il2CppClass::FromTypeDefinitionIndex(AccountListConfirm_TypeDefinitionIndex)->GetStaticField(0x28D50);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* deleteAccountTogglePath; // 0x0
		// static const ::System::String* deleteAccountHintTitlePath; // 0x0
		// static const ::System::String* deleteAccountHintContentPath; // 0x0
		// static const ::System::String* saveAccountTogglePath; // 0x0
		// static const ::System::String* saveAccountHintTitlePath; // 0x0
		// static const ::System::String* saveAccountHintContentPath; // 0x0
		// static const ::System::String* cancelButtonPath; // 0x0
		// static const ::System::String* cancelButtonTextPath; // 0x0
		// static const ::System::String* confirmButtonPath; // 0x0
		// static const ::System::String* confirmButtonTextPath; // 0x0
		::UnityEngine::UI::Text* title; // 0x58
		::UnityEngine::UI::Text* saveAccountHintTitle; // 0x60
		::UnityEngine::UI::Text* saveAccountHintContent; // 0x68
		::UnityEngine::UI::Text* deleteAccountHintTitle; // 0x70
		::UnityEngine::UI::Text* deleteAccountHintContent; // 0x78
		::UnityEngine::UI::Toggle* saveAccountToggle; // 0x80
		::UnityEngine::UI::Toggle* deleteAccountToggle; // 0x88
		::UnityEngine::UI::Button* cancelButton; // 0x90
		::UnityEngine::UI::Text* cancelButtonText; // 0x98
		::UnityEngine::UI::Button* confirmButton; // 0xA0
		::UnityEngine::UI::Text* confirmButtonText; // 0xA8
		::System::Action* OnCancel; // 0xB0
		::System::Action_1<::System::Boolean>* OnConfirm; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_SHOW_OFFSET))();
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_CONFIRM_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_CANCEL_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTLISTCONFIRM_HIDE_OFFSET))();
		}
	};
}
