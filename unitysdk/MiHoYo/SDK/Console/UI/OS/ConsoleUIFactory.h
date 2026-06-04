#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentSentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEAGEAPPEALOPTIONDIALOG_OFFSET UNITYSDK_OFFSET(0x18306800)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18306710)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEGENERALERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18306730)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18306760)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x183067A0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x183067E0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18306780)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET UNITYSDK_OFFSET(0x183067C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_TOAST_OFFSET UNITYSDK_OFFSET(0x18306820)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18306880)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleUIFactory_TypeDefinitionIndex = 8711;

	class ConsoleUIFactory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* CreateAgeGateErrorDialog(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*(*)(::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEERRORDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* CreateAgeGateGeneralErrorDialog(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEGENERALERRORDIALOG_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* CreateAgeGateParentalConsentDialog(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTDIALOG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentSentDialog* CreateAgeGateParentalConsentSentDialog(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::AgeGateFlowType a3)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentSentDialog*(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(a1, a2, a3);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* CreateAgeGateParentalConsentProcessDialog(::MiHoYo::SDK::AgeGateFlowType a1)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*(*)(::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* CreateAgeGateVerificationDialog()
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEVERIFICATIONDIALOG_OFFSET))();
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* CreateAgeGateParentalConsentRequiredDialog(::System::String* a1, ::MiHoYo::SDK::AgeGateFlowType a2)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*(*)(::System::String*, ::MiHoYo::SDK::AgeGateFlowType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(a1, a2);
		}

		static ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* CreateAgeGateAgeAppealOptionDialog(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_CREATEAGEGATEAGEAPPEALOPTIONDIALOG_OFFSET))(a1);
		}

		static ::System::Void Toast(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEUIFACTORY_TOAST_OFFSET))(a1);
		}
	};
}
