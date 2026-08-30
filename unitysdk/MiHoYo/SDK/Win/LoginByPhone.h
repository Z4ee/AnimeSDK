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

#define MIHOYO_SDK_WIN_LOGINBYPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18ACEA50)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKACCOUNTLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD24C0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD1F00)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD1F40)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKGUESTBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD23D0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKLOGINBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD1FA0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKQRCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD1F20)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKSAVERECORDTOGGLE_OFFSET UNITYSDK_OFFSET(0x18AD26C0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTAPTAPBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD24E0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTOGGLE_OFFSET UNITYSDK_OFFSET(0x18AD26A0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERAGREEMENTBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD25E0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKUSERPRIVACYBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD2640)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18AD1E80)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x18AD1B40)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18AD26E0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18AD1A20)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_PHONEINPUTVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x18AD1BB0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18AD1EF0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_RESETVERIFYCODEBUTTON_OFFSET UNITYSDK_OFFSET(0x18AD2760)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x18AD1A40)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18AD1E00)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_START_OFFSET UNITYSDK_OFFSET(0x18AD19F0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATEBOTTOMCONTENT_OFFSET UNITYSDK_OFFSET(0x18AD0850)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATECODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x18AD1BC0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATESAVERECORDTIPS_OFFSET UNITYSDK_OFFSET(0x18AD0C60)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x18AD1260)
#define MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETOGGLESTATUS_OFFSET UNITYSDK_OFFSET(0x18AD2730)
#define MIHOYO_SDK_WIN_LOGINBYPHONE__AWAKE_B__43_0_OFFSET UNITYSDK_OFFSET(0x18AD27C0)
#define MIHOYO_SDK_WIN_LOGINBYPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD2780)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByPhone_TypeDefinitionIndex = 9481;

	class LoginByPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::LoginByPhone**)Il2CppClass::FromTypeDefinitionIndex(LoginByPhone_TypeDefinitionIndex)->GetStaticField(0x320C0);
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

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_SHOW_OFFSET))(a1);
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

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_COUNTDOWN_OFFSET))(this, a1);
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

		::System::Void ClickToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKTOGGLE_OFFSET))(this, a1);
		}

		::System::Void ClickSaveRecordToggle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_CLICKSAVERECORDTOGGLE_OFFSET))(this, a1);
		}

		::System::Void UpdateCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATECODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateToggleStatus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_UPDATETOGGLESTATUS_OFFSET))(this, a1);
		}

		::System::Void ResetVerifyCodeButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE_RESETVERIFYCODEBUTTON_OFFSET))(this);
		}

		::System::Void _Awake_b__43_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYPHONE__AWAKE_B__43_0_OFFSET))(this, a1);
		}
	};
}
