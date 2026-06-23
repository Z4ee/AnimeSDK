#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ActionIdType.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ReportActionId.h"
#include "unitysdk/MiHoYo/SDK/ReportStage.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class SDKReportModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_SDKREPORT_ADDOVERSEASCBODYDATA_OFFSET UNITYSDK_OFFSET(0x1B33DAE0)
#define MIHOYO_SDK_SDKREPORT_BUILDCBODY_OFFSET UNITYSDK_OFFSET(0x1B33E0D0)
#define MIHOYO_SDK_SDKREPORT_CHECKREPORT_OFFSET UNITYSDK_OFFSET(0x1B33FC80)
#define MIHOYO_SDK_SDKREPORT_CNPAYPLATREPORT_OFFSET UNITYSDK_OFFSET(0x1B340240)
#define MIHOYO_SDK_SDKREPORT_GETBASEMODEL_OFFSET UNITYSDK_OFFSET(0x1B33EC60)
#define MIHOYO_SDK_SDKREPORT_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x1B3416F0)
#define MIHOYO_SDK_SDKREPORT_GETREPORTCONTENT_OFFSET UNITYSDK_OFFSET(0x1B341220)
#define MIHOYO_SDK_SDKREPORT_GETREPORTDAYS_OFFSET UNITYSDK_OFFSET(0x1B320A30)
#define MIHOYO_SDK_SDKREPORT_GETSDKREPORTMODELSTRING_OFFSET UNITYSDK_OFFSET(0x1B3402B0)
#define MIHOYO_SDK_SDKREPORT_ONREPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B3413F0)
#define MIHOYO_SDK_SDKREPORT_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B3415A0)
#define MIHOYO_SDK_SDKREPORT_PERFORMANCEREPORT_OFFSET UNITYSDK_OFFSET(0x1B3401A0)
#define MIHOYO_SDK_SDKREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x1B33E6F0)
#define MIHOYO_SDK_SDKREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x1B33D530)
#define MIHOYO_SDK_SDKREPORT_REPORT_3_OFFSET UNITYSDK_OFFSET(0x1B340090)
#define MIHOYO_SDK_SDKREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1B30FAA0)
#define MIHOYO_SDK_SDKREPORT_SENDFAILED_OFFSET UNITYSDK_OFFSET(0x1B3414A0)
#define MIHOYO_SDK_SDKREPORT_SENDREPORTREQUEST_OFFSET UNITYSDK_OFFSET(0x1B340A50)
#define MIHOYO_SDK_SDKREPORT_SENDREPORT_OFFSET UNITYSDK_OFFSET(0x1B3407E0)
#define MIHOYO_SDK_SDKREPORT_SETREPORTDAYS_OFFSET UNITYSDK_OFFSET(0x1B341600)
#define MIHOYO_SDK_SDKREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3418C0)
#define MIHOYO_SDK_SDKREPORT__CHECKREPORT_B__18_0_OFFSET UNITYSDK_OFFSET(0x1B3419D0)
#define MIHOYO_SDK_SDKREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3417F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReport_TypeDefinitionIndex = 19840;

	class SDKReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SDKReport**)Il2CppClass::FromTypeDefinitionIndex(SDKReport_TypeDefinitionIndex)->GetStaticField(0x9080);
		}
		// static const ::System::String* MIHOYO_SDK_REPORT_DAYS; // 0x0
		// static const ::System::String* ReportSecret; // 0x0
		// static const ::System::Int32 ONCE_SEND_MAX_COUNT = 0x64; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportList; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportingList; // 0x18
		::System::String* reportUrl; // 0x20
		::System::Int32 days; // 0x28
		::System::Boolean isSending; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT__CCTOR_OFFSET))();
		}

		::System::Void Report(::MiHoYo::SDK::ActionIdType actionType, ::MiHoYo::SDK::ReportType type, ::MiHoYo::SDK::ReportStage stage, ::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionIdType, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_OFFSET))(this, actionType, type, stage, cBody);
		}

		::System::Void AddOverseasCBodyData(::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ADDOVERSEASCBODYDATA_OFFSET))(this, cBody);
		}

		::System::Void BuildCBody(::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_BUILDCBODY_OFFSET))(this, cBody);
		}

		::System::Void Report_1(::System::Int32 actionType, ::System::String* actionName, ::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_1_OFFSET))(this, actionType, actionName, cBody);
		}

		::System::Void Report_2(::MiHoYo::SDK::ActionIdType actionType, ::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionIdType, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_2_OFFSET))(this, actionType, cBody);
		}

		::System::Void Report_3(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId actionId, ::MiHoYo::SDK::JSONObject* cBody)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_3_OFFSET))(this, actionId, cBody);
		}

		::System::Void PerformanceReport(::System::String* logInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_PERFORMANCEREPORT_OFFSET))(this, logInfo);
		}

		::System::Void CNPayPlatReport(::System::String* logInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_CNPAYPLATREPORT_OFFSET))(this, logInfo);
		}

		::System::String* GetSDKReportModelString(::MiHoYo::SDK::SDKReportModel* model)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SDKReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETSDKREPORTMODELSTRING_OFFSET))(this, model);
		}

		::System::Void CheckReport(::MiHoYo::SDK::SDKReportModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SDKReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_CHECKREPORT_OFFSET))(this, model);
		}

		::MiHoYo::SDK::SDKReportModel* GetBaseModel()
		{
			return ((::MiHoYo::SDK::SDKReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETBASEMODEL_OFFSET))(this);
		}

		::System::Void SendReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDREPORT_OFFSET))(this);
		}

		::System::String* GetReportContent(::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportingList)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETREPORTCONTENT_OFFSET))(this, reportingList);
		}

		::System::Void SendReportRequest(::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportingList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDREPORTREQUEST_OFFSET))(this, reportingList);
		}

		::System::Void OnReportCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ONREPORTCALLBACK_OFFSET))(this, response);
		}

		::System::Void OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ONTIMEOUT_OFFSET))(this);
		}

		::System::Void SendFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDFAILED_OFFSET))(this);
		}

		::System::Void SetReportDays(::System::String* reportValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SETREPORTDAYS_OFFSET))(this, reportValue);
		}

		static ::System::String* GetPlatform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETPLATFORM_OFFSET))();
		}

		::System::Int32 GetReportDays()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETREPORTDAYS_OFFSET))(this);
		}

		::System::Void _CheckReport_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT__CHECKREPORT_B__18_0_OFFSET))(this);
		}
	};
}
