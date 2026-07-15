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

#define MIHOYO_SDK_SDKREPORT_ADDOVERSEASCBODYDATA_OFFSET UNITYSDK_OFFSET(0x17120E70)
#define MIHOYO_SDK_SDKREPORT_BUILDCBODY_OFFSET UNITYSDK_OFFSET(0x171212B0)
#define MIHOYO_SDK_SDKREPORT_CHECKREPORT_OFFSET UNITYSDK_OFFSET(0x17122990)
#define MIHOYO_SDK_SDKREPORT_CNPAYPLATREPORT_OFFSET UNITYSDK_OFFSET(0x17123040)
#define MIHOYO_SDK_SDKREPORT_GETBASEMODEL_OFFSET UNITYSDK_OFFSET(0x17121AB0)
#define MIHOYO_SDK_SDKREPORT_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x171245E0)
#define MIHOYO_SDK_SDKREPORT_GETREPORTCONTENT_OFFSET UNITYSDK_OFFSET(0x171241A0)
#define MIHOYO_SDK_SDKREPORT_GETREPORTDAYS_OFFSET UNITYSDK_OFFSET(0x17124740)
#define MIHOYO_SDK_SDKREPORT_GETSDKREPORTMODELSTRING_OFFSET UNITYSDK_OFFSET(0x171230B0)
#define MIHOYO_SDK_SDKREPORT_ONREPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17124340)
#define MIHOYO_SDK_SDKREPORT_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x171244A0)
#define MIHOYO_SDK_SDKREPORT_PERFORMANCEREPORT_OFFSET UNITYSDK_OFFSET(0x17122FA0)
#define MIHOYO_SDK_SDKREPORT_REPORT_1_OFFSET UNITYSDK_OFFSET(0x171216E0)
#define MIHOYO_SDK_SDKREPORT_REPORT_2_OFFSET UNITYSDK_OFFSET(0x171209F0)
#define MIHOYO_SDK_SDKREPORT_REPORT_3_OFFSET UNITYSDK_OFFSET(0x17122E30)
#define MIHOYO_SDK_SDKREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x171024B0)
#define MIHOYO_SDK_SDKREPORT_SENDFAILED_OFFSET UNITYSDK_OFFSET(0x171243A0)
#define MIHOYO_SDK_SDKREPORT_SENDREPORTREQUEST_OFFSET UNITYSDK_OFFSET(0x17123980)
#define MIHOYO_SDK_SDKREPORT_SENDREPORT_OFFSET UNITYSDK_OFFSET(0x17123650)
#define MIHOYO_SDK_SDKREPORT_SETREPORTDAYS_OFFSET UNITYSDK_OFFSET(0x17124550)
#define MIHOYO_SDK_SDKREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17124B00)
#define MIHOYO_SDK_SDKREPORT__CHECKREPORT_B__18_0_OFFSET UNITYSDK_OFFSET(0x17124B80)
#define MIHOYO_SDK_SDKREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x17124AA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKReport_TypeDefinitionIndex = 8031;

	class SDKReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::SDKReport**)Il2CppClass::FromTypeDefinitionIndex(SDKReport_TypeDefinitionIndex)->GetStaticField(0xD7F0);
		}
		// static const ::System::String* MIHOYO_SDK_REPORT_DAYS; // 0x0
		// static const ::System::String* ReportSecret; // 0x0
		// static const ::System::Int32 ONCE_SEND_MAX_COUNT = 0x64; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportList; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* reportingList; // 0x18
		::System::String* reportUrl; // 0x20
		::System::Boolean isSending; // 0x28
		::System::Int32 days; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT__CCTOR_OFFSET))();
		}

		::System::Void Report(::MiHoYo::SDK::ActionIdType a1, ::MiHoYo::SDK::ReportType a2, ::MiHoYo::SDK::ReportStage a3, ::MiHoYo::SDK::JSONObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionIdType, ::MiHoYo::SDK::ReportType, ::MiHoYo::SDK::ReportStage, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddOverseasCBodyData(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ADDOVERSEASCBODYDATA_OFFSET))(this, a1);
		}

		::System::Void BuildCBody(::MiHoYo::SDK::JSONObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_BUILDCBODY_OFFSET))(this, a1);
		}

		::System::Void Report_1(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Report_2(::MiHoYo::SDK::ActionIdType a1, ::MiHoYo::SDK::JSONObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ActionIdType, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_2_OFFSET))(this, a1, a2);
		}

		::System::Void Report_3(::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId a1, ::MiHoYo::SDK::JSONObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ReportActionId, ::MiHoYo::SDK::JSONObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_REPORT_3_OFFSET))(this, a1, a2);
		}

		::System::Void PerformanceReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_PERFORMANCEREPORT_OFFSET))(this, a1);
		}

		::System::Void CNPayPlatReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_CNPAYPLATREPORT_OFFSET))(this, a1);
		}

		::System::String* GetSDKReportModelString(::MiHoYo::SDK::SDKReportModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::SDKReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETSDKREPORTMODELSTRING_OFFSET))(this, a1);
		}

		::System::Void CheckReport(::MiHoYo::SDK::SDKReportModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SDKReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_CHECKREPORT_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::SDKReportModel* GetBaseModel()
		{
			return ((::MiHoYo::SDK::SDKReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETBASEMODEL_OFFSET))(this);
		}

		::System::Void SendReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDREPORT_OFFSET))(this);
		}

		::System::String* GetReportContent(::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_GETREPORTCONTENT_OFFSET))(this, a1);
		}

		::System::Void SendReportRequest(::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::SDKReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDREPORTREQUEST_OFFSET))(this, a1);
		}

		::System::Void OnReportCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ONREPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_ONTIMEOUT_OFFSET))(this);
		}

		::System::Void SendFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SENDFAILED_OFFSET))(this);
		}

		::System::Void SetReportDays(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKREPORT_SETREPORTDAYS_OFFSET))(this, a1);
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
