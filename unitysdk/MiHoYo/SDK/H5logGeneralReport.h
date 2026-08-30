#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/H5logGeneralReport_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORTASYNC_OFFSET UNITYSDK_OFFSET(0x16AA6690)
#define MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORT_OFFSET UNITYSDK_OFFSET(0x16AA6250)
#define MIHOYO_SDK_H5LOGGENERALREPORT_REPORTINNER_OFFSET UNITYSDK_OFFSET(0x16AA6480)
#define MIHOYO_SDK_H5LOGGENERALREPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AA6810)
#define MIHOYO_SDK_H5LOGGENERALREPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA6800)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int H5logGeneralReport_TypeDefinitionIndex = 46932;

	class H5logGeneralReport : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::H5logGeneralReport** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::H5logGeneralReport**)Il2CppClass::FromTypeDefinitionIndex(H5logGeneralReport_TypeDefinitionIndex)->GetStaticField(0x47FB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT__CCTOR_OFFSET))();
		}

		::System::Void LogReport(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::H5logGeneralReport_LogLevel a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LogReportAsync(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::H5logGeneralReport_LogLevel a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_LOGREPORTASYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReportInner(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::H5logGeneralReport_LogLevel a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::H5logGeneralReport_LogLevel, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_H5LOGGENERALREPORT_REPORTINNER_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
