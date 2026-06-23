#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB566A0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CLEARINPUT_OFFSET UNITYSDK_OFFSET(0x1BB57970)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CLOSEBTNCLIEKD_OFFSET UNITYSDK_OFFSET(0x1BB57DB0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CONFIRMBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB57BC0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_ENDEDIT_OFFSET UNITYSDK_OFFSET(0x1BB57DD0)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSEBTNCLIKED_OFFSET UNITYSDK_OFFSET(0x1BB56660)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1BB56680)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB56620)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BB56640)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB57B30)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_ONINPUT_OFFSET UNITYSDK_OFFSET(0x1BB57D40)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSEBTNCLIKED_OFFSET UNITYSDK_OFFSET(0x1BB56670)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x1BB56690)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB56630)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BB56650)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB57A00)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_TIPSBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1BB57D90)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BB57760)
#define MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB57DF0)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AgeGateParentalConsentDialog_TypeDefinitionIndex = 20140;

	class AgeGateParentalConsentDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::AgeGateParentalConsentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::AgeGateParentalConsentDialog**)Il2CppClass::FromTypeDefinitionIndex(AgeGateParentalConsentDialog_TypeDefinitionIndex)->GetStaticField(0xA230);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* subTitleTextPath; // 0x0
		// static const ::System::String* tipsTextPath; // 0x0
		// static const ::System::String* tipsBtnPath; // 0x0
		// static const ::System::String* inputTitleTextPath; // 0x0
		// static const ::System::String* inputFieldPath; // 0x0
		// static const ::System::String* inputTextPath; // 0x0
		// static const ::System::String* inputPlaceholderPath; // 0x0
		// static const ::System::String* inputClearBtnPath; // 0x0
		// static const ::System::String* confirmBtnPath; // 0x0
		// static const ::System::String* confirmBtnTextPath; // 0x0
		::UnityEngine::UI::Button* closeBtn; // 0x58
		::UnityEngine::UI::Text* title; // 0x60
		::UnityEngine::UI::Text* subTitle; // 0x68
		::UnityEngine::UI::Text* tips; // 0x70
		::UnityEngine::UI::Button* tipsBtn; // 0x78
		::UnityEngine::UI::Text* inputTitle; // 0x80
		::UnityEngine::UI::InputField* inputField; // 0x88
		::UnityEngine::UI::Text* inputText; // 0x90
		::UnityEngine::UI::Text* inputPlaceholder; // 0x98
		::UnityEngine::UI::Button* inputClearBtn; // 0xA0
		::UnityEngine::UI::Button* confirmBtn; // 0xA8
		::UnityEngine::UI::Text* confirmBtnText; // 0xB0
		::System::Action_1<::System::String*>* _OnNextButtonClicked_k__BackingField; // 0xB8
		::System::Action* _OnShowParentalControlProcessButtonPressed_k__BackingField; // 0xC0
		::System::Action* _OnCloseBtnCliked_k__BackingField; // 0xC8
		::System::Action* _OnEndEdit_k__BackingField; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::System::String*>* get_OnNextButtonClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnShowParentalControlProcessButtonPressed()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnShowParentalControlProcessButtonPressed(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnCliked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSEBTNCLIKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnCliked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSEBTNCLIKED_OFFSET))(this, value);
		}

		::System::Action* get_OnEndEdit()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_GET_ONENDEDIT_OFFSET))(this);
		}

		::System::Void set_OnEndEdit(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SET_ONENDEDIT_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_UPDATETEXT_OFFSET))(this);
		}

		::System::Void ClearInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CLEARINPUT_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void ConfirmButtonClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CONFIRMBUTTONCLICKED_OFFSET))(this);
		}

		::System::Void OnInput(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_ONINPUT_OFFSET))(this, input);
		}

		::System::Void TipsBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_TIPSBTNCLICKED_OFFSET))(this);
		}

		::System::Void CloseBtnCliekd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_CLOSEBTNCLIEKD_OFFSET))(this);
		}

		::System::Void EndEdit(::System::String* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_AGEGATEPARENTALCONSENTDIALOG_ENDEDIT_OFFSET))(this, _);
		}
	};
}
