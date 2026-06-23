#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldEmailBindingDialog_HighlightableObject.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ADDBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1B334410)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET UNITYSDK_OFFSET(0x1B3334F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B331810)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CANCELDIALOG_OFFSET UNITYSDK_OFFSET(0x1B333FB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B330650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1B331430)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3308A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1B334720)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_GETOBJECTBYPATH_OFFSET UNITYSDK_OFFSET(0x1B331C90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_HASDEFAULTBOTTOMBUTTONS_OFFSET UNITYSDK_OFFSET(0x1B331930)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B32FAA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1B333040)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZETEXT_OFFSET UNITYSDK_OFFSET(0x1B332420)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZEVIEWS_OFFSET UNITYSDK_OFFSET(0x1B331E70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ISMAILINPUTVALID_OFFSET UNITYSDK_OFFSET(0x1B330710)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONAGREEMENTTOGGLECHANGED_OFFSET UNITYSDK_OFFSET(0x1B334C30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONBINDBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1B334800)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONCAPTCHAVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B334C20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B334170)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B333630)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B335220)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONMAILINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1B334BE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_REFRESHBINDBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1B330EB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_RESIZELAYOUTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B335440)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET UNITYSDK_OFFSET(0x1B32FCE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETGRAPHICCOLOR_OFFSET UNITYSDK_OFFSET(0x1B334E30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3341D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B32FB30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET UNITYSDK_OFFSET(0x1B330470)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1B334240)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B32F970)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B32FDC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYGETCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1B333FF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1B3317F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1B3306A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_UPDATECAPTCHACOUNTDOWNTEXT_OFFSET UNITYSDK_OFFSET(0x1B334C40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B333660)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B335860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B335850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_0_OFFSET UNITYSDK_OFFSET(0x1B335880)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_1_OFFSET UNITYSDK_OFFSET(0x1B3358A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_2_OFFSET UNITYSDK_OFFSET(0x1B3358C0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldEmailBindingDialog_TypeDefinitionIndex = 20553;

	class HandheldEmailBindingDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldEmailBindingDialog_TypeDefinitionIndex)->GetStaticField(0x90C0);
		}
		static ::UnityEngine::Color* StaticGet_DisabledColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HandheldEmailBindingDialog_TypeDefinitionIndex)->GetStaticField(0x4530);
		}
		static ::UnityEngine::Color* StaticGet_EnabledColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(HandheldEmailBindingDialog_TypeDefinitionIndex)->GetStaticField(0x4540);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_SECONDS = 0x3C; // 0x0
		// static const ::System::Int32 XCLOUD_BUTTON_WIDTH = 0x18; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescTextPath; // 0x0
		// static const ::System::String* SubtitleTextPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* CodeInputPath; // 0x0
		// static const ::System::String* CaptchaCountdownPath; // 0x0
		// static const ::System::String* CaptchaCountdownTextPath; // 0x0
		// static const ::System::String* CaptchaCountdownSplitPath; // 0x0
		// static const ::System::String* CaptchaSendButtonPath; // 0x0
		// static const ::System::String* UserAgreementPath; // 0x0
		// static const ::System::String* UserAgreementImagePath; // 0x0
		// static const ::System::String* UserAgreementTextPath; // 0x0
		// static const ::System::String* PrivacyProtocolPath; // 0x0
		// static const ::System::String* PrivacyProtocolImagePath; // 0x0
		// static const ::System::String* PrivacyProtocolTextPath; // 0x0
		// static const ::System::String* AgreeAllPath; // 0x0
		// static const ::System::String* AgreeAllBackgroundPath; // 0x0
		// static const ::System::String* AgreeAllLabelPath; // 0x0
		// static const ::System::String* BindButtonPath; // 0x0
		// static const ::System::String* BindButtonTextPath; // 0x0
		// static const ::System::String* LeftQRBindingButtonPath; // 0x0
		// static const ::System::String* LeftQRBindingButtonTextPath; // 0x0
		// static const ::System::String* LeftQRBindingButtonImagePath; // 0x0
		// static const ::System::String* LeftSendCaptchaButtonPath; // 0x0
		// static const ::System::String* LeftSendCaptchaButtonTextPath; // 0x0
		// static const ::System::String* LeftSendCaptchaButtonImagePath; // 0x0
		// static const ::System::String* RightBackButtonPath; // 0x0
		// static const ::System::String* RightBackButtonTextPath; // 0x0
		// static const ::System::String* RightBackButtonImagePath; // 0x0
		// static const ::System::String* RightAcceptButtonPath; // 0x0
		// static const ::System::String* RightAcceptButtonTextPath; // 0x0
		// static const ::System::String* RightAcceptButtonImagePath; // 0x0
		::System::Action* OnUserAgreementClicked; // 0xC0
		::System::Action* OnPrivacyPolicyClicked; // 0xC8
		::System::Action* OnSwitchToQRCodeClicked; // 0xD0
		::System::Action_1<::System::String*>* OnGetCaptchaClicked; // 0xD8
		::System::Action_1<::System::String*>* OnBindButtonClicked; // 0xE0
		::System::Action* OnBindingCanceled; // 0xE8
		::UnityEngine::UI::InputField* mailInputField; // 0xF0
		::UnityEngine::UI::InputField* captchaInputField; // 0xF8
		::UnityEngine::UI::Toggle* agreeAllToggle; // 0x100
		::UnityEngine::GameObject* mailInputObject; // 0x108
		::UnityEngine::GameObject* captchaInputObject; // 0x110
		::UnityEngine::GameObject* agreeAllObject; // 0x118
		::UnityEngine::GameObject* bindButtonObject; // 0x120
		::UnityEngine::GameObject* bindButtonTextObject; // 0x128
		::UnityEngine::GameObject* captchaCountdownObject; // 0x130
		::UnityEngine::GameObject* captchaCountdownTextObject; // 0x138
		::UnityEngine::GameObject* captchaCountdownSplitObject; // 0x140
		::UnityEngine::GameObject* leftSendCaptchaButtonObject; // 0x148
		::UnityEngine::GameObject* leftSendCaptchaButtonTextObject; // 0x150
		::UnityEngine::GameObject* leftSendCaptchaButtonImageObject; // 0x158
		::UnityEngine::GameObject* leftQRBindingButtonObject; // 0x160
		::UnityEngine::GameObject* leftQRBindingButtonImageObject; // 0x168
		::UnityEngine::GameObject* leftQRBindingButtonTextObject; // 0x170
		::UnityEngine::GameObject* rightBackButtonObject; // 0x178
		::UnityEngine::GameObject* rightBackButtonImageObject; // 0x180
		::UnityEngine::GameObject* rightAcceptButtonObject; // 0x188
		::UnityEngine::GameObject* rightAcceptButtonImageObject; // 0x190
		::UnityEngine::GameObject* highlightedObject; // 0x198
		::System::Boolean sendCaptchaButtonEnabled; // 0x1A0
		::System::Boolean interactable; // 0x1A1
		::System::Single resendCaptchaCountdownSeconds; // 0x1A4
		::UnityEngine::Coroutine* captchaCountdownCoroutine; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__CCTOR_OFFSET))();
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_HIDE_OFFSET))();
		}

		static ::System::Void SetInteractable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETINTERACTABLE_OFFSET))(value);
		}

		static ::System::Void StartCaptchaCountdown(::System::Boolean start)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(start);
		}

		static ::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET))();
		}

		static ::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetHighlightedObject(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog_HighlightableObject target)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETHIGHLIGHTEDOBJECT_OFFSET))(this, target);
		}

		::System::Void TrySetHighlightedObject(::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog_HighlightableObject target)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldEmailBindingDialog_HighlightableObject))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_OFFSET))(this, target);
		}

		::System::Void TrySetHighlightedObject_1(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYSETHIGHLIGHTEDOBJECT_1_OFFSET))(this, obj);
		}

		::System::Void InitializeViews()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZEVIEWS_OFFSET))(this);
		}

		::System::Void InitializeText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZETEXT_OFFSET))(this);
		}

		::System::Void InitializeCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_INITIALIZECALLBACKS_OFFSET))(this);
		}

		::System::Void ConfirmDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CONFIRMDIALOG_OFFSET))(this);
		}

		::System::Void CancelDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CANCELDIALOG_OFFSET))(this);
		}

		::System::Void OnMailInputValueChanged(::System::String* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONMAILINPUTVALUECHANGED_OFFSET))(this, _);
		}

		::System::Void OnCaptchaValueChanged(::System::String* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONCAPTCHAVALUECHANGED_OFFSET))(this, _);
		}

		::System::Void OnAgreementToggleChanged(::System::Boolean _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONAGREEMENTTOGGLECHANGED_OFFSET))(this, _);
		}

		::System::Void OnBindButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONBINDBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void TryGetCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_TRYGETCAPTCHACODE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void UpdateCaptchaCountdownText(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_UPDATECAPTCHACOUNTDOWNTEXT_OFFSET))(this, seconds);
		}

		::System::Void RefreshBindButtonState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_REFRESHBINDBUTTONSTATE_OFFSET))(this);
		}

		::System::Void SetSendCaptchaButtonEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETSENDCAPTCHABUTTONENABLE_OFFSET))(this, enable);
		}

		::System::Void SetBottomButtonsEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETBOTTOMBUTTONSENABLE_OFFSET))(this, enable);
		}

		::System::Void OnHighlightedObjectChanged(::UnityEngine::GameObject* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ONHIGHLIGHTEDOBJECTCHANGED_OFFSET))(this, obj);
		}

		::System::Boolean IsMailInputValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ISMAILINPUTVALID_OFFSET))(this);
		}

		::System::Boolean HasDefaultBottomButtons()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_HASDEFAULTBOTTOMBUTTONS_OFFSET))(this);
		}

		::System::Void AdjustButtonSizeOnXcloud()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ADJUSTBUTTONSIZEONXCLOUD_OFFSET))(this);
		}

		static ::System::Void ResizeLayoutWidth(::UnityEngine::GameObject* obj, ::System::Int32 width)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_RESIZELAYOUTWIDTH_OFFSET))(obj, width);
		}

		::System::Void AddButtonClick(::System::String* path, ::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_ADDBUTTONCLICK_OFFSET))(this, path, action);
		}

		::UnityEngine::GameObject* GetObjectByPath(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_GETOBJECTBYPATH_OFFSET))(this, path);
		}

		::System::Void SetText(::System::String* path, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETTEXT_OFFSET))(this, path, value);
		}

		static ::System::Void SetGraphicColor(::UnityEngine::GameObject* obj, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG_SETGRAPHICCOLOR_OFFSET))(obj, color);
		}

		::System::Void _InitializeCallbacks_b__86_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_0_OFFSET))(this);
		}

		::System::Void _InitializeCallbacks_b__86_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_1_OFFSET))(this);
		}

		::System::Void _InitializeCallbacks_b__86_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDEMAILBINDINGDIALOG__INITIALIZECALLBACKS_B__86_2_OFFSET))(this);
		}
	};
}
