#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IWinAgeGateParentalConsentSentDialog; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_GET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1B8AA1E0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_GET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1B8AA1C0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_HIDEDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8AA200)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SETEMAIL_OFFSET UNITYSDK_OFFSET(0x1B8AA2B0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B8AA2C0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SET_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x1B8AA1F0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SET_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1B8AA1D0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1B8A9810)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A9710)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B8AA2D0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0x1B8AA2F0)

namespace MiHoYo::SDK::Win::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge_TypeDefinitionIndex = 9505;

	class AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge : public ::System::Object
	{
	public:
		::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* bridge; // 0x10
		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* _OnClose_k__BackingField; // 0x18
		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* _OnResendEmail_k__BackingField; // 0x20

		::System::Void _ctor(::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IWinAgeGateParentalConsentSentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* get_OnResendEmail()
		{
			return ((::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_GET_ONRESENDEMAIL_OFFSET))(this);
		}

		::System::Void set_OnResendEmail(::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SET_ONRESENDEMAIL_OFFSET))(this, a1);
		}

		::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* get_OnClose()
		{
			return ((::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_GET_ONCLOSE_OFFSET))(this);
		}

		::System::Void set_OnClose(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SET_ONCLOSE_OFFSET))(this, a1);
		}

		::System::Void HideDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_HIDEDIALOG_OFFSET))(this);
		}

		::System::Void SetEmail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SETEMAIL_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Boolean StartCountdown(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_STARTCOUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE___CTOR_B__1_0_OFFSET))(this);
		}

		::System::Void __ctor_b__1_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE___CTOR_B__1_1_OFFSET))(this, a1);
		}
	};
}
