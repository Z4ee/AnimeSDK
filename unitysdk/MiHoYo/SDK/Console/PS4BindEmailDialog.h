#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/Console/PS4BindEmailDialog_HighlightableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B7D52F0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1B918880)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHACODEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7D7A00)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B918180)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B7C9C50)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1B917640)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1B7D72E0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_MAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B7D7990)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1B918710)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x1B918520)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B7D7970)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B7D7360)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1B918200)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B9189D0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONRFEFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1B918620)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B7D7380)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B7C80C0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1B7C8C20)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x1B917A10)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B7C7CD0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B9176C0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1B7D75F0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B9183A0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATESKIPBTN_OFFSET UNITYSDK_OFFSET(0x1B9181D0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B7D7710)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B918C70)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindEmailDialog_TypeDefinitionIndex = 8956;

	class PS4BindEmailDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::PS4BindEmailDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::PS4BindEmailDialog**)Il2CppClass::FromTypeDefinitionIndex(PS4BindEmailDialog_TypeDefinitionIndex)->GetStaticField(0xD1E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_SECONDS = 0x3C; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* ManualBindTitleTextPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* CaptchaCountdownTextPath; // 0x0
		// static const ::System::String* CaptchaCountdownImagePath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* BindButtonOutlinePath; // 0x0
		// static const ::System::String* QRBindTitleTextPath; // 0x0
		// static const ::System::String* QRImagePath; // 0x0
		// static const ::System::String* QRLoadingPanelPath; // 0x0
		// static const ::System::String* QRExpiredPanelPath; // 0x0
		// static const ::System::String* QRRefreshTipsTextPath; // 0x0
		// static const ::System::String* ScanInstructionTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnTextPath; // 0x0
		// static const ::System::String* SendCaptchaBtnImagePath; // 0x0
		::UnityEngine::Color ENABLED_COLOR; // 0xC0
		::UnityEngine::Color DISABLED_COLOR; // 0xD0
		::System::Action* OnRefreshQRCodeClicked; // 0xE0
		::System::Action_1<::System::String*>* OnGetCaptchaClicked; // 0xE8
		::System::Action_2<::System::String*, ::System::String*>* OnBindButtonClicked; // 0xF0
		::System::Action* OnBindingSkip; // 0xF8
		::UnityEngine::GameObject* MailInputObj; // 0x100
		::UnityEngine::GameObject* CaptchaInputObj; // 0x108
		::UnityEngine::GameObject* CaptchaCountdownTextObj; // 0x110
		::UnityEngine::GameObject* CaptchaCountdownImageObj; // 0x118
		::UnityEngine::GameObject* BindButtonObj; // 0x120
		::UnityEngine::GameObject* BindButtonTextObj; // 0x128
		::UnityEngine::GameObject* BindButtonOutline; // 0x130
		::MiHoYo::SDK::Win::QRCode* QRCodeComponent; // 0x138
		::UnityEngine::GameObject* QRImageObj; // 0x140
		::UnityEngine::GameObject* QRLoadingPanelObj; // 0x148
		::UnityEngine::GameObject* QRExpiredPanelObj; // 0x150
		::UnityEngine::GameObject* SendCaptchaBtnImageObj; // 0x158
		::UnityEngine::GameObject* SendCaptchaBtnTextObj; // 0x160
		::System::Single ResendCaptchaCountdownSeconds; // 0x168
		::System::Boolean SendCaptchaBtnEnabled; // 0x16C
		::System::Boolean Interactable; // 0x16D
		::System::Boolean IsQRCodeExpired; // 0x16E
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x170
		::System::String* cachedEmail; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::MiHoYo::SDK::Console::PS4BindEmailDialog_HighlightableObject a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::PS4BindEmailDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONDESTROY_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_HIDE_OFFSET))();
		}

		::System::Void MailInputValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_MAILINPUTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void CaptchaCodeValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHACODEVALUECHANGED_OFFSET))(this, a1);
		}

		static ::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETINTERACTABLE_OFFSET))(a1);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETQRIMAGE_OFFSET))(a1);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(a1);
		}

		::System::Void UpdateSkipBtn(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATESKIPBTN_OFFSET))(this, a1);
		}

		::System::Void OnGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaResendCountdownEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, a1);
		}

		::System::Void OnRfefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONRFEFRESHQRIMAGE_OFFSET))(this);
		}

		::System::Void OnBindBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, a1);
		}
	};
}
