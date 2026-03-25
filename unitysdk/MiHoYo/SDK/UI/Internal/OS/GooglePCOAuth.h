#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x16014F00)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_BACK_OFFSET UNITYSDK_OFFSET(0x16016310)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CHANGEAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x16016070)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x160160D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CONTINUEAUTH_OFFSET UNITYSDK_OFFSET(0x16016550)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_FINISHAUTH_OFFSET UNITYSDK_OFFSET(0x16016440)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_HIDE_OFFSET UNITYSDK_OFFSET(0x16016000)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x16016270)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160165E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_REAUTH_OFFSET UNITYSDK_OFFSET(0x160164D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SETAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x16015BD0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SHOW_OFFSET UNITYSDK_OFFSET(0x16015E60)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SUBMIT_OFFSET UNITYSDK_OFFSET(0x160163B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x160157B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH__CLICKBACKBUTTON_B__33_0_OFFSET UNITYSDK_OFFSET(0x16016660)
#define MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH__CTOR_OFFSET UNITYSDK_OFFSET(0x16016620)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int GooglePCOAuth_TypeDefinitionIndex = 7380;

	class GooglePCOAuth : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::GooglePCOAuth**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_TypeDefinitionIndex)->GetStaticField(0x19310);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* CheckButtonPath; // 0x0
		// static const ::System::String* CheckButtonTextPath; // 0x0
		// static const ::System::String* ReAuthButtonPath; // 0x0
		// static const ::System::String* ReAuthButtonTextPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* questionButton; // 0x60
		::UnityEngine::UI::Button* submitButton; // 0x68
		::UnityEngine::UI::Button* checkButton; // 0x70
		::UnityEngine::UI::Button* reAuthButton; // 0x78
		::UnityEngine::UI::Text* titleText; // 0x80
		::UnityEngine::UI::Text* descText; // 0x88
		::UnityEngine::UI::Text* submitButtonText; // 0x90
		::UnityEngine::UI::Text* checkButtonText; // 0x98
		::UnityEngine::UI::Text* reAuthButtonText; // 0xA0
		::System::Action* OnBack; // 0xA8
		::System::Action* OnAuth; // 0xB0
		::System::Action* OnCheck; // 0xB8
		::System::Action* OnMeetProblem; // 0xC0
		::System::Action* OnReAuth; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_HIDE_OFFSET))();
		}

		static ::System::Void ChangeAuthStatus(::System::Boolean isFirst)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CHANGEAUTHSTATUS_OFFSET))(isFirst);
		}

		::System::Void SetAuthStatus(::System::Boolean isFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SETAUTHSTATUS_OFFSET))(this, isFirst);
		}

		::System::Void ClickBackButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CLICKBACKBUTTON_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_BACK_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_SUBMIT_OFFSET))(this);
		}

		::System::Void FinishAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_FINISHAUTH_OFFSET))(this);
		}

		::System::Void ReAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_REAUTH_OFFSET))(this);
		}

		::System::Void ContinueAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_CONTINUEAUTH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickBackButton_b__33_0(::MiHoYo::SDK::UI::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_GOOGLEPCOAUTH__CLICKBACKBUTTON_B__33_0_OFFSET))(this, result);
		}
	};
}
