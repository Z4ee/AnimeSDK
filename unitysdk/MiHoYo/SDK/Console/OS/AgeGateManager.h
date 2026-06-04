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

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET UNITYSDK_OFFSET(0x18251660)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET UNITYSDK_OFFSET(0x182538F0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET UNITYSDK_OFFSET(0x182544A0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET UNITYSDK_OFFSET(0x1824FE90)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET UNITYSDK_OFFSET(0x18251A90)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET UNITYSDK_OFFSET(0x18253A30)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ENDAGEGATE_OFFSET UNITYSDK_OFFSET(0x18251B70)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET UNITYSDK_OFFSET(0x1824FEA0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET UNITYSDK_OFFSET(0x18253E60)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18250420)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_RSAKEY_OFFSET UNITYSDK_OFFSET(0x18250DE0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET UNITYSDK_OFFSET(0x18250860)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET UNITYSDK_OFFSET(0x18253680)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_LOGAGEGATE_OFFSET UNITYSDK_OFFSET(0x18250E90)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18253FF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEGENERALERRORDIALOG_OFFSET UNITYSDK_OFFSET(0x18254080)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET UNITYSDK_OFFSET(0x18255A80)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET UNITYSDK_OFFSET(0x182558B0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET UNITYSDK_OFFSET(0x18251C20)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET UNITYSDK_OFFSET(0x18254110)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x182541A0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18254BE0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x18254BF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET UNITYSDK_OFFSET(0x18254B00)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18255400)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET UNITYSDK_OFFSET(0x18255160)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET UNITYSDK_OFFSET(0x18254F10)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET UNITYSDK_OFFSET(0x182519B0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET UNITYSDK_OFFSET(0x182527E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET UNITYSDK_OFFSET(0x18251500)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET UNITYSDK_OFFSET(0x182513A0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET UNITYSDK_OFFSET(0x18251260)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET UNITYSDK_OFFSET(0x18251100)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_OFFSET UNITYSDK_OFFSET(0x18250520)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_STARTAGEGATE_OFFSET UNITYSDK_OFFSET(0x182506E0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_TRYSHIELDAGEGATE_OFFSET UNITYSDK_OFFSET(0x182502F0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18255C50)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CONTINUEAGEGATE_B__26_0_OFFSET UNITYSDK_OFFSET(0x18255D60)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18251640)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_0_OFFSET UNITYSDK_OFFSET(0x18255E40)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_1_OFFSET UNITYSDK_OFFSET(0x18255E80)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_4_OFFSET UNITYSDK_OFFSET(0x18255F60)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__STARTAGEGATE_B__25_0_OFFSET UNITYSDK_OFFSET(0x18255C80)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager_TypeDefinitionIndex = 8714;

	class AgeGateManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_ageGateReportType()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x10650);
		}
		static ::System::String** StaticGet_extractedPayload()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x10658);
		}
		static ::MiHoYo::SDK::Console::OS::AgeGateManager** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Console::OS::AgeGateManager**)Il2CppClass::FromTypeDefinitionIndex(AgeGateManager_TypeDefinitionIndex)->GetStaticField(0x10660);
		}
		// static const ::System::String* TicketIdKey; // 0x0
		// static const ::System::String* AgeGateType; // 0x0
		::System::Action_1<::System::String*>* ResultCallback; // 0x10
		::MiHoYo::SDK::AgeGateTicketModel* AgeGateTicket; // 0x18
		::System::String* Payload; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean CheckRegionCanAutoRegister(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKREGIONCANAUTOREGISTER_OFFSET))(a1);
		}

		static ::System::Void ExtractAgeGatePayloadFromHeaders(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_EXTRACTAGEGATEPAYLOADFROMHEADERS_OFFSET))(a1);
		}

		static ::System::Boolean TryShieldAgeGate(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_TRYSHIELDAGEGATE_OFFSET))(a1);
		}

		static ::System::Boolean HandleAgeGateFromErrorCode(::System::Int32 a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATEFROMERRORCODE_OFFSET))(a1, a2);
		}

		static ::System::String* get_RSAKey()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_RSAKEY_OFFSET))();
		}

		::System::Void LogAgeGate(::System::String* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_LOGAGEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ReportAgeGate(::MiHoYo::SDK::ReportType a1, ::MiHoYo::SDK::ReportStage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAgeGate_1(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATE_1_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGateParentalProcess(::MiHoYo::SDK::ReportType a1, ::MiHoYo::SDK::ReportStage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_OFFSET))(this, a1, a2);
		}

		::System::Void ReportAgeGateParentalProcess_1(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEPARENTALPROCESS_1_OFFSET))(this, a1);
		}

		::System::Void ReportAgeGateAgeAppeal(::MiHoYo::SDK::ReportStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReportStage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_REPORTAGEGATEAGEAPPEAL_OFFSET))(this, a1);
		}

		static ::MiHoYo::SDK::Console::OS::AgeGateManager* get_Instance()
		{
			return ((::MiHoYo::SDK::Console::OS::AgeGateManager*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::String* BuildAgeAppealUrl(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_BUILDAGEAPPEALURL_OFFSET))(this, a1);
		}

		::System::Void OpenAgeAppealWeb(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_OPENAGEAPPEALWEB_OFFSET))(this, a1);
		}

		::System::Boolean StartAgeGate(::System::String* a1, ::MiHoYo::SDK::AgeGateFlowType a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::AgeGateFlowType, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_STARTAGEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ContinueAgeGate(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CONTINUEAGEGATE_OFFSET))(this, a1);
		}

		::System::Void EndAgeGate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ENDAGEGATE_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateTicketReceivedSuccess(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATETICKETRECEIVEDSUCCESS_OFFSET))(this, a1);
		}

		::System::Boolean HandleAgeGateTicketReceivedError(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_HANDLEAGEGATETICKETRECEIVEDERROR_OFFSET))(this, a1);
		}

		::System::Void ProcessAgeGateTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_PROCESSAGEGATETICKET_OFFSET))(this);
		}

		::MiHoYo::SDK::ReportType GetAgeGateReportType()
		{
			return ((::MiHoYo::SDK::ReportType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_GETAGEGATEREPORTTYPE_OFFSET))(this);
		}

		::System::Int32 CalculateDaysFromExpiredTime(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CALCULATEDAYSFROMEXPIREDTIME_OFFSET))(this, a1);
		}

		::System::Void CreateParentalConsentDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CREATEPARENTALCONSENTDIALOG_OFFSET))(this);
		}

		::System::Void OnAgeGateErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEERRORDIALOG_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateGeneralErrorDialog(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEGENERALERRORDIALOG_OFFSET))(this, a1);
		}

		::System::Void OnBirthdayInputClosed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnBirthdayInputNextButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateVerificationDialog*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONBIRTHDAYINPUTNEXTBUTTONPRESSED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnParentalConsentProcessClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTPROCESSCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnInputCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONINPUTCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnParentalConsentInputEmailButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONPARENTALCONSENTINPUTEMAILBUTTONPRESSED_OFFSET))(this, a1, a2);
		}

		::System::Void OnShowParentalControlProcessButtonPressed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONSHOWPARENTALCONTROLPROCESSBUTTONPRESSED_OFFSET))(this, a1);
		}

		::System::Void OnResendEmail(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAIL_OFFSET))(this, a1, a2);
		}

		::System::Void OnResendEmailCompleted(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1, ::MiHoYo::SDK::NetworkResponseModelEx* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONRESENDEMAILCOMPLETED_OFFSET))(this, a1, a2);
		}

		::System::Void OnAgeGateParentalConsentRequiredClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalPermissionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTREQUIREDCLOSED_OFFSET))(this, a1);
		}

		::System::Void OnAgeGateParentalConsentClosed(::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_ONAGEGATEPARENTALCONSENTCLOSED_OFFSET))(this, a1);
		}

		::System::Boolean CheckAgeGateAge(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER_CHECKAGEGATEAGE_OFFSET))(this, a1, a2);
		}

		::System::Void _StartAgeGate_b__25_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__STARTAGEGATE_B__25_0_OFFSET))(this, a1);
		}

		::System::Void _ContinueAgeGate_b__26_0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__CONTINUEAGEGATE_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__30_0(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_0_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__30_1(::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_1_OFFSET))(this, a1);
		}

		::System::Void _ProcessAgeGateTicket_b__30_4(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER__PROCESSAGEGATETICKET_B__30_4_OFFSET))(this, a1);
		}
	};
}
