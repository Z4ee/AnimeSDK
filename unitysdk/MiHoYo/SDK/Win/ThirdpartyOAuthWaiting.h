#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"
#include "unitysdk/MiHoYo/SDK/Win/OAuthType.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_AWAKE_OFFSET UNITYSDK_OFFSET(0x174D35F0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_HIDE_OFFSET UNITYSDK_OFFSET(0x174D4560)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x174D4430)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWFAILEDSTAGE_OFFSET UNITYSDK_OFFSET(0x174D4930)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWTIMEOUTSTAGE_OFFSET UNITYSDK_OFFSET(0x174D45D0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWWAITINGSTAGE_OFFSET UNITYSDK_OFFSET(0x174D3F20)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOW_OFFSET UNITYSDK_OFFSET(0x174D4470)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__CTOR_OFFSET UNITYSDK_OFFSET(0x174D4C90)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__29_0_OFFSET UNITYSDK_OFFSET(0x174D4D50)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__29_1_OFFSET UNITYSDK_OFFSET(0x174D4D70)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__28_0_OFFSET UNITYSDK_OFFSET(0x174D4D10)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__28_1_OFFSET UNITYSDK_OFFSET(0x174D4D30)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__27_0_OFFSET UNITYSDK_OFFSET(0x174D4CD0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__27_1_OFFSET UNITYSDK_OFFSET(0x174D4CF0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthWaiting_TypeDefinitionIndex = 8065;

	class ThirdpartyOAuthWaiting : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ThirdpartyOAuthWaiting**)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyOAuthWaiting_TypeDefinitionIndex)->GetStaticField(0x560);
		}
		static ::MiHoYo::SDK::Win::OAuthType* StaticGet_AuthType()
		{
			return (::MiHoYo::SDK::Win::OAuthType*)Il2CppClass::FromTypeDefinitionIndex(ThirdpartyOAuthWaiting_TypeDefinitionIndex)->GetStaticField(0x440);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* IconWarningPath; // 0x0
		// static const ::System::String* IconGooglePath; // 0x0
		// static const ::System::String* IconApplePath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescPath; // 0x0
		// static const ::System::String* PrimaryButtonPath; // 0x0
		// static const ::System::String* PrimaryButtonTextPath; // 0x0
		// static const ::System::String* SecondaryBtnPath; // 0x0
		// static const ::System::String* SecondaryBtnTextPath; // 0x0
		::UnityEngine::GameObject* iconWarning; // 0x58
		::UnityEngine::GameObject* iconGoogle; // 0x60
		::UnityEngine::GameObject* iconApple; // 0x68
		::UnityEngine::UI::Text* titleText; // 0x70
		::UnityEngine::UI::Text* descText; // 0x78
		::UnityEngine::UI::Text* primaryButtonText; // 0x80
		::UnityEngine::UI::Button* primaryButton; // 0x88
		::UnityEngine::UI::Text* secondaryButtonText; // 0x90
		::UnityEngine::UI::Button* secondaryButton; // 0x98
		::System::Action* OnBack; // 0xA0
		::System::Action* OnRetry; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::Win::OAuthType type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OAuthType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOW_OFFSET))(type);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_HIDE_OFFSET))();
		}

		::System::Void ShowWaitingStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWWAITINGSTAGE_OFFSET))(this);
		}

		::System::Void ShowTimeoutStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWTIMEOUTSTAGE_OFFSET))(this);
		}

		::System::Void ShowFailedStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING_SHOWFAILEDSTAGE_OFFSET))(this);
		}

		::System::Void _ShowWaitingStage_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__27_0_OFFSET))(this);
		}

		::System::Void _ShowWaitingStage_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWWAITINGSTAGE_B__27_1_OFFSET))(this);
		}

		::System::Void _ShowTimeoutStage_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__28_0_OFFSET))(this);
		}

		::System::Void _ShowTimeoutStage_b__28_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWTIMEOUTSTAGE_B__28_1_OFFSET))(this);
		}

		::System::Void _ShowFailedStage_b__29_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__29_0_OFFSET))(this);
		}

		::System::Void _ShowFailedStage_b__29_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHWAITING__SHOWFAILEDSTAGE_B__29_1_OFFSET))(this);
		}
	};
}
