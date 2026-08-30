#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentDetailsDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_GET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1B8A9F70)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A9F90)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B8AA040)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_SET_ONBACK_OFFSET UNITYSDK_OFFSET(0x1B8A9F80)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9920)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE___CTOR_B__5_0_OFFSET UNITYSDK_OFFSET(0x1B8AA050)

namespace MiHoYo::SDK::Win::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge_TypeDefinitionIndex = 9506;

	class AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* bridge; // 0x10
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* _OnBack_k__BackingField; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentDetailsDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE__CTOR_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* get_OnBack()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_GET_ONBACK_OFFSET))(this);
		}

		::System::Void set_OnBack(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_SET_ONBACK_OFFSET))(this, a1);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE___CTOR_B__5_0_OFFSET))(this);
		}
	};
}
