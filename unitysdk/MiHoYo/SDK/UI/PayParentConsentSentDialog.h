#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB04910)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BB056C0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BB05620)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLIKED_OFFSET UNITYSDK_OFFSET(0x1BB048D0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1BB048F0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB017A0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SENDEMAILPRESSED_OFFSET UNITYSDK_OFFSET(0x1BB05690)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLIKED_OFFSET UNITYSDK_OFFSET(0x1BB048E0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1BB04900)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB01620)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BB01850)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BB051C0)
#define MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB056E0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int PayParentConsentSentDialog_TypeDefinitionIndex = 8337;

	class PayParentConsentSentDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::PayParentConsentSentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::PayParentConsentSentDialog**)Il2CppClass::FromTypeDefinitionIndex(PayParentConsentSentDialog_TypeDefinitionIndex)->GetStaticField(0x29520);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* subtitleTextPath; // 0x0
		// static const ::System::String* emailTitleTextPath; // 0x0
		// static const ::System::String* emailTextPath; // 0x0
		// static const ::System::String* resenBtnPath; // 0x0
		// static const ::System::String* resenBtnTextPath; // 0x0
		// static const ::System::String* hintTextPath; // 0x0
		::UnityEngine::UI::Button* closeBtn; // 0x58
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* subTitle; // 0x68
		::UnityEngine::UI::Text* emailTitle; // 0x70
		::UnityEngine::UI::Text* emailText; // 0x78
		::UnityEngine::UI::Button* sendBtn; // 0x80
		::UnityEngine::UI::Text* sendBtnText; // 0x88
		::UnityEngine::UI::Text* hintText; // 0x90
		::System::Action* _onCloseBtnCliked_k__BackingField; // 0x98
		::System::Action_1<::System::String*>* _OnSendBtnCliekd_k__BackingField; // 0xA0
		::System::String* emailTextStr; // 0xA8
		::System::Single countDownTime; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_onCloseBtnCliked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_GET_ONCLOSEBTNCLIKED_OFFSET))(this);
		}

		::System::Void set_onCloseBtnCliked(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SET_ONCLOSEBTNCLIKED_OFFSET))(this, a1);
		}

		::System::Action_1<::System::String*>* get_OnSendBtnCliekd()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_GET_ONSENDBTNCLIEKD_OFFSET))(this);
		}

		::System::Void set_OnSendBtnCliekd(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SET_ONSENDBTNCLIEKD_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void StartCountDown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void SendEmailPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_SENDEMAILPRESSED_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_PAYPARENTCONSENTSENTDIALOG_CLOSE_OFFSET))(this);
		}
	};
}
