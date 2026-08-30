#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/GrantType.h"
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

#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_AWAKE_OFFSET UNITYSDK_OFFSET(0x18B21D90)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_BACK_OFFSET UNITYSDK_OFFSET(0x18B23620)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x18B239A0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18B23A80)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_HIDE_OFFSET UNITYSDK_OFFSET(0x18ABC760)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1876B140)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_QUESTION_OFFSET UNITYSDK_OFFSET(0x18B23640)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x18B237D0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18B237C0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_SHOW_OFFSET UNITYSDK_OFFSET(0x18B23530)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x18B239C0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_START_OFFSET UNITYSDK_OFFSET(0x18B23170)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_SUBMIT_OFFSET UNITYSDK_OFFSET(0x18B23800)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1876AFB0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x18B22BE0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x1876B160)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGrantPhone_TypeDefinitionIndex = 9469;

	class OverseaGrantPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGrantPhone** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaGrantPhone**)Il2CppClass::FromTypeDefinitionIndex(OverseaGrantPhone_TypeDefinitionIndex)->GetStaticField(0x30A40);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* ContentTitlePath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputTipsPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* NextButtonPath; // 0x0
		// static const ::System::String* NextButtonTextPath; // 0x0
		// static const ::System::String* OtherButtonPath; // 0x0
		// static const ::System::String* OtherButtonTextPath; // 0x0
		::UnityEngine::GameObject* dialog; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::Button* questionButton; // 0x68
		::UnityEngine::UI::Text* contentTitle; // 0x70
		::UnityEngine::UI::Text* contentText; // 0x78
		::UnityEngine::UI::InputField* verifycodeInput; // 0x80
		::UnityEngine::UI::Button* requestCodeButton; // 0x88
		::UnityEngine::UI::Text* requestCodeText; // 0x90
		::UnityEngine::UI::Button* nextButton; // 0x98
		::UnityEngine::UI::Text* nextButtonText; // 0xA0
		::UnityEngine::UI::Button* otherButton; // 0xA8
		::UnityEngine::UI::Text* otherButtonText; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Action_1<::MiHoYo::SDK::GrantType>* OnGetCode; // 0xC0
		::System::Action_1<::System::String*>* OnSubmit; // 0xC8
		::System::Action* OnOtherButton; // 0xD0
		::System::Boolean isRequestVerifyCode; // 0xD8
		::System::Single countDownTime; // 0xDC
		::System::Boolean retrieveFlag; // 0xE0
		::MiHoYo::SDK::AccountModel* account; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_START_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_BACK_OFFSET))(this);
		}

		::System::Void Question()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_QUESTION_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_SUBMIT_OFFSET))(this);
		}

		::System::Void ClictOtherButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_CLICTOTHERBUTTON_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTPHONE_ONDESTROY_OFFSET))(this);
		}
	};
}
