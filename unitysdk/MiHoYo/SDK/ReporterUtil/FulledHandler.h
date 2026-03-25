#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterDataSequence; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8574220)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8574250)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x8573CD0)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8573CB0)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int FulledHandler_TypeDefinitionIndex = 37330;

	class FulledHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* sender)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_INVOKE_OFFSET))(this, sender);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* sender, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_BEGININVOKE_OFFSET))(this, sender, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
