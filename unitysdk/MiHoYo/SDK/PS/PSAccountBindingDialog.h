#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PS/PSDialogBase.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ABFFB30)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1AC050E0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC043A0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1ABFFAC0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1ABE7620)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1ABE1CE0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1ABE59B0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1ABE41D0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC04330)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x1AC04E10)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1AC04F70)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x1AC04690)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1AC04280)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1AC03EB0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1AC04960)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONREFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1AC04190)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1AC042A0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET UNITYSDK_OFFSET(0x1ABFEF50)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1ABE47D0)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1ABE5A60)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x1ABFF350)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1ABE2020)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1ABE7150)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1AC03730)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1AC04510)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC03940)
#define MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC05140)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSAccountBindingDialog_TypeDefinitionIndex = 8870;

	class PSAccountBindingDialog : public ::MiHoYo::SDK::PS::PSDialogBase
	{
	public:
		static ::MiHoYo::SDK::PS::PSAccountBindingDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PS::PSAccountBindingDialog**)Il2CppClass::FromTypeDefinitionIndex(PSAccountBindingDialog_TypeDefinitionIndex)->GetStaticField(0x1F420);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_SECONDS = 0x3C; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* ManualBindTitleTextPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* PhoneInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* CaptchaCountdownTextPath; // 0x0
		// static const ::System::String* CaptchaCountdownImagePath; // 0x0
		// static const ::System::String* ViewUserAgreementTextPath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyTextPath; // 0x0
		// static const ::System::String* AgreementCheckboxPath; // 0x0
		// static const ::System::String* AgreementCheckboxTextPath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* BindButtonTipsPath; // 0x0
		// static const ::System::String* BindButtonTipsTextPath; // 0x0
		// static const ::System::String* BindButtonOutlinePath; // 0x0
		// static const ::System::String* QRBindTitleTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshTipsTextPath; // 0x0
		// static const ::System::String* QRStatusTipsTextPath; // 0x0
		// static const ::System::String* ScanInstructionTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnImagePath; // 0x0
		::UnityEngine::Color ENABLED_COLOR; // 0xB0
		::UnityEngine::Color DISABLED_COLOR; // 0xC0
		::System::Action* OnUserAgreementClicked; // 0xD0
		::System::Action* OnPrivacyPolicyClicked; // 0xD8
		::System::Action* OnRefreshQRCodeClicked; // 0xE0
		::System::Action_1<::System::String*>* OnGetCaptchaClicked; // 0xE8
		::System::Action_1<::System::String*>* OnBindButtonClicked; // 0xF0
		::System::Action* OnBindingCanceled; // 0xF8
		::UnityEngine::GameObject* MailInputObj; // 0x100
		::UnityEngine::GameObject* PhoneInputObj; // 0x108
		::UnityEngine::GameObject* CaptchaInputObj; // 0x110
		::UnityEngine::GameObject* CaptchaCountdownTextObj; // 0x118
		::UnityEngine::GameObject* CaptchaCountdownImageObj; // 0x120
		::UnityEngine::GameObject* AgreementCheckboxObj; // 0x128
		::UnityEngine::GameObject* BindButtonObj; // 0x130
		::UnityEngine::GameObject* BindButtonTipsObj; // 0x138
		::UnityEngine::GameObject* BindButtonOutline; // 0x140
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0x148
		::UnityEngine::GameObject* QRImageObj; // 0x150
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0x158
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0x160
		::UnityEngine::GameObject* QRStatusTipsTextObj; // 0x168
		::UnityEngine::GameObject* SendCaptchaBtnImageObj; // 0x170
		::UnityEngine::GameObject* SendCaptchaBtnTextObj; // 0x178
		::System::Single ResendCaptchaCountdownSeconds; // 0x180
		::System::Boolean SendCaptchaBtnEnabled; // 0x184
		::System::Boolean Interactable; // 0x185
		::System::Boolean IsQRCodeExpired; // 0x186
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET))(a1);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(a1);
		}

		static ::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void PhoneInputValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void MailInputValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void CaptchaCodeValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void OnGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaResendCountdownEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, a1);
		}

		::System::Void OnRefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONREFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void SetBottomButtonsEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET))(this, a1);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, a1);
		}

		::System::Void OnAgreementToggleClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET))(this, a1);
		}

		::System::Void OnBindBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET))(this);
		}
	};
}
