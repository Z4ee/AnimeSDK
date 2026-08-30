#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK::ReporterUtil { class ReporterDataSequence; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB28FA60)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB28FA90)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xB28FA50)
#define MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB28F960)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int FulledHandler_TypeDefinitionIndex = 47108;

	class FulledHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::ReporterUtil::ReporterDataSequence* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataSequence*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_FULLEDHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
