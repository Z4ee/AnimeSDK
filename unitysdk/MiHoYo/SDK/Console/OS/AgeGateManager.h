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

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1BDB7E30)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x1BDBA660)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET UNITYSDK_OFFSET(0x1BDBB470)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1BDB6510)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB86D0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1BDBA7F0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ENDAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB8780)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x1BDB6520)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1BDBABC0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BDB6A10)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1BDB7510)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1BDB6F20)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x1BDBA1A0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_LOGAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB75C0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1BDBAD50)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEGENERALERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1BDBAE90)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x1BDBD150)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x1BDBCF80)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x1BDB8830)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET UNITYSDK_OFFSET(0x1BDBAFD0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDBB100)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BDBBFB0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDBBFC0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x1BDBBEE0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1BDBCAF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1BDBC4F0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1BDBC2D0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET UNITYSDK_OFFSET(0x1BDB8250)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x1BDB9090)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET UNITYSDK_OFFSET(0x1BDB7C50)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1BDB7AF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET UNITYSDK_OFFSET(0x1BDB7940)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET UNITYSDK_OFFSET(0x1BDB77E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB6B20)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_STARTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB6DB0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_TRYSHIELDAGEGATE_OFFSET UNITYSDK_OFFSET(0x1BDB68E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDBD320)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CONTINUEAGEGATE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1BDBD420)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDB7DF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_0_OFFSET UNITYSDK_OFFSET(0x1BDBD4D0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_1_OFFSET UNITYSDK_OFFSET(0x1BDBD5B0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_4_OFFSET UNITYSDK_OFFSET(0x1BDBD700)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__STARTAGEGATE_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BDBD370)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 21146;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ageGateReportType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x98D0);
		}
		static ::System::String** StaticGet_extractedPayload()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x98D8);
		}
		static ::MiHoYo::SDK::Console::OS::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x98E0);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		// static const ::System::String* AgeGateType; // 0x0
		::System::Action_1<::System::String*>* ResultCallback; // 0x10
		::System::String* Payload; // 0x18
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckRegionCanAutoRegister(::System::Int32 retcode)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET))(retcode);
		}

		static ::System::Void ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* headers)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(headers);
		}

		static ::System::Boolean TryShieldAgeGate(::System::Action_1<::System::String*>* resultCallback)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_TRYSHIELDAGEGATE_OFFSET))(resultCallback);
		}

		static ::System::Boolean HandleAgeGateFromErrorCode(::System::Int32 retcode, ::System::Action_1<::System::String*>* resultCallback)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET))(retcode, resultCallback);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void LogAgeGate(::System::String* msg, ::System::Int32 code, ::System::Boolean report)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_LOGAGEGATE_OFFSET))(this, msg, code, report);
		}

		::System::Void ReportAgeGate(::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_OFFSET))(this, type, stage);
		}

		::System::Void ReportAgeGate_1(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGateParentalProcess(::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET))(this, type, stage);
		}

		::System::Void ReportAgeGateParentalProcess_1(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET))(this, stage);
		}

		::System::Void ReportAgeGateAgeAppeal(::MiHoYo::SDK::ReportStage stage)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET))(this, stage);
		}

		static ::MiHoYo::SDK::Console::OS::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* BuildAgeAppealUrl(::System::String* agegatePayload)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET))(this, agegatePayload);
		}

		::System::Void OpenAgeAppealWeb(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET))(this, callback);
		}

		::System::Boolean StartAgeGate(::System::String* payload, ::MiHoYo::SDK::AgeGateFlowType type, ::System::Action_1<::System::String*>* resultCallback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_STARTAGEGATE_OFFSET))(this, payload, type, resultCallback);
		}

		::System::Void ContinueAgeGate(::System::String* ticketId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this, ticketId);
		}

		::System::Void EndAgeGate(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ENDAGEGATE_OFFSET))(this, success);
		}

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, response);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, response);
		}

		::System::Void ProcessAgeGateTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetAgeGateReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET))(this);
		}

		::System::Int32 CalculateDaysFromExpiredTime(::System::Int64 expireTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET))(this, expireTime);
		}

		::System::Void CreateParentalConsentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this);
		}

		::System::Void OnAgeGateErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateGeneralErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEGENERALERRORDIALOG_OFFSET))(this, dialog);
		}

		::System::Void OnBirthdayInputClosed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnBirthdayInputNextButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* dialog, ::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET))(this, dialog, year, month);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET))(this, dialog, email);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog, ::System::String* email)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, dialog, email);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, dialog);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::System::Boolean isCooldown)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET))(this, dialog, isCooldown);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog, ::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, dialog, response);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, dialog);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* dialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, dialog);
		}

		::System::Boolean CheckAgeGateAge(::System::Int32 month, ::System::Int32 year)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET))(this, month, year);
		}

		::System::Void _StartAgeGate_b__25_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__STARTAGEGATE_B__25_0_OFFSET))(this, response);
		}

		::System::Void _ContinueAgeGate_b__26_0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CONTINUEAGEGATE_B__26_0_OFFSET))(this, response);
		}

		::System::Void _ProcessAgeGateTicket_b__30_0(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_0_OFFSET))(this, currentDialog);
		}

		::System::Void _ProcessAgeGateTicket_b__30_1(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_1_OFFSET))(this, currentDialog);
		}

		::System::Void _ProcessAgeGateTicket_b__30_4(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* currentDialog)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_4_OFFSET))(this, currentDialog);
		}
	};
}
