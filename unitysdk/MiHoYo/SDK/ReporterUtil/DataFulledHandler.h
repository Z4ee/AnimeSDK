#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18D1FAA0)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18D1FAE0)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18D1F520)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D1F510)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int DataFulledHandler_TypeDefinitionIndex = 35421;

	class DataFulledHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_INVOKE_OFFSET))(this, sender, stageName);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* sender, ::System::String* stageName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_BEGININVOKE_OFFSET))(this, sender, stageName, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
