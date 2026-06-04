#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/ProtocolType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_OVERSEAPROTOCOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1837C900)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x1837E4C0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKAGREEALLTOGGLE_OFFSET UNITYSDK_OFFSET(0x1837E4E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKPRIVACYTOGGLE_OFFSET UNITYSDK_OFFSET(0x1837E5A0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x1837E380)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x1837E5C0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREETOGGLE_OFFSET UNITYSDK_OFFSET(0x1837E580)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x1837E5E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_HIDE_OFFSET UNITYSDK_OFFSET(0x1837C890)
#define MIHOYO_SDK_OVERSEAPROTOCOL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1837E600)
#define MIHOYO_SDK_OVERSEAPROTOCOL_SHOW_OFFSET UNITYSDK_OFFSET(0x1837C790)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEACCEPTBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1837E2A0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEAGREEALLTOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x1837E310)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1837D2A0)
#define MIHOYO_SDK_OVERSEAPROTOCOL__CLICKREFUSEBUTTON_B__33_0_OFFSET UNITYSDK_OFFSET(0x1837E660)
#define MIHOYO_SDK_OVERSEAPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1837E620)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int OverseaProtocol_TypeDefinitionIndex = 8191;

	class OverseaProtocol : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::OverseaProtocol** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::OverseaProtocol**)Il2CppClass::FromTypeDefinitionIndex(OverseaProtocol_TypeDefinitionIndex)->GetStaticField(0x16730);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* AgreeAllPath; // 0x0
		// static const ::System::String* UserAgreementPath; // 0x0
		// static const ::System::String* PrivacyPath; // 0x0
		// static const ::System::String* TogglePath; // 0x0
		// static const ::System::String* TextPath; // 0x0
		// static const ::System::String* ButtonPath; // 0x0
		// static const ::System::String* SubTextPath; // 0x0
		// static const ::System::String* RefuseBtnPath; // 0x0
		// static const ::System::String* AcceptBtnPath; // 0x0
		// static const ::System::String* TitlePath; // 0x0
		// static const ::System::String* ContentPath; // 0x0
		// static const ::System::String* RefuseBtnTextPath; // 0x0
		// static const ::System::String* AcceptBtnTextPath; // 0x0
		::UnityEngine::UI::Toggle* agreeAllToggle; // 0x58
		::UnityEngine::UI::Toggle* userAgreeToggle; // 0x60
		::UnityEngine::UI::Toggle* privacyToggle; // 0x68
		::UnityEngine::UI::Button* userAgreementButton; // 0x70
		::UnityEngine::UI::Button* privacyButton; // 0x78
		::UnityEngine::UI::Button* refuseButton; // 0x80
		::UnityEngine::UI::Button* acceptButton; // 0x88
		::System::Action* OnAccept; // 0x90
		::System::Action* OnRefuse; // 0x98
		::System::Action* OnUserAgreement; // 0xA0
		::System::Action* OnUserPrivacy; // 0xA8
		::MiHoYo::SDK::ProtocolType protocolType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::ProtocolType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void UpdateAcceptButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEACCEPTBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void UpdateAgreeAllToggleStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEAGREEALLTOGGLESTATUS_OFFSET))(this);
		}

		::System::Void ClickRefuseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKREFUSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickAcceptButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKACCEPTBUTTON_OFFSET))(this);
		}

		::System::Void ClickAgreeAllToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKAGREEALLTOGGLE_OFFSET))(this, a1);
		}

		::System::Void ClickUserAgreeToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREETOGGLE_OFFSET))(this, a1);
		}

		::System::Void ClickPrivacyToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKPRIVACYTOGGLE_OFFSET))(this, a1);
		}

		::System::Void ClickUserAgreementButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserPrivacyButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickRefuseButton_b__33_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL__CLICKREFUSEBUTTON_B__33_0_OFFSET))(this, a1);
		}
	};
}
