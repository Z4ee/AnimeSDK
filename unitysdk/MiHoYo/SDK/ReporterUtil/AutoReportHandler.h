#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace MiHoYo::SDK::ReporterUtil { template <typename T> class AnalyzerResult_1; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB28F740)
#define MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB28F780)
#define MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xB28F720)
#define MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB28F630)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int AutoReportHandler_TypeDefinitionIndex = 47110;

	class AutoReportHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::MiHoYo::SDK::ReporterUtil::AnalyzerResult_1<::System::Int64>*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_AUTOREPORTHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
