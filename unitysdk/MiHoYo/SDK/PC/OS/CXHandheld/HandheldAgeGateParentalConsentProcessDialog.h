#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleDialogBase.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B9DD560)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B9DD540)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1B9DD520)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1B9DF960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1B9DFA70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B9DFC00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_ONPRESSEDBACK_OFFSET UNITYSDK_OFFSET(0x1B9DFC20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B9DFCD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SETMULTILANGUAGETEXT_OFFSET UNITYSDK_OFFSET(0x1B9DD960)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B9DD550)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1B9DD530)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1B9DFB00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9DFCE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG__ONPRESSEDBACK_G__ONBACKROUTINE_29_0_OFFSET UNITYSDK_OFFSET(0x1B9DFC80)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int HandheldAgeGateParentalConsentProcessDialog_TypeDefinitionIndex = 8729;

	class HandheldAgeGateParentalConsentProcessDialog : public ::MiHoYo::SDK::Console::ConsoleDialogBase
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentProcessDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::HandheldAgeGateParentalConsentProcessDialog**)Il2CppClass::FromTypeDefinitionIndex(HandheldAgeGateParentalConsentProcessDialog_TypeDefinitionIndex)->GetStaticField(0x1A1B0);
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
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG__CTOR_OFFSET))(this);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* get_OnBack()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_ONBACK_OFFSET))(this);
		}

		::System::Void set_OnBack(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_ONBACK_OFFSET))(this, a1);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Void set_Interactable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SET_INTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void SetMultiLanguageText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SETMULTILANGUAGETEXT_OFFSET))(this);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDEDIALOG_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SHOW_OFFSET))(a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_ONENABLE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_HIDE_OFFSET))();
		}

		::System::Void OnPressedBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_ONPRESSEDBACK_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _OnPressedBack_g__OnBackRoutine_29_0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_HANDHELDAGEGATEPARENTALCONSENTPROCESSDIALOG__ONPRESSEDBACK_G__ONBACKROUTINE_29_0_OFFSET))(this);
		}
	};
}
