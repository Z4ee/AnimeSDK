#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x19CC9C70)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_BACK_OFFSET UNITYSDK_OFFSET(0x19CCB210)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19CCB520)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x19CCB1A0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_LOGIN_OFFSET UNITYSDK_OFFSET(0x19CCB260)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19CCB580)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_OTHERVERIFY_OFFSET UNITYSDK_OFFSET(0x19CCB410)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_REDIRECT_OFFSET UNITYSDK_OFFSET(0x19CCB3F0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x19CCB240)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19CCB230)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x19CCB0B0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x19CCB430)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_START_OFFSET UNITYSDK_OFFSET(0x19CCAFE0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x19CCAEB0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19CCADD0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CCB5A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealnameGrantPhone_TypeDefinitionIndex = 20099;

	class SecondRealnameGrantPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SecondRealnameGrantPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SecondRealnameGrantPhone**)Il2CppClass::FromTypeDefinitionIndex(SecondRealnameGrantPhone_TypeDefinitionIndex)->GetStaticField(0xAC50);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* SafePhoneTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPlaceholderPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* LoginButtonPath; // 0x0
		// static const ::System::String* RedirectButtonPath; // 0x0
		// static const ::System::String* OtherVerifyButtonPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Text* phoneText; // 0x60
		::UnityEngine::UI::InputField* verifycodeInput; // 0x68
		::UnityEngine::UI::Button* requestCodeButton; // 0x70
		::UnityEngine::UI::Text* requestCodeText; // 0x78
		::UnityEngine::UI::Button* loginButton; // 0x80
		::UnityEngine::GameObject* redirectBtnObject; // 0x88
		::UnityEngine::GameObject* otherVerifyBtnObject; // 0x90
		::UnityEngine::UI::Button* redirectButton; // 0x98
		::UnityEngine::UI::Button* otherVerifyButton; // 0xA0
		::UnityEngine::UI::Text* redirectButtonText; // 0xA8
		::UnityEngine::UI::Text* otherVerifyButtonText; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Action* OnGetCode; // 0xC0
		::System::Action_1<::System::String*>* OnLogin; // 0xC8
		::System::Action* OnGrantMail; // 0xD0
		::System::Action* OnOtherVerify; // 0xD8
		::System::Boolean isRequestVerifyCode; // 0xE0
		::System::Single countDownTime; // 0xE4
		::System::Boolean retrieveFlag; // 0xE8
		::MiHoYo::SDK::AccountModel* account; // 0xF0
		::System::Boolean isShowRedirect; // 0xF8
		::System::Boolean isShowOtherVerify; // 0xF9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_AWAKE_OFFSET))(this);
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_START_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* model, ::System::Boolean isShowRedirect, ::System::Boolean isShowOtherVerify)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_SHOW_OFFSET))(model, isShowRedirect, isShowOtherVerify);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_BACK_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Void Login()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_LOGIN_OFFSET))(this);
		}

		::System::Void Redirect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_REDIRECT_OFFSET))(this);
		}

		::System::Void OtherVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_OTHERVERIFY_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single time)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_COUNTDOWN_OFFSET))(this, time);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTPHONE_ONDESTROY_OFFSET))(this);
		}
	};
}
