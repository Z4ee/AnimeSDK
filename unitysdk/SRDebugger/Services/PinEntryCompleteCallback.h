#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1ACFC970)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1ACFC9C0)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ACF22B0)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFC900)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int PinEntryCompleteCallback_TypeDefinitionIndex = 35731;

	class PinEntryCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
