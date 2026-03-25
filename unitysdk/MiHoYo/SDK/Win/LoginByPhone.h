#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_LOGINBYPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x160BC090)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKACCOUNTLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF530)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BEFB0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BEFF0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKGUESTBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF440)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF050)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKQRCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BEFD0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKSAVERECORDTOGGLE_OFFSET UNITYSDK_OFFSET(0x160BF720)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTAPTAPBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF550)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTOGGLE_OFFSET UNITYSDK_OFFSET(0x160BF700)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF640)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF6A0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x160BEF30)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x160BECB0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x160BF740)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x160BEBA0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_PHONEINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x160BED20)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x160BEFA0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_RESETVERIFYCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x160BF7F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x160BEBC0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x160BEEB0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_START_OFFSET UNITYSDK_OFFSET(0x160BEB70)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATEBOTTOMCONTENT_OFFSET UNITYSDK_OFFSET(0x160BDBE0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATECODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x160BED30)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATESAVERECORDTIPS_OFFSET UNITYSDK_OFFSET(0x160BDFF0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x160BE5F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x160BF7C0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE__AWAKE_B__43_0_OFFSET UNITYSDK_OFFSET(0x160BF850)
#define MIHOYO_SDK_WIN_LOGINBYPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x160BF810)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByPhone_TypeDefinitionIndex = 8141;

	class LoginByPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByPhone**)Il2CppClass::FromTypeDefinitionIndex(LoginByPhone_TypeDefinitionIndex)->GetStaticField(0x144E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* PhoneInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* PhoneInputPlaceholderPath; // 0x0
		// static const ::System::String* VerifyCodeInputPlaceholderPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::GameObject* testFlagObject; // 0x60
		::UnityEngine::GameObject* qrCodeObject; // 0x68
		::UnityEngine::UI::Button* qrCodeButton; // 0x70
		::UnityEngine::GameObject* bubbleObject; // 0x78
		::UnityEngine::UI::InputField* phoneInput; // 0x80
		::UnityEngine::UI::InputField* codeInput; // 0x88
		::UnityEngine::UI::Button* codeButton; // 0x90
		::UnityEngine::UI::Text* codeText; // 0x98
		::UnityEngine::UI::Button* loginButton; // 0xA0
		::UnityEngine::UI::Button* guestButton; // 0xA8
		::UnityEngine::UI::Button* accountLoginButton; // 0xB0
		::UnityEngine::UI::Button* taptapButton; // 0xB8
		::UnityEngine::GameObject* guestButtonObject; // 0xC0
		::UnityEngine::GameObject* accountLoginButtonObject; // 0xC8
		::UnityEngine::GameObject* taptapButtonObject; // 0xD0
		::UnityEngine::UI::Toggle* agreeAllToggle; // 0xD8
		::UnityEngine::UI::Toggle* saveRecordToggle; // 0xE0
		::UnityEngine::UI::Text* saveRecordText; // 0xE8
		::UnityEngine::UI::Button* userAgreementButton; // 0xF0
		::UnityEngine::UI::Button* privacyButton; // 0xF8
		::System::Action* OnClose; // 0x100
		::System::Action* OnQRCodeLogin; // 0x108
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0x110
		::System::Action_1<::System::String*>* OnGetCode; // 0x118
		::System::Action* OnGuest; // 0x120
		::System::Action* OnAccountLogin; // 0x128
		::System::Action* OnTapTapLogin; // 0x130
		::System::Action* OnUserAgreement; // 0x138
		::System::Action* OnUserPrivacy; // 0x140
		::System::Action_1<::System::Boolean>* OnToggleClicked; // 0x148
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x150
		::System::Action* OnNotifyClose; // 0x158
		::System::Boolean isRequestVerifyCode; // 0x160
		::System::Single countDownTime; // 0x164
		::System::Boolean retrieveFlag; // 0x168
		::MiHoYo::SDK::AccountModel* account; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* model)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_SHOW_OFFSET))(model);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_HIDE_OFFSET))();
		}

		::System::Void UpdateBottomContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATEBOTTOMCONTENT_OFFSET))(this);
		}

		::System::Void UpdateSaveRecordTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATESAVERECORDTIPS_OFFSET))(this);
		}

		::System::Void PhoneInputValueChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_PHONEINPUTVALUECHANGE_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_COUNTDOWN_OFFSET))(this, time);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void ClickCloseButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCLOSEBUTTON_OFFSET))(this);
		}

		::System::Void ClickQRCodeButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKQRCODEBUTTON_OFFSET))(this);
		}

		::System::Void ClickCodeButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCODEBUTTON_OFFSET))(this);
		}

		::System::Void ClickLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKLOGINBUTTON_OFFSET))(this);
		}

		::System::Void ClickGuestButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKGUESTBUTTON_OFFSET))(this);
		}

		::System::Void ClickAccountLoginButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKACCOUNTLOGINBUTTON_OFFSET))(this);
		}

		::System::Void ClickTapTapButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTAPTAPBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserAgreementButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERAGREEMENTBUTTON_OFFSET))(this);
		}

		::System::Void ClickUserPrivacyButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERPRIVACYBUTTON_OFFSET))(this);
		}

		::System::Void ClickToggle(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTOGGLE_OFFSET))(this, isOn);
		}

		::System::Void ClickSaveRecordToggle(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKSAVERECORDTOGGLE_OFFSET))(this, isOn);
		}

		::System::Void UpdateCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATECODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateToggleStatus(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETOGGLESTATUS_OFFSET))(this, isChecked);
		}

		::System::Void ResetVerifyCodeButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_RESETVERIFYCODEBUTTON_OFFSET))(this);
		}

		::System::Void _Awake_b__43_0(::System::String* _p0_)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE__AWAKE_B__43_0_OFFSET))(this, _p0_);
		}
	};
}
