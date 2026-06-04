#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_REALNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x182B34E0)
#define MIHOYO_SDK_WIN_REALNAME_BACK_OFFSET UNITYSDK_OFFSET(0x182B4420)
#define MIHOYO_SDK_WIN_REALNAME_CLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x182B4040)
#define MIHOYO_SDK_WIN_REALNAME_GETALERTCONTENT_OFFSET UNITYSDK_OFFSET(0x182B4200)
#define MIHOYO_SDK_WIN_REALNAME_GETIDENTITYINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x182B44D0)
#define MIHOYO_SDK_WIN_REALNAME_GETNAMEINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x182B44B0)
#define MIHOYO_SDK_WIN_REALNAME_HIDE_OFFSET UNITYSDK_OFFSET(0x182B4440)
#define MIHOYO_SDK_WIN_REALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x182B4360)
#define MIHOYO_SDK_WIN_REALNAME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x182B47B0)
#define MIHOYO_SDK_WIN_REALNAME_SHOW_OFFSET UNITYSDK_OFFSET(0x182B3F40)
#define MIHOYO_SDK_WIN_REALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x182B44F0)
#define MIHOYO_SDK_WIN_REALNAME_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x182B3C50)
#define MIHOYO_SDK_WIN_REALNAME__CLICKBACKBUTTON_B__27_0_OFFSET UNITYSDK_OFFSET(0x182B4810)
#define MIHOYO_SDK_WIN_REALNAME__CLICKBACKBUTTON_B__27_1_OFFSET UNITYSDK_OFFSET(0x182B4840)
#define MIHOYO_SDK_WIN_REALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x182B47D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealName_TypeDefinitionIndex = 9199;

	class RealName : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::RealName** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealName**)Il2CppClass::FromTypeDefinitionIndex(RealName_TypeDefinitionIndex)->GetStaticField(0x125D0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* NameInputPath; // 0x0
		// static const ::System::String* IDInputPath; // 0x0
		// static const ::System::String* NameInputTextPath; // 0x0
		// static const ::System::String* IDInputTextPath; // 0x0
		// static const ::System::String* NameInputPlaceholderPath; // 0x0
		// static const ::System::String* IDInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* TitleTextPath; // 0x0
		// static const ::System::String* DescPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* questionButton; // 0x60
		::UnityEngine::UI::InputField* nameInput; // 0x68
		::UnityEngine::UI::InputField* idInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Text* submitButtonText; // 0x80
		::System::Action* OnBack; // 0x88
		::System::Action* OnSubmit; // 0x90
		::System::Action* OnBackWithoutConfirm; // 0x98
		::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE dialogType; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_SHOW_OFFSET))(a1);
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ClickBackButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_CLICKBACKBUTTON_OFFSET))(this);
		}

		::System::String* GetAlertContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_GETALERTCONTENT_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_BACK_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_HIDE_OFFSET))();
		}

		::System::String* GetNameInputText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_GETNAMEINPUTTEXT_OFFSET))(this);
		}

		::System::String* GetIdentityInputText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_GETIDENTITYINPUTTEXT_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_SUBMIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickBackButton_b__27_0(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME__CLICKBACKBUTTON_B__27_0_OFFSET))(this, a1);
		}

		::System::Void _ClickBackButton_b__27_1(::MiHoYo::SDK::Confirm_ConfirmResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAME__CLICKBACKBUTTON_B__27_1_OFFSET))(this, a1);
		}
	};
}
