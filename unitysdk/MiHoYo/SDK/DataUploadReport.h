#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_DATAUPLOADREPORT_CHECKTELEMETRYENABLE_OFFSET UNITYSDK_OFFSET(0x17520980)
#define MIHOYO_SDK_DATAUPLOADREPORT_REPORT_OFFSET UNITYSDK_OFFSET(0x17520A40)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTART_OFFSET UNITYSDK_OFFSET(0x17520B90)
#define MIHOYO_SDK_DATAUPLOADREPORT_TELEMETRYSTOP_OFFSET UNITYSDK_OFFSET(0x17520E60)
#define MIHOYO_SDK_DATAUPLOADREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x17520FF0)
#define MIHOYO_SDK_DATAUPLOADREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x17520FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DataUploadReport_TypeDefinitionIndex = 7017;

	class DataUploadReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::DataUploadReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::DataUploadReport**)Il2CppClass::FromTypeDefinitionIndex(DataUploadReport_TypeDefinitionIndex)->GetStaticField(0x17AA0);
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
