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

#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x1B9C8BA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x1B9CB130)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET UNITYSDK_OFFSET(0x1B9CBD40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1B9C73E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B9C8FB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1B9CB360)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ENDAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B9C9090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x1B9C73F0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_AGEGATEREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x1B9C7380)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B9C7EE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x1B9C8480)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x1B9C7840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x1B9CAEF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_LOGAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B9C8530)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_1_OFFSET UNITYSDK_OFFSET(0x1B9CB6A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x1B9CB510)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x1B9CD4D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x1B9CD260)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x1B9C9140)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET UNITYSDK_OFFSET(0x1B9CB830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1B9CB9B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B9CC4C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1B9CC4D0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x1B9CC3A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B9CCD10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x1B9CCA50)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x1B9CC850)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET UNITYSDK_OFFSET(0x1B9C8EF0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x1B9C9B80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET UNITYSDK_OFFSET(0x1B9C8A40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET UNITYSDK_OFFSET(0x1B9C88E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET UNITYSDK_OFFSET(0x1B9C87A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET UNITYSDK_OFFSET(0x1B9C81A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B9C7FE0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_STARTAGEGATE_OFFSET UNITYSDK_OFFSET(0x1B9C8300)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9CD740)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CONTINUEAGEGATE_B__27_0_OFFSET UNITYSDK_OFFSET(0x1B9CD840)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9C8B80)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B9CD910)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_1_OFFSET UNITYSDK_OFFSET(0x1B9CDA40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_4_OFFSET UNITYSDK_OFFSET(0x1B9CDD10)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__STARTAGEGATE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B9CD770)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 8661;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_extractedPayload()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x19DA0);
		}
		static ::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x19DA8);
		}
		static ::System::String** StaticGet_extractedAgeGateType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x19DB0);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		// static const ::System::String* AgeGateType; // 0x0
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x10
		::System::Action_1<::System::String*>* ResultCallback; // 0x18
		::System::String* Payload; // 0x20

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

		static ::System::Boolean CheckRegionCanAutoRegister(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET))(a1);
		}

		static ::System::Void ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(a1);
		}

		static ::System::Boolean HandleAgeGateFromErrorCode(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET))(a1, a2);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void LogAgeGate(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_LOGAGEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReportAgeGate(::MiHoYo::SDK::ReportType a1, ::MiHoYo::SDK::ReportStage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAgeGate_1(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGateParentalProcess(::MiHoYo::SDK::ReportType a1, ::MiHoYo::SDK::ReportStage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAgeGateParentalProcess_1(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGateAgeAppeal(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* BuildAgeAppealUrl(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET))(this, a1);
		}

		::System::Void OpenAgeAppealWeb(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET))(this, a1);
		}

		::System::Boolean StartAgeGate(::System::String* a1, ::MiHoYo::SDK::AgeGateFlowType a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_STARTAGEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ContinueAgeGate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this, a1);
		}

		::System::Void EndAgeGate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ENDAGEGATE_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, a1);
		}

		::System::Void ProcessAgeGateTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET))(this);
		}

		::System::Int32 CalculateDaysFromExpiredTime(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET))(this, a1);
		}

		::System::Void CreateParentalConsentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this);
		}

		::System::Void OnAgeGateErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateErrorDialog_1(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_1_OFFSET))(this, a1);
		}

		::System::Void OnBirthdayInputClosed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnBirthdayInputNextButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, a1, a2);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::MiHoYo::SDK::NetworkResponseModelEx* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, a1);
		}

		::System::Boolean CheckAgeGateAge(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _StartAgeGate_b__26_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__STARTAGEGATE_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _ContinueAgeGate_b__27_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__CONTINUEAGEGATE_B__27_0_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__31_0(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_0_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__31_1(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_1_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__31_4(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__31_4_OFFSET))(this, a1);
		}
	};
}
