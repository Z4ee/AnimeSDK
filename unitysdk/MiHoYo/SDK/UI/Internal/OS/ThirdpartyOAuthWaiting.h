#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/Internal/OS/OAuthType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB03140)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB01B60)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BB03C70)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWFAILEDSTAGE_OFFSET UNITYSDK_OFFSET(0x1BB02BC0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWTIMEOUTSTAGE_OFFSET UNITYSDK_OFFSET(0x1BB02650)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWWAITINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1BB01D90)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB01C40)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB03CA0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__33_0_OFFSET UNITYSDK_OFFSET(0x1BB03D60)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__33_1_OFFSET UNITYSDK_OFFSET(0x1BB03D80)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__32_0_OFFSET UNITYSDK_OFFSET(0x1BB03D20)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__32_1_OFFSET UNITYSDK_OFFSET(0x1BB03D40)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__31_0_OFFSET UNITYSDK_OFFSET(0x1BB03CE0)
#define MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__31_1_OFFSET UNITYSDK_OFFSET(0x1BB03D00)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting_TypeDefinitionIndex = 8396;

	class ThirdpartyOAuthWaiting : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::ThirdpartyOAuthWaiting**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyOAuthWaiting_TypeDefinitionIndex)->GetStaticField(0x29560);
		}
		static ::MiHoYo::SDK::UI::Internal::OS::OAuthType* StaticGet_AuthType()
		{
			return (::MiHoYo::SDK::UI::Internal::OS::OAuthType*)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyOAuthWaiting_TypeDefinitionIndex)->GetStaticField(0xC240);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* IconWarningPath; // 0x0
		// static const ::System::String* IconGooglePath; // 0x0
		// static const ::System::String* IconApplePath; // 0x0
		// static const ::System::String* IconFacebookPath; // 0x0
		// static const ::System::String* IconTwitterPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescPath; // 0x0
		// static const ::System::String* PrimaryButtonPath; // 0x0
		// static const ::System::String* PrimaryButtonTextPath; // 0x0
		// static const ::System::String* SecondaryBtnPath; // 0x0
		// static const ::System::String* SecondaryBtnTextPath; // 0x0
		::UnityEngine::GameObject* iconWarning; // 0x58
		::UnityEngine::GameObject* iconGoogle; // 0x60
		::UnityEngine::GameObject* iconApple; // 0x68
		::UnityEngine::GameObject* iconFacebook; // 0x70
		::UnityEngine::GameObject* iconTwitter; // 0x78
		::UnityEngine::UI::Text* titleText; // 0x80
		::UnityEngine::UI::Text* descText; // 0x88
		::UnityEngine::UI::Text* primaryButtonText; // 0x90
		::UnityEngine::UI::Button* primaryButton; // 0x98
		::UnityEngine::UI::Text* secondaryButtonText; // 0xA0
		::UnityEngine::UI::Button* secondaryButton; // 0xA8
		::System::Action* OnBack; // 0xB0
		::System::Action* OnRetry; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::UI::Internal::OS::OAuthType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UI::Internal::OS::OAuthType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_HIDE_OFFSET))();
		}

		::System::Void ShowWaitingStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWWAITINGSTAGE_OFFSET))(this);
		}

		::System::Void ShowTimeoutStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWTIMEOUTSTAGE_OFFSET))(this);
		}

		::System::Void ShowFailedStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING_SHOWFAILEDSTAGE_OFFSET))(this);
		}

		::System::Void _ShowWaitingStage_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__31_0_OFFSET))(this);
		}

		::System::Void _ShowWaitingStage_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__31_1_OFFSET))(this);
		}

		::System::Void _ShowTimeoutStage_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__32_0_OFFSET))(this);
		}

		::System::Void _ShowTimeoutStage_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__32_1_OFFSET))(this);
		}

		::System::Void _ShowFailedStage_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__33_0_OFFSET))(this);
		}

		::System::Void _ShowFailedStage_b__33_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__33_1_OFFSET))(this);
		}
	};
}
