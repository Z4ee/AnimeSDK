#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterEvent; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1F8D30)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1F8D70)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1F8D20)
#define MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA1F8C30)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int DataFulledHandler_TypeDefinitionIndex = 44013;

	class DataFulledHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterEvent* a1, ::System::String* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterEvent*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_DATAFULLEDHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
