#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D2844E0)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D284520)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D283F20)
#define MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D283F00)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int PerformanceReporter_AutoReportHandler_TypeDefinitionIndex = 37673;

	class PerformanceReporter_AutoReportHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_INVOKE_OFFSET))(this, sender, stageName, result);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_BEGININVOKE_OFFSET))(this, sender, stageName, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_PERFORMANCEREPORTER_AUTOREPORTHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
