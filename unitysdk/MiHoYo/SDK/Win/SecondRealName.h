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

#define MIHOYO_SDK_WIN_SECONDREALNAME_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A53E590)
#define MIHOYO_SDK_WIN_SECONDREALNAME_BACK_OFFSET UNITYSDK_OFFSET(0x1A53FBD0)
#define MIHOYO_SDK_WIN_SECONDREALNAME_CLICKBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x1A53F7C0)
#define MIHOYO_SDK_WIN_SECONDREALNAME_GETALERTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A53F980)
#define MIHOYO_SDK_WIN_SECONDREALNAME_GETIDENTITYINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x1A53FC80)
#define MIHOYO_SDK_WIN_SECONDREALNAME_GETNAMEINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x1A53FC60)
#define MIHOYO_SDK_WIN_SECONDREALNAME_HIDE_OFFSET UNITYSDK_OFFSET(0x1A53FBF0)
#define MIHOYO_SDK_WIN_SECONDREALNAME_MEETPROBLEM_OFFSET UNITYSDK_OFFSET(0x1A53FB00)
#define MIHOYO_SDK_WIN_SECONDREALNAME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A53FF50)
#define MIHOYO_SDK_WIN_SECONDREALNAME_SHOW_OFFSET UNITYSDK_OFFSET(0x1A53F670)
#define MIHOYO_SDK_WIN_SECONDREALNAME_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1A53FCA0)
#define MIHOYO_SDK_WIN_SECONDREALNAME_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1A53EED0)
#define MIHOYO_SDK_WIN_SECONDREALNAME__CLICKBACKBUTTON_B__27_0_OFFSET UNITYSDK_OFFSET(0x1A53FF80)
#define MIHOYO_SDK_WIN_SECONDREALNAME__CLICKBACKBUTTON_B__27_1_OFFSET UNITYSDK_OFFSET(0x1A53FFA0)
#define MIHOYO_SDK_WIN_SECONDREALNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53FF70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealName_TypeDefinitionIndex = 20125;

	class SecondRealName : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SecondRealName** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SecondRealName**)Il2CppClass::FromTypeDefinitionIndex(SecondRealName_TypeDefinitionIndex)->GetStaticField(0x9690);
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
		// static const ::System::String* SubDescPath; // 0x0
		::UnityEngine::UI::Button* backButton; // 0x58
		::UnityEngine::UI::Button* questionButton; // 0x60
		::UnityEngine::UI::InputField* nameInput; // 0x68
		::UnityEngine::UI::InputField* idInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Text* submitButtonText; // 0x80
		::System::Action* OnBack; // 0x88
		::System::Action* OnSubmit; // 0x90
		::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE dialogType; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_SHOW_OFFSET))(type);
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ClickBackButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_CLICKBACKBUTTON_OFFSET))(this);
		}

		::System::String* GetAlertContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_GETALERTCONTENT_OFFSET))(this);
		}

		::System::Void MeetProblem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_MEETPROBLEM_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_BACK_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_HIDE_OFFSET))();
		}

		::System::String* GetNameInputText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_GETNAMEINPUTTEXT_OFFSET))(this);
		}

		::System::String* GetIdentityInputText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_GETIDENTITYINPUTTEXT_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_SUBMIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME_ONDESTROY_OFFSET))(this);
		}

		::System::Void _ClickBackButton_b__27_0(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME__CLICKBACKBUTTON_B__27_0_OFFSET))(this, result);
		}

		::System::Void _ClickBackButton_b__27_1(::MiHoYo::SDK::Confirm_ConfirmResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_ConfirmResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAME__CLICKBACKBUTTON_B__27_1_OFFSET))(this, result);
		}
	};
}
