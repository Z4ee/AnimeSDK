#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/AgeGateFlowType.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AgeGateTicketModel; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateAgeAppealOptionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalConsentProcessDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateParentalPermissionDialog; }
namespace MiHoYo::SDK::UI::OS { class IAgeGateVerificationDialog; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1C8F77A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x1C8F9740)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET UNITYSDK_OFFSET(0x1C8FA2C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1C8F5FF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C8F7C80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1C8F98D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ENDAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C8F7D40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x1C8F6000)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_AGEGATEREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1C8F5F90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C8F6980)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1C8F6FF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1C8F63C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x1C8F9420)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_LOGAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C8F70A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1C8F9D10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1C8F9BD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x1C8FB3F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x1C8FB220)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x1C8F7DF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET UNITYSDK_OFFSET(0x1C8F9E50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1C8F9F80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C8FA6C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1C8FA6D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x1C8FA5F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C8FAE00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1C8FABA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1C8FAA00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET UNITYSDK_OFFSET(0x1C8F7BC0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x1C8F8650)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET UNITYSDK_OFFSET(0x1C8F75C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1C8F7460)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET UNITYSDK_OFFSET(0x1C8F72B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET UNITYSDK_OFFSET(0x1C8F6D20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C8F6A90)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_STARTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1C8F6E80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8FB5C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CONTINUEAGEGATE_B__27_0_OFFSET UNITYSDK_OFFSET(0x1C8FB6C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8F7760)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_0_OFFSET UNITYSDK_OFFSET(0x1C8FB770)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_1_OFFSET UNITYSDK_OFFSET(0x1C8FB850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_4_OFFSET UNITYSDK_OFFSET(0x1C8FBAB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__STARTAGEGATE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1C8FB610)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 20814;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xB580);
		}
		static ::System::String** StaticGet_extractedAgeGateType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xB588);
		}
		static ::System::String** StaticGet_extractedPayload()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0xB590);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		// static const ::System::String* AgeGateType; // 0x0
		::System::String* Payload; // 0x10
		::System::Action_1<::System::String*>* ResultCallback; // 0x18
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::String* get_AgeGateReportType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_AGEGATEREPORTTYPE_OFFSET))();
		}

		static ::System::Boolean CheckRegionCanAutoRegister(::System::Int32 retcode)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET))(retcode);
		}

		static ::System::Void ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(headers);
		}

		static ::System::Boolean HandleAgeGateFromErrorCode(::System::Int32 retcode, ::System::Action_1<::System::String*>* resultCallback)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET))(retcode, resultCallback);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void LogAgeGate(::System::String* msg, ::System::Int32 code, ::System::Boolean report)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_LOGAGEGATE_OFFSET))(this, msg, code, report);
		}

		::System::Void ReportAgeGate(::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_OFFSET))(this, type, stage);
		}

		::System::Void ReportAgeGate_1(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGateParentalProcess(::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET))(this, type, stage);
		}

		::System::Void ReportAgeGateParentalProcess_1(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGateAgeAppeal(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET))(this, stage);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* BuildAgeAppealUrl(::System::String* agegatePayload)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET))(this, agegatePayload);
		}

		::System::Void OpenAgeAppealWeb(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET))(this, callback);
		}

		::System::Boolean StartAgeGate(::System::String* payload, ::MiHoYo::SDK::AgeGateFlowType type, ::System::Action_1<::System::String*>* resultCallback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_STARTAGEGATE_OFFSET))(this, payload, type, resultCallback);
		}

		::System::Void ContinueAgeGate(::System::String* ticketId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this, ticketId);
		}

		::System::Void EndAgeGate(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ENDAGEGATE_OFFSET))(this, success);
		}

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, response);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, response);
		}

		::System::Void ProcessAgeGateTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET))(this);
		}

		::System::Int32 CalculateDaysFromExpiredTime(::System::Int64 expireTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET))(this, expireTime);
		}

		::System::Void CreateParentalConsentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this);
		}

		::System::Void OnAgeGateErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateErrorDialog_1(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_1_OFFSET))(this, dialog);
		}

		::System::Void OnBirthdayInputClosed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnBirthdayInputNextButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog, ::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET))(this, dialog, year, month);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET))(this, dialog, email);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, dialog, email);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, dialog);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::System::Boolean isCooldown)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET))(this, dialog, isCooldown);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, dialog, response);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, dialog);
		}

		::System::Boolean CheckAgeGateAge(::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET))(this, month, year);
		}

		::System::Void _StartAgeGate_b__26_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__STARTAGEGATE_B__26_0_OFFSET))(this, response);
		}

		::System::Void _ContinueAgeGate_b__27_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CONTINUEAGEGATE_B__27_0_OFFSET))(this, response);
		}

		::System::Void _ProcessAgeGateTicket_b__31_0(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_0_OFFSET))(this, currentDialog);
		}

		::System::Void _ProcessAgeGateTicket_b__31_1(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_1_OFFSET))(this, currentDialog);
		}

		::System::Void _ProcessAgeGateTicket_b__31_4(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* errorDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_4_OFFSET))(this, errorDialog);
		}
	};
}
