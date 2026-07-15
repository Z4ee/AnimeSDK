#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_AWAKE_OFFSET UNITYSDK_OFFSET(0x17144260)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_CANCEL_OFFSET UNITYSDK_OFFSET(0x171454D0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_CONFIRM_OFFSET UNITYSDK_OFFSET(0x17145480)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_HIDE_OFFSET UNITYSDK_OFFSET(0x171454F0)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_SHOW_OFFSET UNITYSDK_OFFSET(0x17145320)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x17144E00)
#define MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM__CTOR_OFFSET UNITYSDK_OFFSET(0x17145560)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaAccountListConfirm_TypeDefinitionIndex = 8971;

	class OverseaAccountListConfirm : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaAccountListConfirm** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaAccountListConfirm**)Il2CppClass::FromTypeDefinitionIndex(OverseaAccountListConfirm_TypeDefinitionIndex)->GetStaticField(0x2D010);
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_SHOW_OFFSET))();
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_CONFIRM_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_CANCEL_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAACCOUNTLISTCONFIRM_HIDE_OFFSET))();
		}
	};
}
