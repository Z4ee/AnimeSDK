#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A2308E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A2308C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1A2308A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A230820)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A230840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A230860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A230880)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1A232470)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1A232580)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A232A20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A232A90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A232950)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A232A50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x1A232B60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A2329D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x1A232610)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1A231F90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1A2308D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1A2308B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1A230830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1A230850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A230870)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A230890)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1A232420)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1A232850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A231FD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET UNITYSDK_OFFSET(0x1A231E60)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A232DD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET UNITYSDK_OFFSET(0x1A232B10)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentDialog_TypeDefinitionIndex = 8726;

	class HandheldAgeGateParentalConsentDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateParentalConsentDialog_TypeDefinitionIndex)->GetStaticField(0x189E0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 EMAIL_MAX_LENGTH = 0x32; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* inputTitleTextPath; // 0x0
		// static const ::System::String* inputPlaceholderTextPath; // 0x0
		// static const ::System::String* inputFieldPath; // 0x0
		// static const ::System::String* TipsPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* TipsOutlinePath; // 0x0
		// static const ::System::String* inputConfirmButton; // 0x0
		// static const ::System::String* inputConfirmButtonText; // 0x0
		// static const ::System::String* helpButtonTextPath; // 0x0
		::UnityEngine::UI::InputField* inputField; // 0xC0
		::UnityEngine::UI::Button* confirmInputButton; // 0xC8
		::UnityEngine::UI::Image* BtnOutline; // 0xD0
		::UnityEngine::GameObject* TipsObject; // 0xD8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputCompleted_k__BackingField; // 0xE0
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnInputValueChanged_k__BackingField; // 0xE8
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* _OnNextButtonPressed_k__BackingField; // 0xF0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnShowParentalControlProcessButtonPressed_k__BackingField; // 0xF8
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* _OnClosed_k__BackingField; // 0x100
		::System::String* parentsEmail; // 0x108
		::MiHoYo::SDK::AgeGateFlowType Type; // 0x110
		::System::Boolean _Interactable_k__BackingField; // 0x114
		::System::Boolean HasInput; // 0x115

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputCompleted()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTCOMPLETED_OFFSET))(this);
		}

		::System::Void set_OnInputCompleted(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTCOMPLETED_OFFSET))(this, a1);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnInputValueChanged()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONINPUTVALUECHANGED_OFFSET))(this);
		}

		::System::Void set_OnInputValueChanged(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONINPUTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* get_OnNextButtonPressed()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonPressed(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnShowParentalControlProcessButtonPressed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnShowParentalControlProcessButtonPressed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_ONCLOSED_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetParentsEmailWithinInputField(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETPARENTSEMAILWITHININPUTFIELD_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_UPDATE_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SHOW_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_HIDE_OFFSET))();
		}

		::System::Void NextButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_NEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnInputFieldValueChanged(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONINPUTFIELDVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void ShowParentalControlProcessButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void OnClosedButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONCLOSEDBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void ValidateEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_VALIDATEEMAIL_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void OnSetHighlightedObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _OnClosedButtonPressed_g__OnClosePressedRoutine_56_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTDIALOG__ONCLOSEDBUTTONPRESSED_G__ONCLOSEPRESSEDROUTINE_56_0_OFFSET))(this);
		}
	};
}
