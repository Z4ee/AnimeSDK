#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BADF9E0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_CLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAE0970)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BAE0750)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BADF9C0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BADF9A0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BAE08C0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BAE0950)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BADF9D0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BADF9B0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BAE07C0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BAE0540)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BAE01A0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE0990)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDenyDialog_TypeDefinitionIndex = 8340;

	class AgeGateParentalConsentDenyDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDenyDialog**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDenyDialog_TypeDefinitionIndex)->GetStaticField(0x27000);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* contentTextPath; // 0x0
		// static const ::System::String* emailTextPath; // 0x0
		// static const ::System::String* hintTextPath; // 0x0
		// static const ::System::String* sendBtnPath; // 0x0
		// static const ::System::String* sendBtnTextPath; // 0x0
		::UnityEngine::UI::Button* closeBtn; // 0x58
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* content; // 0x68
		::UnityEngine::UI::Text* emailText; // 0x70
		::UnityEngine::UI::Button* sendBtn; // 0x78
		::UnityEngine::UI::Text* sendBtnText; // 0x80
		::UnityEngine::UI::Text* hint; // 0x88
		::System::Action* _OnSendBtnClicked_k__BackingField; // 0x90
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x98
		::System::String* email; // 0xA0
		::System::Single countDownTime; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnSendBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_GET_ONSENDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnSendBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SET_ONSENDBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_UPDATETEXT_OFFSET))(this);
		}

		::System::Void StartCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_COUNTDOWN_OFFSET))(this, a1);
		}

		static ::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_HIDE_OFFSET))();
		}

		::System::Void SendBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_SENDBTNCLICKED_OFFSET))(this);
		}

		::System::Void CloseBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDENYDIALOG_CLOSEBTNCLICKED_OFFSET))(this);
		}
	};
}
