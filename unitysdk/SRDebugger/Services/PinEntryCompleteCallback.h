#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19E863F0)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19E86440)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19E7BBD0)
#define SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E80710)

namespace SRDebugger::Services
{
	inline static constexpr unsigned int PinEntryCompleteCallback_TypeDefinitionIndex = 35431;

	class PinEntryCompleteCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean validPinEntered)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_INVOKE_OFFSET))(this, validPinEntered);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean validPinEntered, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_BEGININVOKE_OFFSET))(this, validPinEntered, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_PINENTRYCOMPLETECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
