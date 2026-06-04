#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GameReportModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ReportInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_REPORTMANAGER_CHECKREPORT_OFFSET UNITYSDK_OFFSET(0x18411520)
#define MIHOYO_SDK_REPORTMANAGER_CLOUDREPORT_OFFSET UNITYSDK_OFFSET(0x18411AC0)
#define MIHOYO_SDK_REPORTMANAGER_GETBASEMODEL_OFFSET UNITYSDK_OFFSET(0x184131D0)
#define MIHOYO_SDK_REPORTMANAGER_GETMODEL_OFFSET UNITYSDK_OFFSET(0x18410BB0)
#define MIHOYO_SDK_REPORTMANAGER_GETPLATFORM_OFFSET UNITYSDK_OFFSET(0x18413390)
#define MIHOYO_SDK_REPORTMANAGER_GETREPORTCONTENT_OFFSET UNITYSDK_OFFSET(0x18412AF0)
#define MIHOYO_SDK_REPORTMANAGER_MIHOYOCLOUDREPORT_OFFSET UNITYSDK_OFFSET(0x18411D50)
#define MIHOYO_SDK_REPORTMANAGER_ONREPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0x184134D0)
#define MIHOYO_SDK_REPORTMANAGER_REPORTCACHEDTELEMETRYREPORT_OFFSET UNITYSDK_OFFSET(0x18413670)
#define MIHOYO_SDK_REPORTMANAGER_REPORT_OFFSET UNITYSDK_OFFSET(0x18410B00)
#define MIHOYO_SDK_REPORTMANAGER_SENDREPORTREQUEST_OFFSET UNITYSDK_OFFSET(0x18412330)
#define MIHOYO_SDK_REPORTMANAGER_SENDREPORT_OFFSET UNITYSDK_OFFSET(0x18412030)
#define MIHOYO_SDK_REPORTMANAGER_SETREPORTINFO_OFFSET UNITYSDK_OFFSET(0x18412000)
#define MIHOYO_SDK_REPORTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18413A70)
#define MIHOYO_SDK_REPORTMANAGER__CHECKREPORT_B__19_0_OFFSET UNITYSDK_OFFSET(0x18413B10)
#define MIHOYO_SDK_REPORTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18413A00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ReportManager_TypeDefinitionIndex = 8008;

	class ReportManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Version()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0xE480);
		}
		static ::MiHoYo::SDK::ReportManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ReportManager**)Il2CppClass::FromTypeDefinitionIndex(ReportManager_TypeDefinitionIndex)->GetStaticField(0xE488);
		}
		// static const ::System::String* ReportSecret; // 0x0
		::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportList; // 0x10
		::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* reportingList; // 0x18
		::MiHoYo::SDK::ReportInfo* baseReportInfo; // 0x20
		::System::String* reportUrl; // 0x28
		::System::Boolean isSending; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Report(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_REPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CloudReport(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_CLOUDREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MiHoYoCloudReport(::System::Int32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_MIHOYOCLOUDREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetReportInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SETREPORTINFO_OFFSET))(this, a1);
		}

		::System::Void SendReport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SENDREPORT_OFFSET))(this);
		}

		::System::Void SendReportRequest(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_SENDREPORTREQUEST_OFFSET))(this, a1);
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

		::System::String* GetReportContent(::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::GameReportModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_GETREPORTCONTENT_OFFSET))(this, a1);
		}

		::System::Void OnReportCallback(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_ONREPORTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void CheckReport(::MiHoYo::SDK::GameReportModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameReportModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_CHECKREPORT_OFFSET))(this, a1);
		}

		::System::Void ReportCachedTelemetryReport(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER_REPORTCACHEDTELEMETRYREPORT_OFFSET))(this, a1);
		}

		::System::Void _CheckReport_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTMANAGER__CHECKREPORT_B__19_0_OFFSET))(this);
		}
	};
}
