#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1994B960)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1994B940)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B710)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B7B0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B730)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONGETCAPTCHABTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B750)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONQRREFRESHBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B7D0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B790)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWUSERAGREEMENTCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B770)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1994BA70)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1994B810)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1994B830)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1994B7F0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B720)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBINDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B7C0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B740)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONGETCAPTCHABTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B760)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONQRREFRESHBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B7E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B7A0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWUSERAGREEMENTCLICKED_OFFSET UNITYSDK_OFFSET(0x1994B780)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1994B980)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTBINDRESULTQUERYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1994B850)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1994B900)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPBINDRESULTQUERYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1994B8E0)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1994B920)
#define MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1994BAE0)

namespace MiHoYo::SDK::UI::Internal::OS
{
	inline static constexpr unsigned int AccountBindingDialog_TypeDefinitionIndex = 19269;

	class AccountBindingDialog : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* _OnGetCaptchaBtnClicked_k__BackingField; // 0x10
		::System::Action* _OnQRRefreshBtnClicked_k__BackingField; // 0x18
		::System::Action* _OnShowUserAgreementClicked_k__BackingField; // 0x20
		::System::Action* _OnBackBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnShowPrivacyProtocolClicked_k__BackingField; // 0x38
		::System::Action_1<::System::String*>* _OnBindBtnClicked_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action* get_OnBackBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBackBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBACKBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnGetCaptchaBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONGETCAPTCHABTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGetCaptchaBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONGETCAPTCHABTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowUserAgreementClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWUSERAGREEMENTCLICKED_OFFSET))(this);
		}

		::System::Void set_OnShowUserAgreementClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWUSERAGREEMENTCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowPrivacyProtocolClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET))(this);
		}

		::System::Void set_OnShowPrivacyProtocolClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONSHOWPRIVACYPROTOCOLCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnBindBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONBINDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBindBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONBINDBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnQRRefreshBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_GET_ONQRREFRESHBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnQRRefreshBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SET_ONQRREFRESHBTNCLICKED_OFFSET))(this, value);
		}

		::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SETQRIMAGE_OFFSET))(this, url);
		}

		::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_INVALIDATEQRCODE_OFFSET))(this);
		}

		::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_LOADINGQRCODE_OFFSET))(this);
		}

		::UnityEngine::Coroutine* StartBindResultQueryCoroutine(::System::Int32 queryInterval, ::System::Action* func)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTBINDRESULTQUERYCOROUTINE_OFFSET))(this, queryInterval, func);
		}

		::System::Void StopBindResultQueryCoroutine(::UnityEngine::Coroutine* coroutine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPBINDRESULTQUERYCOROUTINE_OFFSET))(this, coroutine);
		}

		::System::Void StartCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STARTCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void StopCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_STOPCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARINPUTACCOUNT_OFFSET))(this);
		}

		::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_CLEARCAPTCHACODE_OFFSET))(this);
		}

		::System::Void Show(::System::String* gamertag, ::System::Boolean showAgreement)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_SHOW_OFFSET))(this, gamertag, showAgreement);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_INTERNAL_OS_ACCOUNTBINDINGDIALOG_HIDE_OFFSET))(this);
		}
	};
}
