#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Common/OS/AgeGatePayValidationManager.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA7F860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA7F600)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA7F6F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA7F8A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA7F480)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA7F120)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET UNITYSDK_OFFSET(0x1BA7F9F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7F340)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 20477;

	class AgeGatePayValidationManager : public ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void CreateParentalConsentDialog(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this, email);
		}

		::System::Void CreateAgeGateParentalConsentRequiredDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(this);
		}

		::System::Void CreateAgeGateParentalConsentSentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(this);
		}

		::System::Void CreateAgeGateParentalConsentProcessDialog(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(this, action);
		}

		::System::Void CreateAgeGatePaymentErrorDialog(::System::String* hintMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET))(this, hintMessage);
		}

		::System::Void OnAgeGatePaymentError(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET))(this, dialog);
		}
	};
}
