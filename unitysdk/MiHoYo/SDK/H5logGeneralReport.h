#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/H5logGeneralReport_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORTASYNC_OFFSET UNITYSDK_OFFSET(0x19FB4A50)
#define MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x19FB46D0)
#define MIHOYO_SDK_H5LOGGENERALREPORT_REPORTINNER_OFFSET UNITYSDK_OFFSET(0x19FB4820)
#define MIHOYO_SDK_H5LOGGENERALREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FB4BC0)
#define MIHOYO_SDK_H5LOGGENERALREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x19FB4BB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport_TypeDefinitionIndex = 35295;

	class H5logGeneralReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::H5logGeneralReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::H5logGeneralReport**)Il2CppClass::FromTypeDefinitionIndex(H5logGeneralReport_TypeDefinitionIndex)->GetStaticField(0x264F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT__CCTOR_OFFSET))();
		}

		::System::Void LogReport(::System::String* eventName, ::System::String* message, ::System::String* moduleType, ::MiHoYo::SDK::H5logGeneralReport_LogLevel logLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORT_OFFSET))(this, eventName, message, moduleType, logLevel);
		}

		::System::Void LogReportAsync(::System::String* eventName, ::System::String* message, ::System::String* moduleType, ::MiHoYo::SDK::H5logGeneralReport_LogLevel logLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORTASYNC_OFFSET))(this, eventName, message, moduleType, logLevel);
		}

		::System::Void ReportInner(::System::String* eventStr, ::System::String* msg, ::MiHoYo::SDK::H5logGeneralReport_LogLevel logLevel, ::System::Int32 code, ::System::String* moduleType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_REPORTINNER_OFFSET))(this, eventStr, msg, logLevel, code, moduleType);
		}
	};
}
