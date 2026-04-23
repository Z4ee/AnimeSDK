#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleAccountBindingDialog_HighlightableObject.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1742B070)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x17427360)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1742DBA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1742CC50)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x17426D90)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x17427220)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x17426E00)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x17425C10)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x17426200)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x17426000)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1742CBE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x1742D760)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1742DA30)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x1742D030)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1742CB40)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1742B550)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1742C780)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1742D2C0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONRFEFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1742CA60)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1742CB80)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET UNITYSDK_OFFSET(0x17425D10)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1742B960)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x17425CA0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x174260B0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x17426800)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x17425AE0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x174262F0)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1742BC10)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1742CF10)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1742BE00)
#define MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1742DC30)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleAccountBindingDialog_TypeDefinitionIndex = 7750;

	class ConsoleAccountBindingDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::ConsoleAccountBindingDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAccountBindingDialog_TypeDefinitionIndex)->GetStaticField(0x181F0);
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
		// static const ::System::String* ViewUserAgreementImagePath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyTextPath; // 0x0
		// static const ::System::String* ViewPrivacyPolicyImagePath; // 0x0
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
		// static const ::System::Int32 xcloud_button_width = 0x18; // 0x0
		::UnityEngine::Color ENABLED_COLOR; // 0xC0
		::UnityEngine::Color DISABLED_COLOR; // 0xD0
		::System::Action* OnUserAgreementClicked; // 0xE0
		::System::Action* OnPrivacyPolicyClicked; // 0xE8
		::System::Action* OnRefreshQRCodeClicked; // 0xF0
		::System::Action_1<::System::String*>* OnGetCaptchaClicked; // 0xF8
		::System::Action_1<::System::String*>* OnBindButtonClicked; // 0x100
		::System::Action* OnBindingCanceled; // 0x108
		::UnityEngine::GameObject* MailInputObj; // 0x110
		::UnityEngine::GameObject* PhoneInputObj; // 0x118
		::UnityEngine::GameObject* CaptchaInputObj; // 0x120
		::UnityEngine::GameObject* CaptchaCountdownTextObj; // 0x128
		::UnityEngine::GameObject* CaptchaCountdownImageObj; // 0x130
		::UnityEngine::GameObject* AgreementCheckboxObj; // 0x138
		::UnityEngine::GameObject* ProtocolImageObj; // 0x140
		::UnityEngine::GameObject* PrivacyImageObj; // 0x148
		::UnityEngine::GameObject* BindButtonObj; // 0x150
		::UnityEngine::GameObject* BindButtonTipsObj; // 0x158
		::UnityEngine::GameObject* BindButtonOutline; // 0x160
		::UnityEngine::GameObject* BindButtonTextObj; // 0x168
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0x170
		::UnityEngine::GameObject* QRImageObj; // 0x178
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0x180
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0x188
		::UnityEngine::GameObject* QRStatusTipsTextObj; // 0x190
		::UnityEngine::GameObject* SendCaptchaBtnImageObj; // 0x198
		::UnityEngine::GameObject* SendCaptchaBtnTextObj; // 0x1A0
		::System::Single ResendCaptchaCountdownSeconds; // 0x1A8
		::System::Boolean SendCaptchaBtnEnabled; // 0x1AC
		::System::Boolean Interactable; // 0x1AD
		::System::Boolean IsQRCodeExpired; // 0x1AE
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x1B0
		::MiHoYo::SDK::ReportType SDKReportType; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET))(url);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean start)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(start);
		}

		static ::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET))();
		}

		static ::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_HighlightableObject obj)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleAccountBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, obj);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void PhoneInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_PHONEINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void MailInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_MAILINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void CaptchaCodeValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHACODEVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaResendCountdownEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, enable);
		}

		::System::Void OnRfefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONRFEFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void SetBottomButtonsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET))(this, enable);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnAgreementToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONAGREEMENTTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void OnBindBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEACCOUNTBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}
	};
}
