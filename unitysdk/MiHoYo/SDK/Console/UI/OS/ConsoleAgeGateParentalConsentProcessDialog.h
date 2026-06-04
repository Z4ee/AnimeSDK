#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x182FD710)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FD6F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_ONBACK_OFFSET UNITYSDK_OFFSET(0x182FD6D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x182FF360)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x182FF470)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x182FF600)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_ONPRESSEDBACK_OFFSET UNITYSDK_OFFSET(0x182FF620)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FF6D0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x182FDA90)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x182FD700)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_ONBACK_OFFSET UNITYSDK_OFFSET(0x182FD6E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x182FF500)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x182FF6E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG__ONPRESSEDBACK_G__ONBACKROUTINE_29_0_OFFSET UNITYSDK_OFFSET(0x182FF680)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentProcessDialog_TypeDefinitionIndex = 8696;

	class ConsoleAgeGateParentalConsentProcessDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog**)Il2CppClass::FromTypeDefinitionIndex(ConsoleAgeGateParentalConsentProcessDialog_TypeDefinitionIndex)->GetStaticField(0x12AD0);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* parentTitleTextPath; // 0x0
		// static const ::System::String* parentSubText1Path; // 0x0
		// static const ::System::String* parentSubText2Path; // 0x0
		// static const ::System::String* parentSubText3Path; // 0x0
		// static const ::System::String* parentSubText3ObjectPath; // 0x0
		// static const ::System::String* childTitleTextPath; // 0x0
		// static const ::System::String* childSubText1Path; // 0x0
		// static const ::System::String* childSubText2Path; // 0x0
		// static const ::System::String* childSubText2ObjectPath; // 0x0
		// static const ::System::String* rightSubDesc; // 0x0
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* _OnBack_k__BackingField; // 0xC0
		::MiHoYo::SDK::AgeGateFlowType _Type; // 0xC8
		::System::Boolean _Interactable_k__BackingField; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* get_OnBack()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_ONBACK_OFFSET))(this);
		}

		::System::Void set_OnBack(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_ONBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SHOW_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnPressedBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_ONPRESSEDBACK_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _OnPressedBack_g__OnBackRoutine_29_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG__ONPRESSEDBACK_G__ONBACKROUTINE_29_0_OFFSET))(this);
		}
	};
}
