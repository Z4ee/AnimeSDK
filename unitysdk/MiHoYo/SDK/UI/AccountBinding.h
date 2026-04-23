#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class BubbleTooltipHost; }
namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING_AWAKE_OFFSET UNITYSDK_OFFSET(0x176615E0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_BACK_OFFSET UNITYSDK_OFFSET(0x17664200)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_BINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x17664A90)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17664460)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x17660E80)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x17660C70)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLOSE_OFFSET UNITYSDK_OFFSET(0x17664220)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_HIDE_OFFSET UNITYSDK_OFFSET(0x176611C0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x176603D0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x176605E0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x17664930)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACODEINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x17664730)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACOUNTDOWNENDS_OFFSET UNITYSDK_OFFSET(0x176644C0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONMAILINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x176645B0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_REFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x17664C70)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_REQUESTCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x17664240)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x17660290)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SETSENDCAPTCHABUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x17660BE0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x17664B90)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x17664AF0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOW_OFFSET UNITYSDK_OFFSET(0x17660F90)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17660690)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_STOPCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17660990)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17664400)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x17664CD0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding_TypeDefinitionIndex = 7398;

	class AccountBinding : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::AccountBinding** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::AccountBinding**)Il2CppClass::FromTypeDefinitionIndex(AccountBinding_TypeDefinitionIndex)->GetStaticField(0x23C00);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_COUNTDOWN_SECONDS = 0x3C; // 0x0
		// static const ::System::String* backBtnPath; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* manualBindTitleTextPath; // 0x0
		// static const ::System::String* mailInputPath; // 0x0
		// static const ::System::String* mailInputClearAllBtnPath; // 0x0
		// static const ::System::String* codeInputPath; // 0x0
		// static const ::System::String* codeInputClearAllBtnPath; // 0x0
		// static const ::System::String* sendCaptchaBtnPath; // 0x0
		// static const ::System::String* sendCaptchaBtnTextPath; // 0x0
		// static const ::System::String* showUserAgreementObjPath; // 0x0
		// static const ::System::String* viewUserAgreementLabelTextPath; // 0x0
		// static const ::System::String* viewUserAgreementBtnPath; // 0x0
		// static const ::System::String* showPrivacyProtocolObjPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolLabelTextPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolBtnPath; // 0x0
		// static const ::System::String* agreementCheckboxPath; // 0x0
		// static const ::System::String* agreementCheckboxTextPath; // 0x0
		// static const ::System::String* bindBtnTipsPath; // 0x0
		// static const ::System::String* bindBtnPath; // 0x0
		// static const ::System::String* bindBtnTextPath; // 0x0
		// static const ::System::String* qrBindTitleTextPath; // 0x0
		// static const ::System::String* qrImagePath; // 0x0
		// static const ::System::String* qrLoadingPanelPath; // 0x0
		// static const ::System::String* qrExpiredPanelPath; // 0x0
		// static const ::System::String* qrRefreshBtnPath; // 0x0
		// static const ::System::String* qrStatusTipsTextPath; // 0x0
		// static const ::System::String* scanInstructionTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0x58
		::UnityEngine::UI::Text* descText; // 0x60
		::UnityEngine::UI::Text* manualBindTitleText; // 0x68
		::UnityEngine::UI::Text* sendCaptchaButtonText; // 0x70
		::UnityEngine::UI::Text* viewUserAgreementLabelText; // 0x78
		::UnityEngine::UI::Text* viewPrivacyProtocolLabelText; // 0x80
		::UnityEngine::UI::Text* agreementCheckboxText; // 0x88
		::UnityEngine::UI::Text* bindBtnText; // 0x90
		::UnityEngine::UI::Text* qrBindTitleText; // 0x98
		::UnityEngine::UI::Text* scanInstructionText; // 0xA0
		::UnityEngine::UI::Button* backBtn; // 0xA8
		::UnityEngine::UI::Button* closeBtn; // 0xB0
		::UnityEngine::UI::Button* mailInputClearAllBtn; // 0xB8
		::UnityEngine::UI::Button* captchaInputClearAllBtn; // 0xC0
		::UnityEngine::UI::Button* viewUserAgreementBtn; // 0xC8
		::UnityEngine::UI::Button* viewPrivacyProtocolBtn; // 0xD0
		::UnityEngine::UI::Button* sendCaptchaBtn; // 0xD8
		::UnityEngine::UI::Button* bindBtn; // 0xE0
		::UnityEngine::UI::Button* qrRefreshBtn; // 0xE8
		::MiHoYo::SDK::Win::BubbleTooltipHost* bubbleTooltipHost; // 0xF0
		::UnityEngine::GameObject* bindBtnTipsObj; // 0xF8
		::UnityEngine::GameObject* agreementCheckboxObj; // 0x100
		::UnityEngine::GameObject* showUserAgreementObj; // 0x108
		::UnityEngine::GameObject* showPrivacyProtocolObj; // 0x110
		::UnityEngine::UI::InputField* mailInput; // 0x118
		::UnityEngine::UI::InputField* captchaInput; // 0x120
		::UnityEngine::GameObject* qrImageObj; // 0x128
		::MiHoYo::SDK::Win::QRCode* qrCodeComponent; // 0x130
		::UnityEngine::GameObject* qrLoadingPanelObj; // 0x138
		::UnityEngine::GameObject* qrExpiredPanelObj; // 0x140
		::UnityEngine::GameObject* qrStatusTipsTextObj; // 0x148
		::System::Single resendCaptchaCountdownSeconds; // 0x150
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x158
		::System::String* gamertag; // 0x160
		::System::Boolean showAgreement; // 0x168
		::System::Action* OnBackBtnClicked; // 0x170
		::System::Action* OnCloseBtnClicked; // 0x178
		::System::Action_1<::System::String*>* OnGetCaptchaBtnClicked; // 0x180
		::System::Action* OnShowUserAgreementClicked; // 0x188
		::System::Action* OnShowPrivacyProtocolClicked; // 0x190
		::System::Action_1<::System::String*>* OnBindBtnClicked; // 0x198
		::System::Action* OnQRRefreshBtnClicked; // 0x1A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CTOR_OFFSET))(this);
		}

		::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SETQRIMAGE_OFFSET))(this, url);
		}

		::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_INVALIDATEQRCODE_OFFSET))(this);
		}

		::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_LOADINGQRCODE_OFFSET))(this);
		}

		::System::Void StartCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_STARTCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void StopCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_STOPCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARINPUTACCOUNT_OFFSET))(this);
		}

		::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARCAPTCHACODE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* gamertag, ::System::Boolean showAgreement)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOW_OFFSET))(gamertag, showAgreement);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_AWAKE_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLOSE_OFFSET))(this);
		}

		::System::Void RequestCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_REQUESTCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaCountdownEnds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACOUNTDOWNENDS_OFFSET))(this);
		}

		::System::Void OnMailInputFieldValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONMAILINPUTFIELDVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnCaptchaCodeInputFieldValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACODEINPUTFIELDVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnAgreementCheckboxToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void SetSendCaptchaButtonStatus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SETSENDCAPTCHABUTTONSTATUS_OFFSET))(this, enable);
		}

		::System::Void BindAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_BINDACCOUNT_OFFSET))(this);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void RefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_REFRESHQRIMAGE_OFFSET))(this);
		}
	};
}
