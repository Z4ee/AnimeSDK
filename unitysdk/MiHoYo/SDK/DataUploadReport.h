#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_DATAUPLOADREPORT_CHECKTELEMETRYENABLE_OFFSET UNITYSDK_OFFSET(0x1D4A8070)
#define MIHOYO_SDK_DATAUPLOADREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x1D4A8180)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTART_OFFSET UNITYSDK_OFFSET(0x1D4A82C0)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTOP_OFFSET UNITYSDK_OFFSET(0x1D4A8510)
#define MIHOYO_SDK_DATAUPLOADREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4A86D0)
#define MIHOYO_SDK_DATAUPLOADREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A86C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DataUploadReport_TypeDefinitionIndex = 20083;

	class DataUploadReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DataUploadReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DataUploadReport**)Il2CppClass::FromTypeDefinitionIndex(DataUploadReport_TypeDefinitionIndex)->GetStaticField(0xAC70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT__CCTOR_OFFSET))();
		}

		::System::Boolean CheckTelemetryEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_CHECKTELEMETRYENABLE_OFFSET))(this);
		}

		::System::Void Report(::System::String* jsonString, ::System::String* reportUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_REPORT_OFFSET))(this, jsonString, reportUrl);
		}

		::System::Void TelemetryStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTART_OFFSET))(this);
		}

		::System::Void TelemetryStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTOP_OFFSET))(this);
		}
	};
}
