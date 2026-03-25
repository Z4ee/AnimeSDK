#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEAGEAPPEALOPTIONDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC5B10)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC5960)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC59B0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC5A40)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC5AC0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC59F0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x15EC5A80)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_TOAST_OFFSET UNITYSDK_OFFSET(0x15EC5B50)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC5BB0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleUIFactory_TypeDefinitionIndex = 7664;

	class ConsoleUIFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* CreateAgeGateErrorDialog(::System::String* title, ::System::String* desc, ::System::String* sub_message)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET))(title, desc, sub_message);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* CreateAgeGateParentalConsentDialog(::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET))(type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentSentDialog* CreateAgeGateParentalConsentSentDialog(::System::String* email, ::System::String* date, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentSentDialog*(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(email, date, type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* CreateAgeGateParentalConsentProcessDialog(::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* CreateAgeGateVerificationDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* CreateAgeGateParentalConsentRequiredDialog(::System::String* email, ::MiHoYo::SDK::AgeGateFlowType type)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(email, type);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* CreateAgeGateAgeAppealOptionDialog(::System::Int32 days)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEAGEAPPEALOPTIONDIALOG_OFFSET))(days);
		}

		static ::System::Void Toast(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_TOAST_OFFSET))(message);
		}
	};
}
