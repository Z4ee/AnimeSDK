#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AgeGateTicketModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ENDVPC_OFFSET UNITYSDK_OFFSET(0x181FBB80)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x181FB900)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x181FA810)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x181FCA20)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x181FA8C0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_LOGAGEGATEPAY_OFFSET UNITYSDK_OFFSET(0x181FA9B0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x181FCF30)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x181FCBF0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x181FCD90)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET UNITYSDK_OFFSET(0x181FE430)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x181FBE60)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x181FE020)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x181FDA20)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENT_OFFSET UNITYSDK_OFFSET(0x181FD7A0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x181FE030)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x181FE350)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPREORDERVALIDATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x181FB620)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x181FD350)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x181FD0D0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x181FDE80)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PREORDERVALIDATION_OFFSET UNITYSDK_OFFSET(0x181FB470)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x181FBBA0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYPARENTCONSENT_OFFSET UNITYSDK_OFFSET(0x181FAE50)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYRESTRICTION_OFFSET UNITYSDK_OFFSET(0x181FAF90)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYVALIDATION_OFFSET UNITYSDK_OFFSET(0x181FB0D0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_STARTVPC_OFFSET UNITYSDK_OFFSET(0x181FBA20)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x181FE610)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x181FE530)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__STARTVPC_B__18_0_OFFSET UNITYSDK_OFFSET(0x181FE630)

namespace MiHoYo::SDK::Common::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 8489;

	class AgeGatePayValidationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xD040);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		::System::Action_1<::System::Boolean>* ResultCallback; // 0x10
		::System::String* Payload; // 0x18
		::System::String* PayLifeCycleId; // 0x20
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x28
		::System::String* PayPlat; // 0x30
		::System::Int32 ErrorCode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Boolean IsConsolePlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ISCONSOLEPLATFORM_OFFSET))(this);
		}

		::System::Void LogAgeGatePay(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_LOGAGEGATEPAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReportAgeGatePayParentConsent(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYPARENTCONSENT_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGatePayRestriction(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYRESTRICTION_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGatePayValidation(::MiHoYo::SDK::ReportStage a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYVALIDATION_OFFSET))(this, a1, a2);
		}

		::System::Void PreOrderValidation(::System::String* a1, ::System::Action_1<::System::Boolean>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PREORDERVALIDATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnPreOrderValidationResponse(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPREORDERVALIDATIONRESPONSE_OFFSET))(this, a1);
		}

		::System::Boolean ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(this, a1);
		}

		::System::Boolean StartVPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_STARTVPC_OFFSET))(this);
		}

		::System::Void EndVPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ENDVPC_OFFSET))(this);
		}

		::System::Void ProcessAgeGateTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PROCESSAGEGATETICKET_OFFSET))(this);
		}

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateParentalConsentSentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTSENTCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::MiHoYo::SDK::NetworkResponseModelEx* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentEmailSent(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentEmailSentCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::MiHoYo::SDK::NetworkResponseModelEx* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENTCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONINPUTCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnAgeGatePaymentError(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET))(this, a1);
		}

		::System::Void _StartVPC_b__18_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__STARTVPC_B__18_0_OFFSET))(this, a1);
		}
	};
}
