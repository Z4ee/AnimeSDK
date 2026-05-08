#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"
#include "unitysdk/MiHoYo/SDK/Console/UI/OS/ConsoleAgeGateVerificationDialog_DropDownInteraction.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1944DE30)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1944DE10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1944DDF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1944DDD0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x19450610)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x19450740)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_MONTHSINYEARARRAY_OFFSET UNITYSDK_OFFSET(0x1944F690)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_NEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x194505A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONCLOSEDPRESSED_OFFSET UNITYSDK_OFFSET(0x19450900)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1944F850)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONMONTHDROPDOWNVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1944F8A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x194501E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONYEARDROPDOWNVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19450070)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETDROPDOWNYEAR_OFFSET UNITYSDK_OFFSET(0x1944FA10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x19450A20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1944DE20)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x1944DE00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1944DDE0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x194507D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_UPDATENAVIGATION_OFFSET UNITYSDK_OFFSET(0x1944F740)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19450A90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__ONCLOSEDPRESSED_G__ONCLOSEPRESSEDROUTINE_45_0_OFFSET UNITYSDK_OFFSET(0x194509D0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateVerificationDialog_TypeDefinitionIndex = 19631;

	class ConsoleAgeGateVerificationDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateVerificationDialog_TypeDefinitionIndex)->GetStaticField(0x9E70);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* dropDownMonthPath; // 0x0
		// static const ::System::String* dropDownYearPath; // 0x0
		// static const ::System::String* dropDownMonthTextPath; // 0x0
		// static const ::System::String* dropDownYearTextPath; // 0x0
		// static const ::System::String* dropDownMonthLabelPath; // 0x0
		// static const ::System::String* dropDownYearLabelPath; // 0x0
		// static const ::System::String* TipsPath; // 0x0
		// static const ::System::String* TipsTextPath; // 0x0
		// static const ::System::String* TipsOutlinePath; // 0x0
		// static const ::System::String* confirmButtonPath; // 0x0
		// static const ::System::String* confirmButtonTextPath; // 0x0
		::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* _OnNextButtonPressed_k__BackingField; // 0xC0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* _OnClosed_k__BackingField; // 0xC8
		::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog_DropDownInteraction dropDownMonth; // 0xD0
		::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateVerificationDialog_DropDownInteraction dropDownYear; // 0xE8
		::UnityEngine::UI::Button* confirmBirthdayButton; // 0x100
		::UnityEngine::UI::Image* BtnOutline; // 0x108
		::UnityEngine::GameObject* TipsObject; // 0x110
		::UnityEngine::UI::Text* tips; // 0x118
		::System::Boolean _Interactable_k__BackingField; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* get_OnNextButtonPressed()
		{
			return ((::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONNEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void set_OnNextButtonPressed(::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONNEXTBUTTONPRESSED_OFFSET))(this, value);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* get_OnClosed()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_ONCLOSED_OFFSET))(this);
		}

		::System::Void set_OnClosed(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_ONCLOSED_OFFSET))(this, value);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SET_INTERACTABLE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnMonthDropdownValueChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONMONTHDROPDOWNVALUECHANGED_OFFSET))(this, index);
		}

		::System::Void OnYearDropdownValueChanged(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONYEARDROPDOWNVALUECHANGED_OFFSET))(this, index);
		}

		::System::Void OnSetHighlightedObject(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONSETHIGHLIGHTEDOBJECT_OFFSET))(this, gameObject);
		}

		::System::Void SetDropDownYear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETDROPDOWNYEAR_OFFSET))(this);
		}

		::System::Void UpdateNavigation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_UPDATENAVIGATION_OFFSET))(this);
		}

		::System::Void NextButtonPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_NEXTBUTTONPRESSED_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnClosedPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_ONCLOSEDPRESSED_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_SETINTERACTABLE_OFFSET))(this, interact);
		}

		static ::Il2CppArray<::System::Int32>* MonthsInYearArray()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_MONTHSINYEARARRAY_OFFSET))();
		}

		::System::Collections::IEnumerator* _OnClosedPressed_g__OnClosePressedRoutine_45_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG__ONCLOSEDPRESSED_G__ONCLOSEPRESSEDROUTINE_45_0_OFFSET))(this);
		}
	};
}
