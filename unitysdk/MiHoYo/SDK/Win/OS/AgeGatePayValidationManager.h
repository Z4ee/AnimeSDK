#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/Common/OS/AgeGatePayValidationManager.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge; }
namespace MiHoYo::SDK::Win::OS { class AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A9880)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A9270)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A9570)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A9A40)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B8A8EB0)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B8A8710)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A8A60)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9860)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9250)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9550)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_OFFSET UNITYSDK_OFFSET(0x1B8A8A80)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A8A70)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9870)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9260)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET UNITYSDK_OFFSET(0x1B8A9560)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_0_OFFSET UNITYSDK_OFFSET(0x1B8A9B60)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_1_OFFSET UNITYSDK_OFFSET(0x1B8A9C30)
#define MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A8920)

namespace MiHoYo::SDK::Win::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 9502;

	class AgeGatePayValidationManager : public ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager
	{
	public:
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge** StaticGet___AgeGateParentalConsentRequiredDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0x34210);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge** StaticGet___AgeGateParentalConsentSentDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0x34218);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge** StaticGet___AgeGateParentalConsentDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0x34220);
		}
		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge** StaticGet___AgeGateParentalConsentProcessDialogBridge_k__BackingField()
		{
			return (::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0x34228);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge* get__AgeGateParentalConsentDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTDIALOGBRIDGE_OFFSET))(a1);
		}

		::System::Void OnParentalConsentInputEmailButtonPressedConfirm(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSEDCONFIRM_OFFSET))(this, a1, a2);
		}

		::System::Void CreateParentalConsentDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge* get__AgeGateParentalConsentRequiredDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentRequiredDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentRequiredDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTREQUIREDDIALOGBRIDGE_OFFSET))(a1);
		}

		::System::Void CreateAgeGateParentalConsentRequiredDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTREQUIREDDIALOG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge* get__AgeGateParentalConsentSentDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentSentDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentSentDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTSENTDIALOGBRIDGE_OFFSET))(a1);
		}

		::System::Void CreateAgeGateParentalConsentSentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTSENTDIALOG_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge* get__AgeGateParentalConsentProcessDialogBridge()
		{
			return ((::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_GET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET))();
		}

		static ::System::Void set__AgeGateParentalConsentProcessDialogBridge(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::Win::OS::AgeGatePayValidationManager_AgeGateParentalConsentProcessDialogBridge*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_SET__AGEGATEPARENTALCONSENTPROCESSDIALOGBRIDGE_OFFSET))(a1);
		}

		::System::Void CreateAgeGateParentalConsentProcessDialog(::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPARENTALCONSENTPROCESSDIALOG_OFFSET))(this, a1);
		}

		::System::Void CreateAgeGatePaymentErrorDialog(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER_CREATEAGEGATEPAYMENTERRORDIALOG_OFFSET))(this, a1);
		}

		::System::Void _CreateAgeGatePaymentErrorDialog_b__27_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_0_OFFSET))(this, a1);
		}

		::System::Void _CreateAgeGatePaymentErrorDialog_b__27_1(::MiHoYo::SDK::CallbackModel_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CallbackModel_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OS_AGEGATEPAYVALIDATIONMANAGER__CREATEAGEGATEPAYMENTERRORDIALOG_B__27_1_OFFSET))(this, a1);
		}
	};
}
