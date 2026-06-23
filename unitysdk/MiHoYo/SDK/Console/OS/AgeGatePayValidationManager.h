#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Common/OS/AgeGatePayValidationManager.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA74830)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA74290)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA74520)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA74920)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BA73ED0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA73B80)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA73D90)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 20798;

	class AgeGatePayValidationManager : public ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void CreateParentalConsentDialog(::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this, email);
		}

		::System::Void CreateAgeGateParentalConsentRequiredDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(this);
		}

		::System::Void CreateAgeGateParentalConsentSentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(this);
		}

		::System::Void CreateAgeGateParentalConsentProcessDialog(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(this, action);
		}

		::System::Void CreateAgeGatePaymentErrorDialog(::System::String* hintMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET))(this, hintMessage);
		}
	};
}
