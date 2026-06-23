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

#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BA755B0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA79140)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHACODEVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BA781D0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BA78CD0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BA780A0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1BA786B0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1BA772F0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_MAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1BA78130)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BA78FA0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET UNITYSDK_OFFSET(0x1BA78E70)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BA77F50)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA778C0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1BA77D60)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1BA79220)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONRFEFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1BA77EC0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA778E0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1BA78360)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1BA784B0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA77490)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BA77F70)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BA78850)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_START_OFFSET UNITYSDK_OFFSET(0x1BA77A90)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BA78D50)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATESKIPBTN_OFFSET UNITYSDK_OFFSET(0x1BA78D20)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA77BA0)
#define MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA79720)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int PS4BindEmailDialog_TypeDefinitionIndex = 20761;

	class PS4BindEmailDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::PS4BindEmailDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::PS4BindEmailDialog**)Il2CppClass::FromTypeDefinitionIndex(PS4BindEmailDialog_TypeDefinitionIndex)->GetStaticField(0x98F0);
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

		::System::Void SetHighlightedObject(::MiHoYo::SDK::Console::PS4BindEmailDialog_HighlightableObject obj)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::PS4BindEmailDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, obj);
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

		::System::Void MailInputValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_MAILINPUTVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void CaptchaCodeValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHACODEVALUECHANGED_OFFSET))(this, val);
		}

		static ::System::Void SetInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETINTERACTABLE_OFFSET))(interactable);
		}

		static ::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_LOADINGQRCODE_OFFSET))();
		}

		static ::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETQRIMAGE_OFFSET))(url);
		}

		static ::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_INVALIDATEQRCODE_OFFSET))();
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean start)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(start);
		}

		::System::Void UpdateSkipBtn(::System::Boolean canSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATESKIPBTN_OFFSET))(this, canSkip);
		}

		::System::Void OnGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaResendCountdownEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONCAPTCHARESENDCOUNTDOWNEND_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, enable);
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

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_PS4BINDEMAILDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}
	};
}
