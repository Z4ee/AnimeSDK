#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UI/OS/ChannelProtocolDisplayType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_ACCEPT_OFFSET UNITYSDK_OFFSET(0x1B9CB7A0)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B9C9E50)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_CANCEL_OFFSET UNITYSDK_OFFSET(0x1B9CB780)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B9CB700)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B9CBD10)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x1B9CB760)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B9CB7C0)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B9CB8C0)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_VIEWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B9CB740)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_VIEWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B9CB720)
#define MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CBD80)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int ChannelProtocolDialog_TypeDefinitionIndex = 8349;

	class ChannelProtocolDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::ChannelProtocolDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::ChannelProtocolDialog**)Il2CppClass::FromTypeDefinitionIndex(ChannelProtocolDialog_TypeDefinitionIndex)->GetStaticField(0x20D40);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* contentPath; // 0x0
		// static const ::System::String* viewUserAgreementLabelTextPath; // 0x0
		// static const ::System::String* viewUserAgreementBtnPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolLabelTextPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolBtnPath; // 0x0
		// static const ::System::String* agreementCheckboxTextPath; // 0x0
		// static const ::System::String* agreementCheckboxPath; // 0x0
		// static const ::System::String* cancelBtnPath; // 0x0
		// static const ::System::String* cancelBtnTextPath; // 0x0
		// static const ::System::String* acceptBtnPath; // 0x0
		// static const ::System::String* acceptBtnTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0x58
		::UnityEngine::UI::Text* contentText; // 0x60
		::UnityEngine::UI::Text* viewUserAgreementLabelText; // 0x68
		::UnityEngine::UI::Text* viewPrivacyProtocolLabelText; // 0x70
		::UnityEngine::UI::Text* agreementCheckboxText; // 0x78
		::UnityEngine::UI::Text* cancelBtnText; // 0x80
		::UnityEngine::UI::Text* acceptBtnText; // 0x88
		::UnityEngine::UI::Button* closeBtn; // 0x90
		::UnityEngine::UI::Button* viewUserAgreementBtn; // 0x98
		::UnityEngine::UI::Button* viewPrivacyProtocolBtn; // 0xA0
		::UnityEngine::UI::Button* cancelBtn; // 0xA8
		::UnityEngine::UI::Button* acceptBtn; // 0xB0
		::UnityEngine::GameObject* agreementCheckboxObj; // 0xB8
		::System::Action* OnCloseBtnClicked; // 0xC0
		::System::Action* OnCancelBtnClicked; // 0xC8
		::System::Action* OnAcceptBtnClicked; // 0xD0
		::System::Action* OnViewUserAgreementBtnClicked; // 0xD8
		::System::Action* OnViewPrivacyProtocolBtnClicked; // 0xE0
		::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType channelProtocolDisplayType; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_CLOSE_OFFSET))(this);
		}

		::System::Void ViewUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_VIEWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ViewPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_VIEWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void OnAgreementCheckboxToggleClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET))(this, a1);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_CANCEL_OFFSET))(this);
		}

		::System::Void Accept()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_ACCEPT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::UI::OS::ChannelProtocolDisplayType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_SHOW_OFFSET))(a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_UPDATE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_CHANNELPROTOCOLDIALOG_HIDE_OFFSET))();
		}
	};
}
