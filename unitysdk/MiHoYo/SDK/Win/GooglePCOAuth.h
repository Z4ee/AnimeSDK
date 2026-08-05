#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CAF3F10)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_BACK_OFFSET UNITYSDK_OFFSET(0x1CAF5670)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_CLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1CAF5260)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_CONTINUEAUTH_OFFSET UNITYSDK_OFFSET(0x1CAF59B0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_FINISHAUTH_OFFSET UNITYSDK_OFFSET(0x1CAF5850)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_HIDE_OFFSET UNITYSDK_OFFSET(0x1CAF51F0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x1CAF5430)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CAF5AB0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_REAUTH_OFFSET UNITYSDK_OFFSET(0x1CAF5900)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SETAUTHSTATUS_OFFSET UNITYSDK_OFFSET(0x1CAF4D90)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SHOW_OFFSET UNITYSDK_OFFSET(0x1CAF5050)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1CAF5790)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1CAF48F0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH__CLICKBACKBUTTON_B__30_0_OFFSET UNITYSDK_OFFSET(0x1CAF5AE0)
#define MIHOYO_SDK_WIN_GOOGLEPCOAUTH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF5AD0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GooglePCOAuth_TypeDefinitionIndex = 21584;

	class GooglePCOAuth : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GooglePCOAuth** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GooglePCOAuth**)Il2CppClass::FromTypeDefinitionIndex(GooglePCOAuth_TypeDefinitionIndex)->GetStaticField(0x9780);
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

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_HIDE_OFFSET))();
		}

		::System::Void SetAuthStatus(::System::Boolean isFirst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SETAUTHSTATUS_OFFSET))(this, isFirst);
		}

		::System::Void ClickBackButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_CLICKBACKBUTTON_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_BACK_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_SUBMIT_OFFSET))(this);
		}

		::System::Void FinishAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_FINISHAUTH_OFFSET))(this);
		}

		::System::Void ReAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_REAUTH_OFFSET))(this);
		}

		::System::Void ContinueAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_CONTINUEAUTH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickBackButton_b__30_0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GOOGLEPCOAUTH__CLICKBACKBUTTON_B__30_0_OFFSET))(this, result);
		}
	};
}
