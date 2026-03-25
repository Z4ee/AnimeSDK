#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/ProtocolType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_OVERSEAPROTOCOL_AWAKE_OFFSET UNITYSDK_OFFSET(0x15F4B850)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKACCEPTBUTTON_OFFSET UNITYSDK_OFFSET(0x15F4E0A0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKAGREEALLTOGGLE_OFFSET UNITYSDK_OFFSET(0x15F4E1E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKMARKETINGBUTTON_OFFSET UNITYSDK_OFFSET(0x15F4E680)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKMARKETINGTOGGLE_OFFSET UNITYSDK_OFFSET(0x15F4E520)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKPRIVACYTOGGLE_OFFSET UNITYSDK_OFFSET(0x15F4E500)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKREFUSEBUTTON_OFFSET UNITYSDK_OFFSET(0x15F4DF90)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x15F4E640)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREETOGGLE_OFFSET UNITYSDK_OFFSET(0x15F4E4E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x15F4E660)
#define MIHOYO_SDK_OVERSEAPROTOCOL_GET_MARKETINGTEXT_OFFSET UNITYSDK_OFFSET(0x15F4B630)
#define MIHOYO_SDK_OVERSEAPROTOCOL_GET_MARKETINGURL_OFFSET UNITYSDK_OFFSET(0x15F4B6B0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_HIDE_OFFSET UNITYSDK_OFFSET(0x15F4B7E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_ISSHOWMARKETINGPROTOCOL_OFFSET UNITYSDK_OFFSET(0x15F4DD60)
#define MIHOYO_SDK_OVERSEAPROTOCOL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15F4E6E0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_SET_MARKETINGTEXT_OFFSET UNITYSDK_OFFSET(0x15F4B5F0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_SET_MARKETINGURL_OFFSET UNITYSDK_OFFSET(0x15F4B670)
#define MIHOYO_SDK_OVERSEAPROTOCOL_SHOW_OFFSET UNITYSDK_OFFSET(0x15F4B6F0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEACCEPTBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x15F4DCF0)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATEAGREEALLTOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x15F4DE00)
#define MIHOYO_SDK_OVERSEAPROTOCOL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x15F4C580)
#define MIHOYO_SDK_OVERSEAPROTOCOL__CLICKREFUSEBUTTON_B__47_0_OFFSET UNITYSDK_OFFSET(0x15F4E760)
#define MIHOYO_SDK_OVERSEAPROTOCOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15F4E720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int OverseaProtocol_TypeDefinitionIndex = 7245;

	class OverseaProtocol : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::System::String** StaticGet__marketingURL_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OverseaProtocol_TypeDefinitionIndex)->GetStaticField(0x15690);
		}
		static ::System::String** StaticGet__marketingText_k__BackingField()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OverseaProtocol_TypeDefinitionIndex)->GetStaticField(0x15698);
		}
		static ::MiHoYo::SDK::OverseaProtocol** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::OverseaProtocol**)Il2CppClass::FromTypeDefinitionIndex(OverseaProtocol_TypeDefinitionIndex)->GetStaticField(0x156A0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* AgreeAllPath; // 0x0
		// static const ::System::String* UserAgreementPath; // 0x0
		// static const ::System::String* PrivacyPath; // 0x0
		// static const ::System::String* MarketingPath; // 0x0
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
		::UnityEngine::UI::Toggle* marketingToggle; // 0x70
		::UnityEngine::UI::Button* userAgreementButton; // 0x78
		::UnityEngine::UI::Button* privacyButton; // 0x80
		::UnityEngine::UI::Button* marketingButton; // 0x88
		::UnityEngine::UI::Button* refuseButton; // 0x90
		::UnityEngine::UI::Button* acceptButton; // 0x98
		::System::Action_1<::System::String*>* OnAccept; // 0xA0
		::System::Action* OnRefuse; // 0xA8
		::System::Action* OnUserAgreement; // 0xB0
		::System::Action* OnUserPrivacy; // 0xB8
		::System::Action_1<::System::String*>* OnMarketing; // 0xC0
		::System::String* marketingStatus; // 0xC8
		::MiHoYo::SDK::ProtocolType protocolType; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL__CTOR_OFFSET))(this);
		}

		static ::System::Void set_marketingText(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_SET_MARKETINGTEXT_OFFSET))(value);
		}

		static ::System::String* get_marketingText()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_GET_MARKETINGTEXT_OFFSET))();
		}

		static ::System::Void set_marketingURL(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_SET_MARKETINGURL_OFFSET))(value);
		}

		static ::System::String* get_marketingURL()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_GET_MARKETINGURL_OFFSET))();
		}

		static ::System::Void Show(::MiHoYo::SDK::ProtocolType type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_SHOW_OFFSET))(type);
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

		::System::Boolean IsShowMarketingProtocol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_ISSHOWMARKETINGPROTOCOL_OFFSET))(this);
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

		::System::Void ClickAgreeAllToggle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKAGREEALLTOGGLE_OFFSET))(this, value);
		}

		::System::Void ClickUserAgreeToggle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREETOGGLE_OFFSET))(this, value);
		}

		::System::Void ClickPrivacyToggle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKPRIVACYTOGGLE_OFFSET))(this, value);
		}

		::System::Void ClickMarketingToggle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKMARKETINGTOGGLE_OFFSET))(this, value);
		}

		::System::Void ClickUserAgreementButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserPrivacyButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
		}

		::System::Void ClickMarketingButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_CLICKMARKETINGBUTTON_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickRefuseButton_b__47_0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_OVERSEAPROTOCOL__CLICKREFUSEBUTTON_B__47_0_OFFSET))(this, result);
		}
	};
}
