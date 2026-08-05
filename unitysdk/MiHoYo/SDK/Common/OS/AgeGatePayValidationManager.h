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

#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ENDVPC_OFFSET UNITYSDK_OFFSET(0x1CAB9CD0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x1CAB9AD0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1CAB8780)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x1CABA790)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ISCONSOLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CAB8830)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_LOGAGEGATEPAY_OFFSET UNITYSDK_OFFSET(0x1CAB89C0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x1CABACE0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x1CABA960)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x1CABAB20)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET UNITYSDK_OFFSET(0x1CABC170)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x1CAB9F30)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CABBD70)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CABB7B0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENT_OFFSET UNITYSDK_OFFSET(0x1CABB550)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CABBD80)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x1CABC0A0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPREORDERVALIDATIONRESPONSE_OFFSET UNITYSDK_OFFSET(0x1CAB98E0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CABB100)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1CABAEA0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1CABBC10)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PREORDERVALIDATION_OFFSET UNITYSDK_OFFSET(0x1CAB9740)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x1CAB9D20)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYPARENTCONSENT_OFFSET UNITYSDK_OFFSET(0x1CAB8F00)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYRESTRICTION_OFFSET UNITYSDK_OFFSET(0x1CAB90A0)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYVALIDATION_OFFSET UNITYSDK_OFFSET(0x1CAB9240)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_STARTVPC_OFFSET UNITYSDK_OFFSET(0x1CAB9B80)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CABC720)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CABC640)
#define MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__STARTVPC_B__18_0_OFFSET UNITYSDK_OFFSET(0x1CABC740)

namespace MiHoYo::SDK::Common::OS
{
	inline static constexpr unsigned int AgeGatePayValidationManager_TypeDefinitionIndex = 20921;

	class AgeGatePayValidationManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Common::OS::AgeGatePayValidationManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGatePayValidationManager_TypeDefinitionIndex)->GetStaticField(0xA4D0);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		::System::String* PayPlat; // 0x10
		::System::String* Payload; // 0x18
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x20
		::System::String* PayLifeCycleId; // 0x28
		::System::Action_1<::System::Boolean>* ResultCallback; // 0x30
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

		::System::Void LogAgeGatePay(::System::String* msg, ::System::Int32 code, ::System::Boolean report)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_LOGAGEGATEPAY_OFFSET))(this, msg, code, report);
		}

		::System::Void ReportAgeGatePayParentConsent(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYPARENTCONSENT_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGatePayRestriction(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYRESTRICTION_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGatePayValidation(::MiHoYo::SDK::ReportStage stage, ::System::Int32 retcode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_REPORTAGEGATEPAYVALIDATION_OFFSET))(this, stage, retcode);
		}

		::System::Void PreOrderValidation(::System::String* payPlat, ::System::Action_1<::System::Boolean>* resultCallback, ::System::String* payLifeCycleId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_PREORDERVALIDATION_OFFSET))(this, payPlat, resultCallback, payLifeCycleId);
		}

		::System::Void OnPreOrderValidationResponse(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPREORDERVALIDATIONRESPONSE_OFFSET))(this, response);
		}

		::System::Boolean ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(this, headers);
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

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, response);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, response);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateParentalConsentSentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTSENTCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::System::Boolean isCooldown)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAIL_OFFSET))(this, dialog, isCooldown);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, dialog, response);
		}

		::System::Void OnParentalConsentEmailSent(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::System::Boolean isCooldown)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENT_OFFSET))(this, dialog, isCooldown);
		}

		::System::Void OnParentalConsentEmailSentCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTEMAILSENTCOMPLETED_OFFSET))(this, dialog, response);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, dialog);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONINPUTCOMPLETED_OFFSET))(this, dialog, email);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, dialog, email);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGatePaymentError(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER_ONAGEGATEPAYMENTERROR_OFFSET))(this, dialog);
		}

		::System::Void _StartVPC_b__18_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMON_OS_AGEGATEPAYVALIDATIONMANAGER__STARTVPC_B__18_0_OFFSET))(this, response);
		}
	};
}
