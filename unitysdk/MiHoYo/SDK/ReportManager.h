#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GameReportModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ReportInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_REPORTMANAGER_CHECKREPORT_OFFSET UNITYSDK_OFFSET(0x19CA9090)
#define MIHOYO_SDK_REPORTMANAGER_CLOUDREPORT_OFFSET UNITYSDK_OFFSET(0x19CA9610)
#define MIHOYO_SDK_REPORTMANAGER_GETBASEMODEL_OFFSET UNITYSDK_OFFSET(0x19CAAD90)
#define MIHOYO_SDK_REPORTMANAGER_GETMODEL_OFFSET UNITYSDK_OFFSET(0x19CA86B0)
#define MIHOYO_SDK_REPORTMANAGER_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x19CAAF10)
#define MIHOYO_SDK_REPORTMANAGER_GETREPORTCONTENT_OFFSET UNITYSDK_OFFSET(0x19CAABB0)
#define MIHOYO_SDK_REPORTMANAGER_MIHOYOCLOUDREPORT_OFFSET UNITYSDK_OFFSET(0x19CA9A70)
#define MIHOYO_SDK_REPORTMANAGER_ONREPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x19CAB050)
#define MIHOYO_SDK_REPORTMANAGER_REPORTCACHEDTELEMETRYREPORT_OFFSET UNITYSDK_OFFSET(0x19CAB240)
#define MIHOYO_SDK_REPORTMANAGER_REPORT_OFFSET UNITYSDK_OFFSET(0x19CA8600)
#define MIHOYO_SDK_REPORTMANAGER_SENDREPORTREQUEST_OFFSET UNITYSDK_OFFSET(0x19CAA290)
#define MIHOYO_SDK_REPORTMANAGER_SENDREPORT_OFFSET UNITYSDK_OFFSET(0x19CA9F50)
#define MIHOYO_SDK_REPORTMANAGER_SETREPORTINFO_OFFSET UNITYSDK_OFFSET(0x19CA9EF0)
#define MIHOYO_SDK_REPORTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CAB710)
#define MIHOYO_SDK_REPORTMANAGER__CHECKREPORT_B__19_0_OFFSET UNITYSDK_OFFSET(0x19CAB780)
#define MIHOYO_SDK_REPORTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAB610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ReportManager_TypeDefinitionIndex = 18931;

	class ReportManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0xA590);
		}
		static ::MiHoYo::SDK::ReportManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ReportManager**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0xA598);
		}
		// static const ::System::String* ReportSecret; // 0x0
		::System::String* reportUrl; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportList; // 0x18
		::MiHoYo::SDK::ReportInfo* baseReportInfo; // 0x20
		::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportingList; // 0x28
		::System::Boolean isSending; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Report(::System::Int32 actionId, ::System::String* actionName, ::System::String* cBody, ::System::String* level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_REPORT_OFFSET))(this, actionId, actionName, cBody, level);
		}

		::System::Void CloudReport(::System::Int32 actionId, ::System::String* actionName, ::System::String* cBody, ::System::String* level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_CLOUDREPORT_OFFSET))(this, actionId, actionName, cBody, level);
		}

		::System::Void MiHoYoCloudReport(::System::Int32 actionId, ::System::String* actionName, ::System::String* cBody, ::System::String* level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_MIHOYOCLOUDREPORT_OFFSET))(this, actionId, actionName, cBody, level);
		}

		::System::Void SetReportInfo(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SETREPORTINFO_OFFSET))(this, jsonString);
		}

		::System::Void SendReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SENDREPORT_OFFSET))(this);
		}

		::System::Void SendReportRequest(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportingList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SENDREPORTREQUEST_OFFSET))(this, reportingList);
		}

		::MiHoYo::SDK::GameReportModel* GetBaseModel()
		{
			return ((::MiHoYo::SDK::GameReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_GETBASEMODEL_OFFSET))(this);
		}

		::MiHoYo::SDK::GameReportModel* GetModel()
		{
			return ((::MiHoYo::SDK::GameReportModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_GETMODEL_OFFSET))(this);
		}

		::System::String* GetPlatform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_GETPLATFORM_OFFSET))(this);
		}

		::System::String* GetReportContent(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportingList)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_GETREPORTCONTENT_OFFSET))(this, reportingList);
		}

		::System::Void OnReportCallback(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_ONREPORTCALLBACK_OFFSET))(this, response);
		}

		::System::Void CheckReport(::MiHoYo::SDK::GameReportModel* model)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_CHECKREPORT_OFFSET))(this, model);
		}

		::System::Void ReportCachedTelemetryReport(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_REPORTCACHEDTELEMETRYREPORT_OFFSET))(this, url);
		}

		::System::Void _CheckReport_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CHECKREPORT_B__19_0_OFFSET))(this);
		}
	};
}
