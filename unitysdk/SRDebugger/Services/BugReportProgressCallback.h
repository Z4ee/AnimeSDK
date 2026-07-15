#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F7D60)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F7DB0)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1F7D50)
#define SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F7CE0)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int BugReportProgressCallback_TypeDefinitionIndex = 36500;

	class BugReportProgressCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_BUGREPORTPROGRESSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
